#pragma once
#include <cstddef>
#include <iostream>

class book_sale
{
public:
	book_sale() = default;
	book_sale(double sales_price) : price(sales_price) 
	{
		std::cout << "construct book_sale" << std::endl;
	}

	virtual double net_price(std::size_t n) const
	{
		return price * n; 
	};
	virtual ~book_sale()
	{
		std::cout << "destruct book_sale" << std::endl;
	}
protected:
	double price = 0.0;
};

class Bulk_quote : public book_sale
{
public:
	Bulk_quote() = default;
	Bulk_quote(double sales_price) : book_sale(sales_price) 
	{
		std::cout << "construct Bulk_quote" << std::endl;
	}
	double net_price(std::size_t n) const override
	{
		return price * n / 2;
	}
	~Bulk_quote()
	{
		std::cout << "destruct Bulk_quote" << std::endl;
	}
};

