#pragma once
#include "IFactory.h"
#include "ConcereteProduct.h"

class FactoryA : public IFactory
{
	// Inherited via IFactory
	virtual std::shared_ptr<IProduct> GetProduct() override
	{
		return std::make_shared<ProductA>();
	}
};


class FactoryB : public IFactory
{
	// Inherited via IFactory
	virtual std::shared_ptr<IProduct> GetProduct() override
	{
		return std::make_shared<ProductC>();
	}
};


class FactoryC : public IFactory
{
	// Inherited via IFactory
	virtual std::shared_ptr<IProduct> GetProduct() override
	{
		return std::make_shared<ProductC>();
	}
};
