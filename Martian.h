#pragma once
#include <string>
class Martian {
public:
	Martian(std::string);
	void add();
	static void draw();
	const int getMartians();
	const static int numberOfMartians{ 3 };


private:
	std::string name;
	static std::string lines[6];
};