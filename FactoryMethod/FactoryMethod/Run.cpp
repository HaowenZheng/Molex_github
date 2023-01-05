#include <iostream>
#include "ConcereteFactory.h"
#include "IProduct.h"

///////////////////////////////////////////
/*
����������һ�ִ��������ģʽ�����ڸ������ṩһ����������ķ����������������ʵ�������������

1�������Ʒ�࣬ͳһ�ӿڣ����о����Ʒ�๲��
2�������Ʒ�࣬��д�����еķ�����ʵ�־��幦��
3�����󹤳����������ͱ�����ѭͨ�ò�Ʒ���Խӿ�
4�����幤����ʵ�־����Ʒ��ĵ���
*/
//////////////////////////////////////////

void main()
{
	std::shared_ptr<IFactory> factory;
	std::shared_ptr<IProduct> product;

	int type;
	std::cout << "�������Ʒ����" << std::endl;
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