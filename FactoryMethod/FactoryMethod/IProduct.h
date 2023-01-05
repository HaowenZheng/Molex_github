#pragma once
#include <string>

class IProduct
{
	public:
		virtual std::string GetConcreteProduct() = 0;
};