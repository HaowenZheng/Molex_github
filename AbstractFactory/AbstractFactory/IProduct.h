#pragma once
#include <string>

class IChair
{
public:
	virtual std::string ShowName() = 0;

};


class ISofa
{
public:
	virtual std::string ShowName() = 0;

};


class ITable
{
public:
	virtual std::string ShowName() = 0;

};
