#include "QuestA1.h"
#include "AttackChoices.h"

#include<iostream>
#include<string>
#include<limits>
#include<Windows.h>

using namespace std;

QuestA1::QuestA1()
{
	
	
}

void QuestA1::QuestA11Function()
{
	
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "			But AS you were walking along, minding your own business even, suddenly a\n";
	cout << "			stumpy and sad looking peasant in a potato sack pops up out of the grass\n";
	cout << "			like a weed in the garden.  His eyes are bugged out in different \n";
	cout << "			dirrections like a drunken man or a woman without some dark chocolate\n ";
	cout << "			during her special time of the month!/n";
	cout << "			\n";
	Sleep(13000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "           'GIMME ALL YER MUNNY AND BILLONGEENGS, STUPID!!' it cried out like a mad\n ";
	cout << "           man, waving a pointy stick.  Although it looks like someone needs a plague\n ";
	cout << "           doctor, there is none to be found on this open road.  So now the task of\n";
	cout << "           mercy falls upon your shoulders.  How will YOU conduct that task?\n";
	Sleep(5000);
	

	AttackChoices * A1Choices = new(AttackChoices);
	A1Choices->CheckClassForChoices();
}
void QuestA1::QuestA12Function()
{
	//You encounter a rabbid knoll, what do you do
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "			But AS you were walking along, minding your own business even, suddenly a\n";
	cout << "			gnoll with a very nasty disposition jumps out of the bushes and begins to\n";
	cout << "			wildly swing a ball and chain as it charges on it's padded paws. You can \n";
	cout << "			clearly discern it's rabbid state by the bloodshot look in its eyes, and \n ";
	cout << "			the foamy Saliva frothing from upon the gums of his incisors/n";
	cout << "			\n";
	Sleep(13000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "           'BARK BARK BARK, BARKKARKBARK BARK-A-BRARK' it shouted out like an \n ";
	cout << "           incoherent mastiff or bloodhound from the innner side of a fence, \n ";
	cout << "           harassing the children passing by on their way home... it is damned\n";
	cout << "           annoying, and probably has no hope of being saved.  how WILL you \n";
	cout << "			euthanize this damned mongrel standing in your way?\n";
	Sleep(5000);


	AttackChoices * A2Choices = new(AttackChoices);
	A2Choices->CheckClassForChoices();

}
void QuestA1::QuestA13Function()
{
	//You encounter a group of bandits for the first time, what do you do
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "			But AS you were walking along, minding your own business even, suddenly a\n";
	cout << "			gnoll with a very nasty disposition jumps out of the bushes and begins to\n";
	cout << "			wildly swing a ball and chain as it charges on it's padded paws. You can \n";
	cout << "			clearly discern it's rabbid state by the bloodshot look in its eyes, and \n ";
	cout << "			the foamy Saliva frothing from upon the gums of his incisors/n";
	cout << "			\n";
	Sleep(13000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "           'BARK BARK BARK, BARKKARKBARK BARK-A-BRARK' it shouted out like an \n ";
	cout << "           incoherent mastiff or bloodhound from the innner side of a fence, \n ";
	cout << "           harassing the children passing by on their way home... it is damned\n";
	cout << "           annoying, and probably has no hope of being saved.  how WILL you \n";
	cout << "			euthanize this damned mongrel standing in your way?\n";
	Sleep(5000);


	AttackChoices * A2Choices = new(AttackChoices);
	A2Choices->CheckClassForChoices();
}

void QuestA1::QuestA14Function()
{
}

QuestA1::~QuestA1()
{

}