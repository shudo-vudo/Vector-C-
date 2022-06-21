#include "vektor.h"

int main() {
	Vector hui(4);
	hui.print();
	hui.push_back(60);
	hui.print();
	hui.push_back(30);
	hui.push_back(20);
	hui.push_back(10);
	hui.print();
	hui.push_back(5);
	hui.print();
	hui.clear();
	hui.print();
}
