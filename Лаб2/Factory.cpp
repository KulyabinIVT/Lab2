#include "stdafx.h"
#include "Factory.h"
#include <iostream>
#include "Menu.h"
#include "SymbStr.h"
#include "DecString.h"
using namespace std;
#define MAX_LEN_STR 100


void Factory::AddObject() {
	cout << "\n";
	cout << "�������� ��� �������:\n";
	cout << "1. ���������� ������" << endl;
	cout << "2. ���������� ������" << endl;
	int item = Menu::SelectItem(2);
	string name;
	cout << "������� ��� �������: ";
	cin >> name;
	cin.get();
	cout << "������� �������� �������: ";
	char buf[MAX_LEN_STR];
	cin.getline(buf, MAX_LEN_STR);
	string value = buf;
	AString* pNewObj;
	switch (item) {
	case 1:
	{
		pNewObj = new SymbStr(name, value);
		pObj.push_back(pNewObj);
		cout << "������ ��������." << endl;
		break;
	}
	case 2:
	{

		if (IsDecStrVal(value)) {
			cout << "������!" << endl; return;
		}
		else {
			pNewObj = new DecString(name, value);
		}
		break;
	}
	}
	pObj.push_back(pNewObj);
	cout << "������ ��������." << endl;
}
void Factory::DeleteObject(){
	int nItem = pObj.size();
if (!nItem) {
	cout<<"�������� ���."<<endl;
	cin.get();
	return;
}
cout<<" \n";
cout<<"������� ���� �� ��������� ��������:\n";
for (int i = 0; i < nItem; ++i)
	cout <<i + 1<<". " <<pObj[i]->GetName()<<endl;
int item = Menu::SelectItem(nItem);
string objName = pObj[item - 1]->GetName();
pObj.erase(pObj.begin() + item - 1);
cout<<"������ "<<objName<<" �����."<< endl;
cin.get();
}

Factory::Factory()
{
}


Factory::~Factory()
{
}
