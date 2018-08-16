// bookPrice.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "book_sale.h"
#include <iostream>

void printInfo(const book_sale& book)
{
	std::cout << book.net_price(5) << std::endl;
}

int main()
{
	book_sale book1{ 5 };
	Bulk_quote book2{ 6 };

	//double money;
	//money = book1.net_price(5);
	//std::cout << money << std::endl;

	//money = book2.net_price(5);
	//std::cout << money << std::endl;

	printInfo(book1);
	printInfo(book2);

	std::cin.get();
    return 0;
}

