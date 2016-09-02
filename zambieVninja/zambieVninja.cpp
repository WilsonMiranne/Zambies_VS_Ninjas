//#include <iostream>
//struct Zambie
//{
//	int health;
//	bool alive;
//	int spirit;
//};
//struct Ninja
//{
//	int health;
//	bool alive;
//	int chi;
//};
//int Fight(Zambie &z, Ninja &n)
//
//{
//	std::cout << "zambie is attacking ninja" << std::endl;
//	n.health -= 10;
//	std::cout << "the ninja took 10 damage his health is now" << n.health << std::endl;
//	z.spirit -= 1;
//	std::cout << "the zambie attacked so his spirit is now" << z.spirit << std::endl;
//	//fighting is when a zambie "does damage" to a ninja
//	//fighting is when a ninja "does damage" to a zambie
//	//"damage" is when we decrement the health variable of a ninja or zambie
//	//in order to do "damage" you must "attack"
//	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zambie
//	return 1;
//}
//int Fight(Ninja &n, Zambie &z)
//
//{
//	std::cout << "Ninja is attacking Zambie" << std::endl;
//	z.health -= 15;
//	std::cout << "the Zambie took 15 damage and his health is now" << z.health << std::endl;
//	n.chi -= 1;
//	std::cout << "The Ninja atttacked so his chi is now" << n.chi << std::endl;
//	return 1;
//}
//int main()
//{
//	Zambie chris = { 90, true, 5 };
//	Zambie matthew = { 100, true, 15 };
//	Ninja regi = { 150, true, 25 };
//	Ninja wilson = { 100, true, 20 };
//	char input = '0';
//
//	while (input != 'q')
//	{
//		std::cin >> input;
//		if (input == 'a')
//		{
//			std::cout << "CHRIS FIGHT REGI" << std::endl;
//			Fight(chris, regi);
//		}
//		if (regi.health < 0)
//		{
//			printf("wasted.... GAME OVER\n");
//			printf("get guhd lol. \n \a");
//			break;
//
//		}
//		if (chris.spirit == 0)
//		{
//			std::cout << "Attack miss, not enough spirit." << std::endl;
//		}
//		if (input == 'h')
//		{
//			std::cout << "Zambie choses not to attack! Zambie regains 3 spirit." << std::endl;
//		}
//		if (input == 's')
//			//and wanted to set the ninja's attack command to be set to 's'
//		{
//			std::cout << "REGI FIGHT CHRIS" << std::endl;
//			Fight(chris, regi);
//		}
//		//if the zombie chris has health that is below the value 0, the game should end similarly to that of the end scenario above
//		if (chris.health < 0);
//		{
//			printf("wasted.... GAME OVER\n");
//			printf("get guhd lol. \n \a");
//			break;
//		}
//		printf("new frame \n");
//
//	}
//
//
//	system("pause");
//	//how i fight??
//	return 0;
//}
