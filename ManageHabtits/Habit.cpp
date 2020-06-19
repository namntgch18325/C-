#include "Habits.h"
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

Habits::Habits(const string& name, const string& description, const string& timeBegin, const string& timeCompleted)
{
	this->nameHabit = name;
	this->description = description;
	this->timeBegin = timeBegin;
	this->timeCompleted = timeCompleted;
};

string Habits::get_nameHabit()
{
	return nameHabit;
};

string Habits::get_description()
{
	return description;
};

float Habits::get_percent()
{
	return percent;
};

void Habits::set_nameHabit(const string& nameHabit)
{
	this->nameHabit = nameHabit;
};

void Habits::set_description(const string& description)
{
	this->description = description;
};

void Habits::set_percent(const float& percent)
{
	this->percent = percent;
}

void Habits::set_timeBegin(const string& time)
{
	this->timeBegin = time;
};

string Habits::get_timeBegin()
{
	return timeBegin;
};

void Habits::set_timeCompleted(const string& time)
{
	timeCompleted = time;
};

string Habits::get_timeCompleted()
{
	return timeCompleted;
};


void Habits::display()
{
	//cout << Habits.get_nameHabit() << endl;
	//this->get_description();
	cout << this->timeBegin << endl;
}

//void ManageHabits::display()
//{
//
//}