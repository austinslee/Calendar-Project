#ifndef __MIDDLE_CELL_HPP__
#define __MIDDLE_CELL_HPP__

#include "../header/cell.hpp"

class MiddleCell : public Cell {
private:
public:


	MiddleCell() {}	
	MiddleCell(Task* ftask) { task = ftask; }

    MiddleCell(Task *ftask, Control* theControl) {
	    cellType = 3;
        task = ftask;
        taskID = ftask->getID();
        createMenuItem(new MenuItem("Edit Title", new CommandEditTitle(theControl)));
        createMenuItem(new MenuItem("Edit Description", new CommandEditDescription(theControl)));
        createMenuItem(new MenuItem("Edit Classification", new CommandEditClassification(theControl)));
        createMenuItem(new MenuItem("Edit Start Time", new CommandEditStartTime(theControl)));
        createMenuItem(new MenuItem("Edit End Time", new CommandEditEndTime(theControl)));
        createMenuItem(new MenuItem("Delete this task", new CommandDeleteTask(theControl)));
        createMenuItem(new MenuItem("Add Subtask", new CommandAddSubtask(theControl)));
    }

    void drawMiddleCellTitle() {
        std::string taskTitle = task->getTitle();
        for (unsigned i = 6; i < 13; ++i) {
            if (i < taskTitle.size()) {
                std::cout << "\033[;34m" << taskTitle.at(i) << "\033[0m";


            }
            if (i >= taskTitle.size()) {
                std::cout << " ";

            }
        }
    }
    ~MiddleCell() {}

	void drawMiddleCellTitle(int x) {
		std::string taskTitle = task->getTitle();	
		int place = x;
		int j;
		if(place <= 1) {
			for(unsigned i = 6; i < 13; ++i) {
				if(i < taskTitle.size()) {
					std::cout << "\033[;34m" << taskTitle.at(i) << "\033[0m";
				}
				if(i >= taskTitle.size()) {
					std::cout << " ";
				}
			}
		}
		if(place > 1) {
			j = (place * 7) - 1;
			for(int i = j; i < j + 7; ++i) {
				if(i < taskTitle.size()) {
                                        std::cout << "\033[;34m" << taskTitle.at(i) << "\033[0m";
				}
				if(i >= taskTitle.size()) {
					std::cout << " ";
				}
			}
		}
	}
		

        void highlightMiddleCellTitle(int x) {
                std::string taskTitle = task->getTitle();
                int place = x;
                int j;
                if(place <= 1) {
                        for(unsigned i = 6; i < 13; ++i) {
                                if(i < taskTitle.size()) {
                                        std::cout << "\033[;32m" << taskTitle.at(i) << "\033[0m";
                                }
                                if(i >= taskTitle.size()) {
                                        std::cout << " ";
                                }
                        }
                }
                if(place > 1) {
                        j = (place * 7) - 1;
                        for(int i = j; i < j + 7; ++i) {
                                if(i < taskTitle.size()) {
                                        std::cout << "\033[;32m" << taskTitle.at(i) << "\033[0m";
                                }
                                if(i >= taskTitle.size()) {
                                        std::cout << " ";
                                }
                        }
                }
        }



    void drawTopCell() { std::cout << "\033[;34m-------\033[0m"; }

    void drawMiddleCell() { std::cout << "       "; }

    void drawBottomCell() { std::cout << "\033[;34m-------\033[0m"; }

    void highlightTopCell() { std::cout << "\033[;32m*******\033[0m"; }

    void highlightMiddleCell() { std::cout << "       "; }

    void highlightBottomCell() { std::cout << "\033[;32m*******\033[0m"; }

	

    void highlightMiddleCellTitle() {
        std::string taskTitle = task->getTitle();
        for (unsigned i = 6; i < 13; ++i) {
            if (i < taskTitle.size()) {
                                        std::cout << "\033[;32m" << taskTitle.at(i) << "\033[0m";
            }
            if (i >= taskTitle.size()) {
                std::cout << " ";
            }
        }
    }

				

};

#endif //__MIDDLE_CELL_HPP__
