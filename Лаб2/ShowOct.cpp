#include "stdafx.h"
#include "ShowOct.h"
#include "DecString.h"
#include <iostream>
using namespace std;

void ShowOct::Operate(AString* pObj) {
	cout << pObj->GetName() << ": ";
	long decVal = GetDecimal(pObj);
	if (decVal != -1)
		GetOct(pObj);
	cout << endl;
	cin.get();
}
ShowOct show_oct;

ShowOct::~ShowOct()
{
}
