#pragma once
#include "IProduct.h"

class ProductA : public IProduct
{
	// Inherited via IProduct
	virtual std::string GetConcreteProduct() override
	{
		return "this is Product A";
	}
};

class ProductB : public IProduct
{
	// Inherited via IProduct
	virtual std::string GetConcreteProduct() override
	{
		return "this is Product B";
	}
};

class ProductC : public IProduct
{
	// Inherited via IProduct
	virtual std::string GetConcreteProduct() override
	{
		return "this is Product B";
	}
};