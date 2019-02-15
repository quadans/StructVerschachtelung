#include <iostream>
#include <string>

enum Namen {
	BERND =1, // start bei 1 statt 0
	KLAUS,
	QPIE,
};

std::string Ausgabe(int eingabe)
{
	if (eingabe == KLAUS)
	{
		return "Klaus wurde gewaehlt!";
	}
	else if (eingabe == BERND)
	{
		return "Bernd wurde gewaehlt!";
	}
	else if (eingabe == QPIE)
	{
		return "QPIE wurde gewaehlt!";
	}
	else
	{
		return "Garnichts!!";
	}
}

int main()
{
	int eingabe{ 0 };
	std::cout << "Gebe ein (1)Bernd (2)Klaus (3)QPIE: ";
	std::cin >> eingabe;

	std::cout<< Ausgabe(eingabe);
	
	return 0;
}