#include "Products.h"
#include <iostream>

void printProd(product a) {
	std::cout << "��������: " << a.name << std::endl;
	std::cout << "����������: " << a.number << std::endl;
	std::cout << "����: " << a.price << std::endl;
}

int fullPrice(product a) {
	std::cout << "��������� ���� ���������� �������: ";
	return a.number * a.price;
}

int sell(product a, int b) {
	return a.number - b;
}


