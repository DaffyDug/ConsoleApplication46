#pragma once
#include <iostream>
#include <string>
using namespace std;
class Horse
{

	int speed;
	int KG;
	int length;
	string breed;
	string name;
public:
	Horse(int s, int K, int l, const string b, const string n)
	{
		speed = s;
		KG = K;
		length = l;
		breed = b;
		name = n;
	}
	Horse()
	{

	}
	void Show()
	{
		cout << "Скорость: " << speed << '\n';
		cout << "Вес: " << KG << '\n';
		cout << "Длина: " << length << '\n';
		cout << "Порода: " << breed << '\n';
		cout << "Имя: " << name << '\n';
	}
};

