#pragma once
#include "IFactory.h"
#include "ConcereteProduct.h"
#include <memory>

class ModernFactory : public IFactory
{
public:


	// Inherited via IFactory
	virtual std::shared_ptr<IChair> GetChair() override
	{
		return std::make_shared<MordenChair>();
	}

	virtual std::shared_ptr<ISofa> GetSofa() override
	{
		return std::make_shared<MordenSofa>();
	}

	virtual std::shared_ptr<ITable> GetTable() override
	{
		return std::make_shared<MordenTable>();
	}

};


class VictorianFactory : public IFactory
{
public:


	// Inherited via IFactory
	virtual std::shared_ptr<IChair> GetChair() override
	{
		return std::make_shared<VictorianChair>();
	}

	virtual std::shared_ptr<ISofa> GetSofa() override
	{
		return std::make_shared<VictorianSofa>();
	}

	virtual std::shared_ptr<ITable> GetTable() override
	{
		return std::make_shared<VictorianTable>();
	}

};