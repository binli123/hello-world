#include "stdafx.h"
#include "Language.h"
#include<iostream>

using namespace std;

int Language::serial = 1001;


Language::Language(int x, int y)
{
	cout << "constructed function\n";
	serial = y;
	age = x;
}

Language::Language()
{
	serial = 1001;
	age = 5;
}


Language::~Language()
{
}
