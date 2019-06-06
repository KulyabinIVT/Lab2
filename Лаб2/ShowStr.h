#pragma once
#include "Action.h"
using namespace std;

class ShowStr :
	public Action
{
public:
	~ShowStr();
	ShowStr() : name("Показать строковое значение") {}
	void Operate(AString*);
	const string& GetName() const { return name; }
private:
	string name; // обозначение операции
};
	extern ShowStr show_str;

