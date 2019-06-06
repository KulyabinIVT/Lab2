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
	cout << "Выберите тип объекта:\n";
	cout << "1. Символьная строка" << endl;
	cout << "2. Десятичная строка" << endl;
	int item = Menu::SelectItem(2);
	string name;
	cout << "Введите имя объекта: ";
	cin >> name;
	cin.get();
	cout << "Введите значение объекта: ";
	char buf[MAX_LEN_STR];
	cin.getline(buf, MAX_LEN_STR);
	string value = buf;
	AString* pNewObj;
	switch (item) {
	case 1:
	{
		pNewObj = new SymbStr(name, value);
		pObj.push_back(pNewObj);
		cout << "Объект добавлен." << endl;
		break;
	}
	case 2:
	{

		if (IsDecStrVal(value)) {
			cout << "Ошибка!" << endl; return;
		}
		else {
			pNewObj = new DecString(name, value);
		}
		break;
	}
	}
	pObj.push_back(pNewObj);
	cout << "Объект добавлен." << endl;
}
void Factory::DeleteObject(){
	int nItem = pObj.size();
if (!nItem) {
	cout<<"Объектов нет."<<endl;
	cin.get();
	return;
}
cout<<" \n";
cout<<"Удалить один из следующих объектов:\n";
for (int i = 0; i < nItem; ++i)
	cout <<i + 1<<". " <<pObj[i]->GetName()<<endl;
int item = Menu::SelectItem(nItem);
string objName = pObj[item - 1]->GetName();
pObj.erase(pObj.begin() + item - 1);
cout<<"Объект "<<objName<<" удалён."<< endl;
cin.get();
}

Factory::Factory()
{
}


Factory::~Factory()
{
}
