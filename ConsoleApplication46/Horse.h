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
		cout << "��������: " << speed << '\n';
		cout << "���: " << KG << '\n';
		cout << "�����: " << length << '\n';
		cout << "������: " << breed << '\n';
		cout << "���: " << name << '\n';
	}
};

