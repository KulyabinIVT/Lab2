#pragma once
#include "Action.h"
using namespace std;
class ShowOct :
	public Action
{
public:
	~ShowOct();
	ShowOct() : name("�������� ������������ ��������") {};
void Operate(AString*);
const string& GetName() const { return name; };
private:
	string name; // ����������� ��������
};
extern ShowOct show_oct;

