#include "Products.h"
#include <iostream>

void printProd(product a) {
	std::cout << "Название: " << a.name << std::endl;
	std::cout << "Количество: " << a.number << std::endl;
	std::cout << "Цена: " << a.price << std::endl;
}

int fullPrice(product a) {
	std::cout << "Стоимость всех оставшихся товаров: ";
	return a.number * a.price;
}

int sell(product a, int b) {
	return a.number - b;
}


