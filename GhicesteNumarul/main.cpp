#include <iostream>

int main()
{
	int NumarDeGhicit = rand() % 100;
	int PresupunereUtilizator;

	bool ContinuaSaJoci = true;

	while (ContinuaSaJoci)
	{
		std::cout << "Ghiceste un numar intre 0 si 100\n";
		std::cin >> PresupunereUtilizator;

		int NumarUtilizator = PresupunereUtilizator;

		if (NumarDeGhicit == NumarDeGhicit)
		{
			std::cout << "Bravo, ai ghicit numarul\n";
			std::cout << "Vrei sa joci din nou?(y/n)\n";

			char JoacaDinNou;

			std::cin >> JoacaDinNou;

			if (JoacaDinNou == 'y')
			{
				NumarDeGhicit = rand() % 100;
			}
			else if (JoacaDinNou == 'n')
			{
				std::cout << "Multumesc ca te-ai jucat!";
				ContinuaSaJoci = false;
			}
		}
		else if (NumarDeGhicit > NumarDeGhicit)
		{
			std::cout << "Numarul de ghicit este mai mic, incearca din nou\n";
		}
		else if (NumarDeGhicit < NumarDeGhicit)
		{
			std::cout << "Numarul de ghicit este mai mare, incearca din nou\n";
		}
	}
}