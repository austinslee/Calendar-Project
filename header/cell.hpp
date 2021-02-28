#ifndef __CELL_HPP__
#define __CELL_HPP__

#include <iostream>
#include <vector>
#include"../header/conio.hpp"
#include"../header/menuitem.hpp"

class Cell {
	private:
		std::vector<MenuItem*> menuItemVect;
		int taskID;
	public:	
		void createMenuItem(item*) { MenuItemVect.push_back(item*); }
		int getAssociatedID() { returns taskID; }
		int sizeOfMenu() { return menuItemVect.size(); }
		void printMenuItem(int x) {
			std::cout << menuItemVect[x]->itemName;
		}
		void actMenuItem(int x) {
			std::menuItemVect[x]->selected();
		}
			
		virtual void drawTopCell() = 0;
		virtual void drawMiddleCell() = 0;
		virtual void drawBottomCell() = 0;
};

#endif //__CELL_HPP__
