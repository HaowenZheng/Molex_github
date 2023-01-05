#include <iostream>
#include "ConcereteFactory.h"
#include "IProduct.h"

///////////////////////////////////////////
/*
工厂方法是一种创建型设计模式，其在父类中提供一个创建对象的方法，允许子类决定实例化对象的类型

1、抽象产品类，统一接口，所有具体产品类共性
2、具体产品类，重写父类中的方法，实现具体功能
3、抽象工厂，返回类型必须遵循通用产品共性接口
4、具体工厂，实现具体产品类的调用
*/
//////////////////////////////////////////

void main()
{
	std::shared_ptr<IFactory> factory;
	std::shared_ptr<IProduct> product;

	int type;
	std::cout << "请输入产品类型" << std::endl;
	std::cin >> type;

	switch (type)
	{
	case 1:
		factory = std::make_shared<FactoryA>();
		break;
	case 2:
		factory = std::make_shared<FactoryB>();
		break;
	case 3:
		factory = std::make_shared<FactoryC>();
		break;
	default:
		factory = nullptr;
		break;
	}

	product = factory->GetProduct();

	std::cout << product->GetConcreteProduct() << std::endl;
	system("pause");
}