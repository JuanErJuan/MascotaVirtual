#include "Critter.h"
#include <iostream>

using namespace std;

string nomMascota;

void Critter::getName() // member function definition
{
	cin >> nomMascota;
}

void Critter::Greet() // member function definition
{
	cout << "Nom: " << nomMascota << ".\n";
	cout << "	Nivell de alimentacio es de " << m_Hunger << ".\n";
	cout << "	Nivell de diversio es de " << m_boredom << ".\n";
	PassarTorns();
}

void Critter::Hunger() // member function definition
{
	Passatemps(1);
	PassarTorns();
}

void Critter::Bored() // member function definition
{
	Passatemps(2);
	PassarTorns();
}

void Critter::Passatemps(int opcio) 
{
	int sumarHunger;
	int restarBored;
	int sumarBored;
	int restarHunger;
	switch (opcio)
	{
	case 1:
		sumarHunger = (1 + rand() % (5 - 1));
		restarBored = (1 + rand() % (5 - 1));
		if (m_Hunger + sumarHunger <= 10 && m_boredom - restarBored >= 0)
		{
			m_Hunger = m_Hunger + sumarHunger;
			m_boredom = m_boredom - restarBored;
		}
		else {
			cout << "No puc! torna a probar o intenta jugar amb mi\n";
		}
		break;
	case 2:
		sumarBored = (1 + rand() % (5 - 1));
		restarHunger = (1 + rand() % (5 - 1));
		if (m_boredom + sumarBored <= 10 && m_Hunger - restarHunger >= 0)
		{
			m_boredom = m_boredom + sumarBored;
			m_Hunger = m_Hunger - restarHunger;
		}
		else {
			cout << "No puc! Torna a probar o intenta alimentarme\n";
		}
		break;
	default:
		break;
	}
}

void Critter::PassarTorns() 
{
	if(m_Hunger > 4){m_Hunger = m_Hunger - 1;}
	if(m_boredom > 4){m_boredom = m_boredom - 1;}
}

Critter::Critter(int hunger, int boredom):
	m_Hunger(hunger),
	m_boredom(boredom)
{} // empty constructor body