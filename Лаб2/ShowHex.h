#pragma once
#include "Action.h"
class ShowHex :
	public Action
{
public:
	~ShowHex();
	ShowHex() : name("Показать шестнадцатеричное значение") {};
	void Operate(AString*);
	const string& GetName() const { return name; };
private:
	string name; // обозначение операции
};
extern ShowHex show_hex;

