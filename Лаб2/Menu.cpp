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
	cout << "�������� ���� �� ��������� ��������:\n" << endl;
	cout << "1. �������� ������" << endl;
	cout << "2. ������� ������" << endl;
	cout << "3. ���������� � ��������" << endl;
	cout << "4. �����" << endl;
	int item = SelectItem(4);
	return (JobMode)(item - 1);
}
AString* Menu::SelectObject(const Factory& fctry) const
{
	int nItem = fctry.pObj.size();
	if (!nItem) {
		cout << "��� ��������." << endl;
		cin.get();
		return 0;
	}
	cout << " .\n";
	cout << "�������� ���� �� ��������:\n";
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
	cout << "�������� ���� �� ��������:\n";
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
			cout << "������ (������ ���� ����� �� 1 �� " << nItem << "): " << endl;
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
