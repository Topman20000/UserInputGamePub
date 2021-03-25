#include<iostream>
#include<string>
#include<limits>
#include<Windows.h>
#include<ctime>

#include "AttackChoices.h"
#include"Quests.h"
#include"QuestA.h"
	
using namespace std;


int main()
{
	
	AttackChoices * NewChoices = new AttackChoices();		//create object instance of attack choices
	NewChoices->userClass();								//calls the userClass()' function to determine which 
															//class the user will choose, along with establishing their name and age.

	//Instantiate the quest class from Quests.cpp
	Quest * q = new(Quest);									//create object instance of Questclass
	q->PlayQuest();
	Sleep(2000);
	//Instantiate the quest functions from QuestA.cpp
	QuestA * B = new(QuestA);								//creates new instance of QuestA object and runs it's code.
	B->QuestAFunction();
	

	//QuestA();
	Sleep(2000);

system("pause");
}




void CheckClassForChoices()
{
	AttackChoices* AChoices = new AttackChoices();

}
