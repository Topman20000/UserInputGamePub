#include<iostream>
#include<string>
#include<limits>
#include<Windows.h>

#include "QuestA.h"
#include "QuestA1.h"


using namespace std;


QuestA::QuestA()												//constructor for QuestA() object instances
{

}
void QuestA::QuestAFunction()
{
	/*void QuestA1Function();
	void QuestA2Function();
	void QuestA3Function();
	void QuestA4Function();*/
	
	string QuestA[4] //This array holds the choices you make for the first step of the quest.
	{
	"Take the road North into the mountain",
	"Take the road South into the valley",
	"Take the road East into the woods",
	"Take the road West into the city"
	};
	
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "As you make your way out of that shithole of a town in which you sojurned, You couldn't precisely figure out which \n";
			"way to go.  \n";
	cout << "You stood in the town square, trying to deduce your direction... which way should this wanderer go?\n";

	for (int a = 0; a < (sizeof(QuestA) / sizeof(*QuestA)); a++) // this For loop outputs the choices in the QuestA[4] array, naming "a" as the variable 
																 //to choose which way to go and taking imput between 1 and 4.

																 // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << a + 1 << ") " << QuestA[a] << endl;
	}
	int a;
	cin >> a;

	switch (a) {
	case 1:
	{
		system("CLS");
		QuestA1Function();
		break;
	}
	case 2:
	{
		system("CLS");
		QuestA2Function();
		break;
	}
	case 3:
	{
		system("CLS");
		QuestA3Function();
		break;
	}
	case 4:
	{
		system("CLS");
		QuestA4Function();
		break;
	}
	}   // Which road will you take???
}
void QuestA::QuestA1Function()//you took the road North into the mountain",		
{																												//clears screen, and calls the below cout statements and generates A11 as the new QuestA1() object
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "				You took the road North into the mountain!  The air was cold and bitter, but \n";
	cout << "			you are not a pussy! you did NOT sign on for this quest, just to complain about\n ";
	cout << "			a couple of frozen balls." << endl;
	Sleep(13000);
	
	QuestA1 * A11 = new QuestA1();
	A11->QuestA11Function();
	

}
void QuestA::QuestA2Function()//you took the road South into the valley",
{																												//clears screen, and calls the below cout statements and generates A11 as the new QuestA1() object
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "you took the road South into the valley!  It was a breezy and tepid day for ";
	cout << "adventuring.  But clearly you're not up to hiking the mountains today, so you";
	cout << "don't need to complain about frozen balls";
	cout << endl;
}
void QuestA::QuestA3Function()//you took the road East into the woods", 
{
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "you took the road East into the woods";
	cout << endl;
}
void QuestA::QuestA4Function()//you took the road West into the city"
{
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "you took the road West into the city";
	cout << endl;

}



QuestA::~QuestA()
{

	cout << "QuestA Destructor" << endl;
	Sleep(1000);
}