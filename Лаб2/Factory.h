#pragma once
#include <vector>
#include "AString.h"

class Factory
{
	friend class Menu;
public:
	Factory();
	~Factory();
	void AddObject();
	void DeleteObject();
private:
	vector<AString*> pObj;
};

