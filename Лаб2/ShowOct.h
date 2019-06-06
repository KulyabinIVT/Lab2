#pragma once
#include "Action.h"
using namespace std;
class ShowOct :
	public Action
{
public:
	~ShowOct();
	ShowOct() : name("Показать восьмеричное значение") {};
void Operate(AString*);
const string& GetName() const { return name; };
private:
	string name; // обозначение операции
};
extern ShowOct show_oct;

