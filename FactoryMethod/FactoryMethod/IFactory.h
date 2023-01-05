#pragma once
#include <memory>
#include "IProduct.h"

class IFactory
{
public:
	virtual std::shared_ptr<IProduct> GetProduct() = 0;

};

