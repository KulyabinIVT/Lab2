#pragma once
#include "Action.h"
using namespace std;

class ShowBin :
	public Action
{
public:
	ShowBin() : name("Показать бинарное значение") {}
	void Operate(AString*);
	const string& GetName() const{ return name; }
	~ShowBin();
private:
	string GetBinary(AString*) const;
	string name; // обозначение операции
};
	extern ShowBin show_bin;

