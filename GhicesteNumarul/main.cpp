#include <iostream>

int main()
{
	int NumarDeGhicit = rand() % 1000;
	int PresupunereUtilizator;
	int NumarGhiciri = 0;

	bool ContinuaSaJoci = true;

	while (ContinuaSaJoci)
	{
		std::cout << "Ghiceste un numar intre 0 si 1000\n";
		std::cin >> PresupunereUtilizator;

		int NumarUtilizator = PresupunereUtilizator;

		if (NumarDeGhicit == NumarUtilizator)
		{
			std::cout << "Bravo, ai ghicit numarul\n";
			std::cout << "Ai avut " << NumarGhiciri << " incercari\n";
			std::cout << "Vrei sa joci din nou?(y/n)\n";

			char JoacaDinNou;

			std::cin >> JoacaDinNou;

			if (JoacaDinNou == 'y')
			{
				NumarDeGhicit = rand() % 1000;
				NumarGhiciri = 0;
			}
			else if (JoacaDinNou == 'n')
			{
				std::cout << "Multumesc ca te-ai jucat!\n";
				ContinuaSaJoci = false;
			}
		}
		else if (NumarUtilizator > NumarDeGhicit)
		{
			std::cout << "Numarul de ghicit este mai mic, incearca din nou\n";
			NumarGhiciri++;
		}
		else if (NumarUtilizator < NumarDeGhicit)
		{
			std::cout << "Numarul de ghicit este mai mare, incearca din nou\n";
			NumarGhiciri++;
		}
	}
}