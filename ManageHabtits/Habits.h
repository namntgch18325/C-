#pragma once

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

class Habits
{
protected:
	string nameHabit;
	string description;
	float percent;
	string timeBegin;
	string timeCompleted;
public:
	Habits(const string& name, const string& description, const string& timeBegin, const string& timeCompleted);
	string get_nameHabit();
	string get_description();
	float get_percent();
	void set_nameHabit(const string &nameHabit);
	void set_description( const string &descripton);
	void set_percent(const float &percent);
	void set_timeBegin(const string& time);
	void set_timeCompleted(const string& time);
	string get_timeBegin();
	string get_timeCompleted();
	void display();

};

class ManageHabits
{
//public: virtual void display();

};