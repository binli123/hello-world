// ConsoleApplication Github Hello.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "Language.h"

using namespace std;

void HelloWorld();

int main()
{
	Language M;
	Language L;
	HelloWorld();
	cout << "Language Serial: " << M.GetSerial() << "\n";
	cout << "Language Age: " << L.GetAge() << "\n";
	cout << "Hello World" << "\n";

    return 0;
}

void HelloWorld()
{
	Language M(1, 1006);
	Language L(7, 1002);
}
