#include <iostream>
#include "Horse.h"
using namespace std;
int main()
{
	setlocale(0, "");

	Horse horse = Horse(150, 50, 157, "тильт", "Савелий");
	horse.Show();
	Horse horse2;
	horse2.Show();
}