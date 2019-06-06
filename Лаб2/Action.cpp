#include "stdafx.h"
#include "Action.h"
#include <iostream>
#include "DecString.h"
using namespace std;

int Action::GetDecimal(AString* pObj) const {
	if (dynamic_cast<DecString*>(pObj)) {
		int dec;
		string source = pObj->GetVal();
		dec = atoi(source.c_str());
		return dec;
	}
	else {
		cout << "Действие не поддерживается." << endl;
		return -1;
	}
}

void Action::GetOct(AString* pObj) const {
	if (dynamic_cast<DecString*>(pObj)) {
		int oct = 0;
		string source = pObj->GetVal();
		oct = stoi(source.c_str());
		cout.unsetf(ios::dec);
		cout.setf(ios::oct);
		cout << oct;
	}
	else {
		cout << "Действие не поддерживается." << endl;
	}
}

void Action::GetHex(AString* pObj) const {
	if (dynamic_cast<DecString*>(pObj)) {
		string digits[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
		int dec = 0;
		string source = pObj->GetVal();
		dec = stoi(source.c_str()); 
		string hex;
		do
		{
			hex.insert(0, digits[dec % 16]);
			dec /= 16;
		} while (dec != 0);
		cout << hex;
	}
	else {
		cout << "Действие не поддерживается." << endl;
	}
}

Action::Action()
{
}

