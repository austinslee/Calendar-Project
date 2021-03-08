#ifndef __DISPLAY_HPP__
#define __DISPLAY_HPP__


#include <iostream>
#include <list>
#include "../header/Moment.hpp"
#include "../header/Subtask.hpp"
#include "../header/Task.hpp"


class Control;



class Display{
    private:


    public:
	virtual void redraw(std::list<Task*>, Control* theControl)= 0;
    virtual void recieveInput(int, std::list<Task*>, Control*) = 0;
    virtual int getSelected() = 0;

};





#endif

