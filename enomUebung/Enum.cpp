#include <iostream>
#include <string>

enum Namen {
	DIGIMON = 1, // start bei 1 statt 0
	POKEMON,
	QPIE,
};

struct Attribute {
	Namen Typ;
	int	  Alter;
	int	  HP;
};

std::string Ausgabe(int eingabe, Attribute werte)
{
	if (werte.Typ == DIGIMON)
	{
		return "Ein Digimon wurde gewaehlt!\n";
	}
	else if (werte.Typ == POKEMON)
	{
		return "Ein Pokemon wurde gewaehlt!\n";
	}
	else if (werte.Typ == QPIE)
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
	Attribute Digimon{ DIGIMON,90,200 };	// Startwerte
	Attribute Pokemon{ POKEMON,3,50 };	// Startwerte
	Attribute Qpie{ QPIE,9000, 1 };	// Startwerte

	int eingabe{ 0 };
	std::cout << "Gebe ein (1)Digimon (2)Pokemon (3)QPIE: ";
	std::cin >> eingabe;

	if (eingabe == 1)
	{
		std::cout << Ausgabe(eingabe, Digimon);
		std::cout << "Gebe das Alter vom Digimon ein: ";
		std::cin >> Digimon.Alter;
		std::cout << "Gebe die HP vom Digimon ein: ";
		std::cin >> Digimon.HP;
		std::cout << "Dein Digimon ist " << Digimon.Alter << " Jahre alt und hat " << Digimon.HP << "HP.\n";
	}
	else if (eingabe == 2)
	{
		std::cout << Ausgabe(eingabe, Pokemon);
		std::cout << "Gebe das Alter vom Pokemon ein: ";
		std::cin >> Pokemon.Alter;
		std::cout << "Gebe die HP vom Pokemon ein: ";
		std::cin >> Pokemon.HP;
		std::cout << "Dein Pokemon ist " << Pokemon.Alter << " Jahre alt und hat " << Pokemon.HP << "HP.\n";
	}
	else if (eingabe == 3)
	{
		std::cout << Ausgabe(eingabe, Qpie);
		std::cout << "Gebe das Alter vom Qpie ein: ";
		std::cin >> Qpie.Alter;
		std::cout << "Gebe die HP vom Qpie ein: ";
		std::cin >> Qpie.HP;
		std::cout << "Dein Qpiee ist " << Qpie.Alter << " Jahre alt und hat " << Qpie.HP << "HP.\n";
	}
	else
	{
		std::cout << "1,2 oder 3 habe ich gesagt!\n";
	}

	return 0;
}