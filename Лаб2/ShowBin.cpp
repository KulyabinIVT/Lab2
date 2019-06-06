#include "stdafx.h"
#include "ShowBin.h"
#include "Action.h"
#include "AString.h"
#include <iostream>
#include <numeric>
#include <bitset>
using namespace std;

void ShowBin::Operate(AString* pObj) {
	cout<<pObj->GetName()<<": ";
	cout<<GetBinary(pObj)<<endl;
	cin.get();
}
int charToInt(char c) {
	return c - '0';
}
int add(int i, char c) {
	return i + charToInt(c);
}
string ShowBin::GetBinary(AString* pObj) const {
	string source = pObj->GetVal();
	int i = atoi(source.c_str());;
	bitset<16> bitset = i;
	return bitset.to_string<char, char_traits<char>, allocator<char> >();
}
// Глобальный объект
ShowBin show_bin;

ShowBin::~ShowBin()
{
}
