#include<iostream>

int main()
{
	int ljudskeGodine = 0;
	int prveDvijeGodine = 21;//Prve dvije godine se racunaju kao 21
	int razlikaPrve2 = 0;
	int godineMogPasa;
	std::cout << "Unesite godine vaseg pasa : ";
	std::cin >> godineMogPasa;

	razlikaPrve2 = (godineMogPasa - 2) * 4;
	ljudskeGodine = prveDvijeGodine + razlikaPrve2;
	std::cout << "Vas pas ima : " << ljudskeGodine << std::endl;

	system("pause");
	return 0;


}