#pragma once
#include<iostream>

class Drob {
	int chislitel;
	int znamenatel;
public:
	Drob(int chislitel = 0, int znamenatel = 1) {
		this->chislitel = chislitel;
		this->znamenatel = znamenatel;
	}
	~Drob() {

	}
	void set_value(int chislitel = 0, int znamenatel = 1) {
		this->chislitel = chislitel;
		this->znamenatel = znamenatel;
	}
	int * get_value() {
		int* temp = new int[2];
		temp[0] = chislitel;
		temp[1] = znamenatel;
		return temp;
	}
	void print_value() {
		std::cout << this->get_value()[0] << "/" << this->get_value()[1] << "\n";
	}
	Drob operator+(Drob temp) {
		if (temp.znamenatel == znamenatel)
			temp.chislitel += chislitel;
		else {
			temp.chislitel = temp.chislitel * znamenatel + temp.znamenatel * chislitel;
			temp.znamenatel *= znamenatel;
		}
		return temp;
	}
	Drob operator-(Drob temp) {
		if (temp.znamenatel == znamenatel)
			temp.chislitel -= chislitel;
		else {
			temp.chislitel = temp.znamenatel * chislitel - temp.chislitel * znamenatel;
			temp.znamenatel *= znamenatel;
		}
		return temp;
	}
	Drob operator*(Drob temp) {
		temp.chislitel*=chislitel;
		temp.znamenatel *= znamenatel;
		return temp;
	}
	Drob operator/(Drob temp) {
		if (temp.chislitel != 0) {
			temp.chislitel *= znamenatel;
			temp.znamenatel *= chislitel;
		}
		else  {
			std::cout << "Ошибка - деление ноль\n";
			temp.chislitel = chislitel;
			temp.znamenatel = znamenatel;
		}
		return temp;
	}
};
