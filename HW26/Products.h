#pragma once
#include <string>
#include <iostream>

struct product {
	std::string name;
	int number = 0;
	int price;
};

void printProd(product a);
int fullPrice(product a);
int sell(product a, int b);
