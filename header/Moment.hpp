#ifndef __MOMENT_HPP__
#define __MOMENT_HPP__

#include <string>



class Moment {
   private:
	std::string title;
	std::string description;
	std::string classification;
	int month;
	int date;
   	int startTime;
	int endTime;
	int priority;
	int ID;
   public:
	Moment(){}; // default constructor
	
	// the most common constructor
	Moment(std::string titIn, std::string descIn, std::string catIn, int monIn, int dateIn, int startIn, int endIn, int priIn, int inID) {

	title = titIn;
	description = descIn;
	classification = catIn;
	month = monIn;
	date = dateIn;
	startTime = startIn;
	endTime = endIn;
	priority = priIn;
	ID = inID;
	}
	
	virtual ~Moment() {}



	std::string getTitle(){ return title; }
	std::string getDescription(){ return description;}
	std::string getClass(){ return classification; }
	int getStart(){ return startTime; }
	int getEnd() { return endTime; }
	int getTotal() {return (((endTime/100 - startTime/100)*60) + (endTime%100)-(startTime%100));}
	int getID() {return ID;}
	int getPriority() { return priority; }
	int getMonth() {return month;}
	int getDate() {return date;}

	void setTitle(std::string newTit) { title = newTit; }
	void setDescription(std::string newTit) { description = newTit; }
	void setClass(std::string newTit) { classification = newTit; }
	void setStart(int newTit) { startTime = newTit; }
	void setEnd(int newTit) { endTime = newTit; }
	void setPriority(int newTit) { priority = newTit; }
};



#endif
