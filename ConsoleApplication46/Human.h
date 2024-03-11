#pragma once
class Human
{
	int Legs;
	int Hands;
	int Head;
	int Remain;
public:
	Human(int l, int ha, int he, int re)
	{
		Legs = l;
		Hands = ha;
		Head = he;
		Remain = re;
	}
	bool Out()
	{
		if (Legs == 2 && Hands == 2 && Head == Remain <= 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

