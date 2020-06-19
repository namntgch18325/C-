#include "Habits.h"
#include <string>
#include <iostream>

using namespace std;

void main()
{
	Habits h1("Run","Walk","20/6/2000","15/11/2000");

	cout << h1.get_description();
	h1.display();
	


}