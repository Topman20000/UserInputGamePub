#include<iostream>
#include<string>
#include<limits>
#include<Windows.h>
#include"Quests.h"
#include"QuestA.h"
using namespace std;

Quest::Quest()
{

}

void Quest::PlayQuest()							//this starts the journey
{
	cout << "let us begin the quest!\n";		//upon completing the userClass() func, runs this code of text
}

Quest::~Quest()
{
	cout << "Quest Destructor" << endl;			//once the void function is  done calling, destroy the object.
	Sleep(2000);
}