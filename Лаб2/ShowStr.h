#pragma once
#include "Action.h"
using namespace std;

class ShowStr :
	public Action
{
public:
	~ShowStr();
	ShowStr() : name("�������� ��������� ��������") {}
	void Operate(AString*);
	const string& GetName() const { return name; }
private:
	string name; // ����������� ��������
};
	extern ShowStr show_str;

