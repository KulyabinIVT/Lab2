#include "stdafx.h"
#include "Menu.h"
#include <iostream>
#include "AString.h"
#include "SymbString.h"
#include "DecString.h"
using namespace std;

Menu::Menu(vector<Action*> _pAct) : pAct(_pAct) {}
JobMode Menu::SelectJob() const {
	cout << "======================================\n"<<endl;
	cout << "Выберите одно из следующих действий:\n" << endl;
	cout << "1. Добавить объект" << endl;
	cout << "2. Удалить объект" << endl;
	cout << "3. Поработать с объектом" << endl;
	cout << "4. Выйти" << endl;
	int item = SelectItem(4);
	return (JobMode)(item - 1);
}
AString* Menu::SelectObject(const Factory& fctry) const
{
	int nItem = fctry.pObj.size();
	if (!nItem) {
		cout << "Нет объектов." << endl;
		cin.get();
		return 0;
	}
	cout << " .\n";
	cout << "Выберите один из объектов:\n";
	for (int i = 0; i < nItem; ++i) {
		cout << i + 1 << ". ";
		cout << fctry.pObj[i]->GetName() << endl;
	}
	int item = SelectItem(nItem);
	return fctry.pObj[item - 1];
}
	Action* Menu::SelectAction(const AString* pObj) const
{
		if (!pObj) return 0;
	int nItem = pAct.size();
	cout<<" \n";
	cout << "Выберите одно из действий:\n";
	for (int i = 0; i < nItem; ++i) {
		cout<<i + 1<<". ";
		cout<< pAct[i]->GetName() << endl;
	}
	int item = SelectItem(nItem);
	return pAct[item - 1];
}
int Menu::SelectItem(int nItem) {
	cout<<"\n";
	int item;
	while (true) {
		cin >> item;
		if ((item > 0) && (item <= nItem)
			&& (cin.peek() == '\n')) {
			cin.get(); break;
		}
		else {
			cout << "Ошибка (должен быть номер от 1 до " << nItem << "): " << endl;
			cin.clear();
			while (cin.get() != '\n') {};
		}
	}
			return item;
}

Menu::Menu()
{
}


Menu::~Menu()
{
}
