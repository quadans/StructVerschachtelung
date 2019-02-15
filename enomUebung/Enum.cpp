#include <iostream>
#include <string>

enum Namen {
	DIGIMON = 1, // start bei 1 statt 0
	POKEMON,
	QPIE,
};

struct Attribute {
	Namen Typ;
	int Alter;
	int HP;
};

std::string Ausgabe(int eingabe, Attribute werte)
{
	if (werte.Typ == Namen::DIGIMON)
	{
		return "Ein Digimon wurde gewaehlt!\n";
	}
	else if (werte.Typ == Namen::POKEMON)
	{
		return "Ein Pokemon wurde gewaehlt!\n";
	}
	else if (werte.Typ == Namen::QPIE)
	{
		return "QPIE wurde gewaehlt!\n";
	}
	else
	{
		return "1,2 oder 3 habe ich gesagt!\n";
	}
}

int main()
{
	Attribute Digimon{ Namen::DIGIMON,90,200 };
	Attribute Pokemon{ Namen::POKEMON,3,50 };
	Attribute Qpie{ Namen::QPIE,9000, 1 };

	int eingabe{ 0 };
	std::cout << "Gebe ein (1)Digimon (2)Pokemon (3)QPIE: ";
	std::cin >> eingabe;

	if (eingabe == 1)
	{
		std::cout << Ausgabe(eingabe, Digimon);
		std::cout << "Es hat die Werte :" << Digimon.Alter << " Jahre alt. " << Digimon.HP << " HP.\n";
	}
	else if (eingabe == 2)
	{
		std::cout << Ausgabe(eingabe, Pokemon);
		std::cout << "Es hat die Werte :" << Pokemon.Alter << " Jahre alt. " << Pokemon.HP << " HP.\n";
	}
	else if (eingabe == 3)
	{
		std::cout << Ausgabe(eingabe, Qpie);
		std::cout << "Es hat die Werte :" << Qpie.Alter << " Jahre alt. " << Qpie.HP << " HP.\n";
	}
	else
	{
		std::cout << "1,2 oder 3 habe ich gesagt!\n";
	}

	return 0;
}