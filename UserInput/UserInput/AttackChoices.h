#pragma once

#ifndef _ATTACK_CHOICES_H_
#define _ATTACK_CHOICES_H_


class AttackChoices
{
public:


	AttackChoices();		//attack choices function
	
	
	void userClass();		//calls the user class 

	void WarriorsChoices();
	void WizardsChoices();
	void RoguesChoices();
	void PriestsChoices();
	void PaladinsChoices();
	void MagesChoices();
	void WarlocksChoices();
	void NecromancersChoices();
	void BardsChoices();

	void CheckClassForChoices();	//supposed to check to make sure that the choice is sellected and no other options pop up,but it's not doing that FIX**
	~AttackChoices();
};

#endif // !_ATTACK_CHOICES_H_