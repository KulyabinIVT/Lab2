#include "stdafx.h"
#include "DecString.h"
using namespace std;

bool IsDecStrVal(string _str) {
	for (int i = 0; 1 < _str.size(); i++)
		if (-1 == alph.find_first_of(_str[i]))
			return false;
	return true;
}
/*DecString::DecString(string _name, string _val):name(_name) {
		if(IsDecStrVal(_val))
			val = _val;
	}*/
DecString::~DecString()
{
}
