#ifndef VEKTOR_H
#define VEKTOR_H

#include <iostream>

using namespace std;

class Vector {
private:;
	int* _values; // �������� � ��� ���������
	int _capacity; // ������� ������� (������� ��� ���� ������ ����������)
	int _size; // ���������� ����������� ��� �������� � �������
public:
	Vector();
	Vector(int);
	~Vector();
	void print(); // ����� ������
	void clear(); // ����� �������
	void push_back(int);
	void remove(int);
};


#endif // !VEKTOR_H
