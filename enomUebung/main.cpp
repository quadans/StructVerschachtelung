#include <iostream>
#include <string>

struct Daten {
	int Alter;
	std::string Name;
	int Postleitzahl;
	std::string Stadt;
};

struct Namen {
	Daten Peter;
};

int main()
{
	Namen Peter_s{ 23,"Peter",46485,"Wesel" };
	std::cout << "Alter: " << Peter_s.Peter.Alter << "\n";
	std::cout << "Name: " << Peter_s.Peter.Name << "\n";
	std::cout << "Postleitzahl: " << Peter_s.Peter.Postleitzahl << "\n";
	std::cout << "Stadt: " << Peter_s.Peter.Stadt << "\n";
	return 0;
}