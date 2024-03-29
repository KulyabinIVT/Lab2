// Лаб2.cpp: определяет точку входа для консольного приложения.
//Tип1 - SymbString, Tип2 - DecString(десятичная строка), операции - ShowBin(показать изображение двоичного значения объекта), 
//ShowOct(показать изображение восьмеричного значения объекта), ShowHex(показать изображение шестнадцатеричного значения объекта)
//Каждый объект должен иметь идентификатор(в виде произвольной строки символов) и одно/несколько полей для хранения состояния объекта.
//Клиенту(функции main) должны быть доступны следующие основные операции: создать объект, удалить объект, показать значение объекта
//Операции по созданию и удалению объектов инкапсулировать в классе Factory.
//Предусмотреть меню, позволяющее продемонстрировать заданные операции.

#include "stdafx.h"
#include <iostream>
#include "AString.h"
#include "SymbString.h"
#include "DecString.h"
#include "Action.h"
#include "ShowStr.h"
#include "ShowOct.h"
#include "ShowHex.h"
#include "ShowBin.h"
#include "Factory.h"
#include "Menu.h"
#include "Windows.h"
using namespace std;

Action* pActs[] = { &show_str,&show_bin, &show_oct,&show_hex };
vector<Action*> actionList(pActs,pActs + sizeof(pActs) / sizeof(Action*));

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); 
	Factory factory;
	Menu menu(actionList);
	JobMode jobMode;
	while ((jobMode = menu.SelectJob()) != Exit) {
		switch (jobMode) {
		case AddObj:
		{
			factory.AddObject();
			break;
		}
		case DelObj:
		{
			factory.DeleteObject();
			break;
		}
		case WorkWithObj:
		{
			AString* pObj = menu.SelectObject(factory);
			Action* pAct = menu.SelectAction(pObj);
			if (pAct)
				pAct->Operate(pObj);
			break;
		}
		cin.get();
		}

	}
	return 0;
}

