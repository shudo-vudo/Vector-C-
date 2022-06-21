#include "vektor.h"

Vector::Vector() {
	_size = 0;
	_capacity = 0;
	_values = new int[0];
}

Vector::Vector(int capacity) {
	_size = 0;
	_capacity = capacity;
	_values = new int[_capacity];
}

void Vector::print() {
	for (int i = 0; i < _size; i++) {
		cout << _values[i] << " ";
	}
	cout << endl;
}

void Vector::clear() {
	delete[] _values;
	_capacity = 0;
	_size = 0;
	_values = new int[_capacity];
}

Vector::~Vector() {
	delete[] _values;
}

void Vector::push_back(int value) {
	if (_capacity > _size) {
		_values[_size] = value;
		_size++;
	}
	else if (_capacity == _size) {
		_capacity += 4;
		int* temp = new int[_capacity];
		for (int i = 0; i < _size; i++) {
			temp[i] = _values[i];
		}
		temp[_size] = value;
		_size++;
		delete[] _values;
		_values = new int[_capacity];
		for (int i = 0; i < _size; i++) {
			_values[i] = temp[i];
		}
		delete[] temp;
	}
}

void Vector::remove(int index) {
	if (index >= 0 && index < _size) {
		_size--;
		for (int i = index; i < _size; i++) {
			_values[i] = _values[i + 1];
		}
		_values[_size] = 0;
	}
}
