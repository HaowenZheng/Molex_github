#include <iostream>
#include "ConcereteFactory.h"
#include <memory>
#include <vector>

void main()
{
	/*std::shared_ptr<IFactory> factory;

	std::cout << "请输入需要生产的产品:" << " ";
	int product;
	std::cin >> product;

	factory = std::make_shared<ModernFactory>();

	std::cout << factory->GetChair()->ShowName() << std::endl;
	std::cout << factory->GetSofa()->ShowName() << std::endl;
	std::cout << factory->GetTable()->ShowName() << std::endl;*/

	std::vector<int> vec = { 1,2,3,4 };
	auto ret = vec.front();
	auto it = vec.begin();

	vec.erase(it);
	//vec.pop_back();
	system("pause");
}