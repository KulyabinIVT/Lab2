#include "stdafx.h"
#include "ShowHex.h"
#include "DecString.h"
#include <iostream>
using namespace std;

void ShowHex::Operate(AString* pObj) {
	cout << pObj->GetName() << ": ";
	long decVal = GetDecimal(pObj);
	if (decVal != -1)
		GetHex(pObj);
	cout << endl;
	cin.get();
}
ShowHex show_hex;


ShowHex::~ShowHex()
{
}
