#pragma once

class Critter // class definition -- defines a new type, Critter
{
	private:
		int m_Hunger; // data member
		int m_boredom; // data member
		void Passatemps(int opcio);
		void PassarTorns();

	public:
		Critter(int hunger = 0, int boredom = 0); // critter values prototype
		void getName(); // member function prototype
		void Greet(); // member function prototype
		void Hunger(); // member function prototype
		void Bored(); // member function prototype
};