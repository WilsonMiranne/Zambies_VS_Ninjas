#include <iostream>
struct Zambie
{
	int health;
	bool alive;
	int hunger;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
struct Abilities
{
			//both zombies and ninjas will have some ability cost
	int Feast;				//deals slightly lower damage but heals the zombie for half the damage dealt
	int Stalk;				//does no damage but replinishes hunger
	int Frenzy;				//deals high damage at the cost of health
	int UltUndead;			//at a massive hunger cost, deals high damage to all remaining ninja
			//the abilities above are for zombies, those below are for ninja
	int Ambush;				//deals high damage with a huge chi cost
	int Meditation;			//deals no damage but replinishes a moderate amount of chi and a small amount of health
	int Recover;			//deals no damage but replinishes a moderate amount of health
	int UltWarriorsHeart;	//Drains the remainder of your chi (minimum of 50) to fully restore all other ninla's health and chi
};
int Feast(Zambie &attacker, Ninja &defender)
{
	std::cout << "zambie uses feast against the ninja!" << std::endl;
	defender.health -= 8;
	std::cout << "the ninja took 8 damage his health is now ->" << defender.health << std::endl;
	attacker.health += 4;
	std::cout << "After using feast, zambie gains 4 health and is now at >-" << attacker.health << std::endl;
	attacker.hunger -= 10;
	std::cout << "the zambie used feast so his hunger is now" << attacker.hunger << std::endl;
	return defender.health, attacker.health, attacker.hunger;
}
int Stalk(Zambie &attacker, Ninja &defender)
{
	std::cout << "zambie uses stalk against the ninja!" << std::endl;
	defender.health -= 0;
	std::cout << "the ninja took 0 damage his health is now ->" << defender.health << std::endl;
	attacker.hunger += 15;
	std::cout << "After using feast, zambie gains 15 hunger and is now at >-" << attacker.hunger << std::endl;
	attacker.hunger -= 0;
	return attacker.hunger;
}
int Frenzy(Zambie &attacker, Ninja &defender)
{
	std::cout << "zambie uses frenzy against the ninja!" << std::endl;
	defender.health -= 30;
	std::cout << "the ninja took 30 damage his health is now ->" << defender.health << std::endl;
	attacker.health -= 10;
	std::cout << "After using frenzy, zambie loses 10 health and is now at >-" << attacker.health << std::endl;
	attacker.hunger -= 10;
	std::cout << "the zambie used frenzy so his hunger is now" << attacker.hunger << std::endl;
	return defender.health, attacker.health, attacker.hunger;
}
int UltUndead(Zambie &attacker, Ninja &defender)
{
	std::cout << "zambie uses Undead against the ninja!" << std::endl;
	defender.health -= 40;
	std::cout << "all ninja took 40 damage his health is now ->" << defender.health << std::endl;
	attacker.hunger -= 30;
	std::cout << "the zambie used feast so his hunger is now" << attacker.hunger << std::endl;
	return defender.health, attacker.hunger;
}
int Fight(Zambie &attacker, Ninja &defender)
{
	std::cout << "zambie is attacking ninja" << std::endl;
	defender.health -= 10;
	std::cout << "the ninja took 10 damage his health is now ->" << defender.health << std::endl;
	attacker.hunger -= 1;
	std::cout << "the zambie attacked so his hunger is now" << attacker.hunger << std::endl;
	//fighting is when a zambie "does damage" to a ninja
	//fighting is when a ninja "does damage" to a zambie
	//"damage" is when we decrement the health variable of a ninja or zambie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zambie
	return defender.health;
}

int Fight(Ninja &attacker, Zambie &defender)
{
	std::cout << "ninja is attacking zambie" << std::endl;
	defender.health -= 15;
	std::cout << "the zambie took 15 damage his health is now ->" << defender.health << std::endl;
	attacker.chi -= 1;
	std::cout << "the ninja attacked so his chi is now" << attacker.chi << std::endl;
	return defender.health;
}

int Ambush(Ninja &defender, Zambie &attacker)
{
	std::cout << "ninja uses ambush against zambie" << std::endl;
	attacker.health -= 30;
	std::cout << "the zambie took 30 damage his health is now ->" << attacker.health << std::endl;
	defender.chi -= 40;
	std::cout << "the ninja atttacked with ambush so his chi is now" << defender.chi << std::endl;
	return attacker.health, defender.chi;
}
int Meditation(Ninja &defender, Zambie &attacker)
{
	std::cout << "ninja uses meditation" << std::endl;
	defender.health += 10;
	std::cout << "the ninja gains 10 health is now ->" << attacker.health << std::endl;
	defender.chi += 15;
	std::cout << "the ninja gains 15 chi is now" << defender.chi << std::endl;
	return defender.health, defender.chi;
}
int Recover(Ninja &defender, Zambie &attacker)
{
	std::cout << "ninja momentarily retreats to recover zambie" << std::endl;
	defender.health += 15;
	std::cout << "the ninja gains 15 health is now ->" << attacker.health << std::endl;
	defender.chi -= 20;
	std::cout << "the ninja uses recover so his chi is now" << defender.chi << std::endl;
	return defender.health, defender.chi;
}
int UltWarriorsHeart(Ninja &defender, Zambie &attacker)
{
	std::cout << "ninja uses Warrior's Heart" << std::endl;
	defender.health += 100;
	std::cout << "All allied Ninja gain 100 health. Their health is now ->" << attacker.health << std::endl;
	defender.chi -= 100;
	std::cout << "the ninja attacked so his chi is now" << defender.chi << std::endl;
	return attacker.health, defender.chi;
}

int main()
{
	Zambie chris = { 90, true, 5 };
	Zambie matthew = { 100, true, 15 };
	Ninja regi = { 150, true, 25 };
	Ninja wilson = { 100, true, 20 };
	char input = '0';

	while (input != '`')
	{
		std::cin >> input;
		if (input == 'a')
		{
			std::cout << "CHRIS FIGHT REGI" << std::endl;
			Fight(chris, regi);
		}
		if (input == 'q')
		{
			std::cout << "Chris uses the ability ambush!" << std::endl;
		}
		if (Feast(chris, regi))
		{
			regi.health -= 8;
			chris.health += 4;
			chris.hunger -= 10;
		}
		
		{

		}
	
		std::cin >> input;
		if (input == 'A')
		{
			std::cout << "REGI IFGHT CHRIS" << std::endl;
			Fight(regi, chris);
		}
		if (Fight(regi, chris) <= 0)
		{
			printf("The Ninja has Defeated the Zambie... GAME OVER\n");
			printf("get guhd lol. \n \a");
			break;
		}
		printf("new frame \n");
	}

	system("pause");
	//how i fight??
	return 0;
}
