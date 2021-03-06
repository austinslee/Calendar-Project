#ifndef __WEEKSPATIAL_HPP__
#define __WEEKSPATIAL_HPP__

#include <iostream>
#include <list>

#include "../header/Moment.hpp"
#include "../header/Subtask.hpp"
#include "../header/Task.hpp"


#include "../header/display.hpp"


//#include "../header/cell.hpp"

class Cell;




class WeekSpatial: public Display {
    private:
        double currTime;
        Cell* cells[7][24] = {nullptr};

        int selectedDay = 0;
        int selectedTime = 0;
        int mode = 1;  // either 1 or 2,  representing 1: visual and   2: submenu is being displayed
        int selectedMenuItem = 0;
    public:
        WeekSpatial();
        ~WeekSpatial();
        virtual void redraw(std::list<Task*>, Control* theControl);
        void drawVisual(std::list<Task*>, Control* theControl);
        void drawSubMenu();
        int getSelected();
        void recieveInput(int, std::list<Task*>, Control*);
        void setMode(int x){ mode = x;};
        void clearScreen();

        void setSelectedDay(int x){ selectedDay = x;}
        void setSelectedTime(int x){ selectedTime = x;}
        void setModus(int x){setMode(x);}
        int getSelectedDay(){return selectedDay;}
        int getSelectedTime(){return selectedTime;}
        int getSelDay(){return getSelectedDay();}
        int getSelTime(){return getSelectedTime();}
        





};





#endif  //__WEEKSPATIAL_HPP__


