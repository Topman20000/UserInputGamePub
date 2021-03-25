#pragma once
#ifndef QUESTA_H_
#define QUESTA_H_

#include<iostream>
#include"Quests.h"
using namespace std;

class QuestA : public Quest
{
public:
	QuestA();

	void QuestAFunction();
	void QuestA1Function();
	void QuestA2Function();
	void QuestA3Function();
	void QuestA4Function();

	~QuestA();

};
#endif //
