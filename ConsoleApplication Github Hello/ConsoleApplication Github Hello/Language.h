#pragma once

class Language
{
public:
	Language(int x, int y);
	Language();
	~Language();
	static int GetSerial() { return serial; }
	int GetAge() { return age; }
private:
	static int serial;
	int age;
};

