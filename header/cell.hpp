#ifndef __CELL_HPP__
#define __CELL_HPP__

#include <iostream>
#include <vector>
#include"../header/menuitem.hpp"
#include "../header/task.hpp"

class Cell {
	public:
		std::vector<MenuItem*> menuItemVect;
		int taskID;	
		Task* task;


		void createMenuItem(MenuItem* item) { MenuItemVect.push_back(item); }
		int getAssociatedID() { return taskID; }
		int sizeOfMenu() { return menuItemVect.size(); }
		string printMenuItem(int x) {
			return menuItemVect[x]->itemName;
		}
		void actMenu(int x) {
			menuItemVect[x]->selected();
		}


			
		virtual void drawTopCell() = 0;
		virtual void drawMiddleCell() = 0;
		virtual void drawMiddleCellTitle() = 0;
		virtual void drawBottomCell() = 0;
};

#endif //__CELL_HPP__
