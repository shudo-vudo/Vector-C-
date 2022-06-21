#ifndef VEKTOR_H
#define VEKTOR_H

#include <iostream>

using namespace std;

class Vector {
private:;
	int* _values; // значения и сам массивчик
	int _capacity; // емкость массива (сколько для него памяти выделяется)
	int _size; // количество находящихся уже значений в массиве
public:
	Vector();
	Vector(int);
	~Vector();
	void print(); // метод вывода
	void clear(); // метод очистки
	void push_back(int);
	void remove(int);
};


#endif // !VEKTOR_H
