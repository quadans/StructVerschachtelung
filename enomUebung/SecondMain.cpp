// Ohne Verschachtelung

#include <iostream>
#include <string>

struct Daten {
	int Alter;
	std::string Name;
	int Postleitzahl;
	std::string Stadt;
};

int main()
{
	Daten Peter_s{ 23,"Peter",46485,"Wesel" };
	std::cout << "Alter: " << Peter_s.Alter << "\n";
	std::cout << "Name: " << Peter_s.Name << "\n";
	std::cout << "Postleitzahl: " << Peter_s.Postleitzahl << "\n";
	std::cout << "Stadt: " << Peter_s.Stadt << "\n";

	Daten Hans{ 25,"Hans",46185,"Axa" };
	std::cout << "Alter: " << Hans.Alter << "\n";
	std::cout << "Name: " << Hans.Name << "\n";
	std::cout << "Postleitzahl: " << Hans.Postleitzahl << "\n";
	std::cout << "Stadt: " << Hans.Stadt << "\n";
	return 0;
}