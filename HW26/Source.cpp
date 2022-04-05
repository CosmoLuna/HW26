#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	product shirt = {"Woman's_shirt", 5, 799};
	printProd(shirt);
	cout << fullPrice(shirt) << endl;
	int b = 2;
	cout << "Количество товаров после вычета: " << sell(shirt, b) << endl;

	return 0;
}