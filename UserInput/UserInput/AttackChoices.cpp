#include "AttackChoices.h"
#include <string>
#include <iostream>
#include<limits>
#include<Windows.h>
#include<ctime>

using namespace std;
string Class[9]
{
	"Warrior",
	"Wizard",
	"Rogue",
	"Priest",
	"Paladin",
	"Mage",
	"Warlock",
	"Necromancer",
	"Bard"
};
bool IsClass = false;
bool IsWarrior = false;
bool IsWizard = false;
bool IsRogue = false;
bool IsPriest = false;
bool IsPaladin = false;
bool IsMage = false;
bool IsWarlock = false;
bool IsNecromancer = false;
bool IsBard = false;





AttackChoices::AttackChoices()					//object constructor
{

}

void AttackChoices::userClass()

{
	string CharacterName;
	int age;

	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "			Ahhhh!  I see that the computer has taken it upon itself to find me\n";
	cout << "			another brave soul, who will risk his life, and the life of his computer, \n";
	cout << "			to embark on an adventure into the land.... of course I imagine you under-\n";
	cout << "			stand the risks involved with this understaking, so let us not waste any \n";
	cout << "			more time standing arround wondering about different ways to die.";



	Sleep(12000);
	system("CLS");
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "			What is your name?" << endl;

	getline(cin, CharacterName);

	system("CLS");

	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << endl;
	cout << "			Greetings to you,  " << CharacterName << ".  And what, pray, may be your age?" << endl;

	cin >> age;

	system("CLS");
	cout << endl;
	cout << "			Ahh..." << age << "... A wonderful age to be certain! " << CharacterName << "\n"
		<< "			And do tell, what is your class?\n \n"
		<< "            .....BUT a word of caution!!!!\n"
		<< "\n"
		<< "                   Not everyone who comes forth, to write their saga upon the ediface of time, can" << endl;
		cout << "           live to see the ending they so desire, EVEN as they have chosen to try! The mantle of" << endl;
		cout << "           destiny is only lightest upon the ONE...but for the many, it shall crush them in their " << endl;
		cout << "           foolishness. Do not choose your path Lightly... " << CharacterName << ". Take your time" << endl;
		cout << "           in deciding your destiny.  What fate will you choose?\n"
		<< endl;
	cout << endl;
	cout << "			You may Choose from the following by typing the number" << endl;

	cout << endl;
	for (int i = 0; i < (sizeof(Class) / sizeof(*Class)); i++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << i + 1 << ") " << Class[i] << endl;
		switch (i)
		{
		case 0:
			IsWarrior = true;
			break;
		case 1:
			IsWizard = true;
			break;
		case 2:
			IsRogue = true;
			break;
		case 3:
			IsPriest = true;
			break;
		case 4:
			IsPaladin = true;
			break;
		case 5:
			IsMage = true;
			break;
		case 6:
			IsWarlock = true;
			break;
		case 7:
			IsNecromancer = true;
			break;
		case 8:
			IsBard = true;
			break;
		default:
			cout << endl;
			cout << "Did your mother just teach you not to count? That is NOT an acceptable answer you dumb little SHITE!  Try that one again!" << endl;
			break;
		}
	}
	int i;
	cin >> i;


	system("CLS");

	cout << endl;
	cout << "All hail " << CharacterName << ", age: " << age << ", the brave and migty " << Class[i - 1] << endl; // Note: -1 due to the previous + 1 
	cout << endl;
	bool IsClass = true;

	const string Charactername = CharacterName;

	Sleep(2000);

	system("CLS");
	cout << "Congratulations, you've Completed the Introduction" << endl;

	Sleep(2000);

	system("CLS");
}




string WarriorChoices[4]
{
	"Attack",
	"Defend",
	"Dodge",
	"Run Away like a little chicken bitch",
};
string WizardChoices[4]
{
	"Cast Attack spell",
	"Cast DefenseSpell"
	"Cast illusion Spell",
	"Cast Evasion Spell(like a wuss)"
};
string RogueChoices[4]
{
	"Attack like a Rogue",
	"Backstab like a Motherfucker",
	"Evade Like a Dodger",
	"Skulk away like a typical Rogue",
};
string PriestChoices[4]
{
	"Cast Mace of light attack",
	"Cast Heavely Heeling",//heal thyself
	"Cast Holy Essense",
	"Cast Rite of Cowardice"
};
string PaladinChoices[4]
{
	"Use Divine Strike Attack",
	"Use Righteous Shield Block",
	"Use Saving Grace Dodge",
	"Use Tactical Retreat"
};
string MageChoices[4]
{
	"Cast Fire Attack Spell",
	"Case Ice Shield Spell",
	"Cast Air Evasion Spell"
	"Cast Dirt Cheap Earth Retreating Spell",
};
string WarlockChoices[4]
{
	"Cast Unholy Essence Spell",
	"Cast Guardian of the Underworld Spell",
	"Cast Ethereal Taunting Spell"
	"Cast pussy retreat spell"
};
string NecromancerChoices[4]
{
	"Cast Mortal consumption Attack",
	"Cast Dark Choirs Defense",
	"Cast Shaddow of Death Evasion",
	"Cast Retreat back to/with Damnation"
};
string BardChoices[4]
{
	"Ballad of Bravery/Lute Attack",
	"Song of Fortitude/Drum Defense",
	"Tale of Mystery/Harp Evasion",
	"Dirge of Defeat/Stick a flute up your ass and run away like a fuckign bard!!!"
};



typedef void WhichOne();
void AttackChoices::WarriorsChoices()
{
	for (int w = 0; w < (sizeof(WarriorChoices) / sizeof(*WarriorChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << WarriorChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::WizardsChoices()
{
	for (int w = 0; w < (sizeof(WizardChoices) / sizeof(*WizardChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << WizardChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::RoguesChoices()
{
	for (int w = 0; w < (sizeof(RogueChoices) / sizeof(*RogueChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << RogueChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::PriestsChoices()
{
	for (int w = 0; w < (sizeof(PriestChoices) / sizeof(*PriestChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << PriestChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::PaladinsChoices()
{
	for (int w = 0; w < (sizeof(PaladinChoices) / sizeof(*PaladinChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << PaladinChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::MagesChoices()
{
	for (int w = 0; w < (sizeof(MageChoices) / sizeof(*MageChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << MageChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::WarlocksChoices()
{
	for (int w = 0; w < (sizeof(WarlockChoices) / sizeof(*WarlockChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << WarlockChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::NecromancersChoices()
{
	for (int w = 0; w < (sizeof(NecromancerChoices) / sizeof(*NecromancerChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << NecromancerChoices[w] << endl;
	}
	int w;
	cin >> w;
}
void AttackChoices::BardsChoices()
{
	for (int w = 0; w < (sizeof(BardChoices) / sizeof(*BardChoices)); w++) // Note: (sizeof(Class) / sizeof(*Class)) determines the correct size of the array (in case you want to change the array later)
	{
		cout << w + 1 << ") " << BardChoices
			[w] << endl;
	}
	int w;
	cin >> w;
}



void AttackChoices::CheckClassForChoices()
{
	WhichOne array[] = {WarriorsChoices,};

	for (int c = 0; c < (sizeof(Class) / sizeof(*Class)); c++)
	{
		switch (c)
		{
		case 0: 

			WarriorsChoices();
			break;
		case 1:

			WizardsChoices();
			break;
		case 2:

			RoguesChoices();
			break;
		case 3:

			PriestsChoices();
			break;
		case 4:

			PaladinsChoices();
			break;
		case 5:
			MagesChoices();
			break;
		case 6:
			WarlocksChoices();
			break;
		case 7:
			NecromancersChoices();
			break;
		case 8:
			BardsChoices();
			break;
		default:
			break;
		}
	}	
	return;

	}



AttackChoices::~AttackChoices()
{

}


