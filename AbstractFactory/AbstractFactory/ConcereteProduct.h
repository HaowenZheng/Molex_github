#pragma once
#include "IProduct.h"

class MordenChair : public IChair
{
public:
	virtual std::string ShowName() override
	{
		return "this is morden Chair";
	}
};

class MordenSofa : public ISofa
{
public:
	virtual std::string ShowName() override
	{
		return "this is morden Sofa";
	}
};

class MordenTable : public ITable
{
public:
	virtual std::string ShowName() override
	{
		return "this is morden Table";
	}
};

class VictorianChair : public IChair
{
public:
	virtual std::string ShowName() override
	{
		return "this is victorian Chair";
	}
};

class VictorianSofa : public ISofa
{
public:
	virtual std::string ShowName() override
	{
		return "this is victorian Sofa";
	}
};

class VictorianTable : public ITable
{
public:
	virtual std::string ShowName() override
	{
		return "this is victorian Table";
	}
};