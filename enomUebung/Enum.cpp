#include <iostream>

enum Namen {
	BERND =1, // start bei 1 statt 0
	KLAUS,
	QPIE,
};

int main()
{
	int eingabe{ 0 };
	std::cout << "Gebe ein (1)Bernd (2)Klaus (3)QPIE: ";
	std::cin >> eingabe;
	if (eingabe == KLAUS)
	{
		std::cout << "Klaus wurde gewaehlt!";
	}
	else if (eingabe == BERND)
	{
		std::cout << "Bernd wurde gewaehlt!";
	}
	else if (eingabe == QPIE)
	{
		std::cout << "QPIE wurde gewaehlt!";
	}
	else
	{
		std::cout << "Garnichts!!";
	}
	return 0;
}