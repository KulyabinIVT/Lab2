#pragma once
#include "Action.h"
class ShowHex :
	public Action
{
public:
	~ShowHex();
	ShowHex() : name("�������� ����������������� ��������") {};
	void Operate(AString*);
	const string& GetName() const { return name; };
private:
	string name; // ����������� ��������
};
extern ShowHex show_hex;

