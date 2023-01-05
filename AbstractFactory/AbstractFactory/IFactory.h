#pragma once
#include <memory>
#include <vector>
#include <mutex>
#include "IProduct.h"


//////
/*
抽象工厂，涵盖所有产品类型通用接口
*/
/////
class IFactory
{
public:
	virtual std::shared_ptr<IChair> GetChair() = 0;
	virtual std::shared_ptr<ISofa> GetSofa() = 0;
	virtual std::shared_ptr<ITable> GetTable() = 0;
};


// 所有服务根类
class IService
{
public:
	virtual int GetID() { return this->m_ID; }
	virtual void SetID(int mID) { this->m_ID = mID; }
	virtual std::string GetServiceName() = 0;
	virtual std::string GetServiceType() = 0;
	virtual ~IService() = default;
private:
	int m_ID;
};

// 服务工厂接口
class IFactoryInterface
{
public:
	virtual std::shared_ptr<IService> CreateInstance() = 0;
	virtual void clear() = 0;
	virtual ~IFactoryInterface() = default;
};

// 不同服务类接口
class IFood : public IService
{
public:
	virtual std::string RawMaterial() = 0;
	virtual bool IsHot() = 0;
	virtual ~IFood() = default;
};

class IFurit : public IService
{
public:
	virtual std::string Origin() = 0;
	virtual int EatType() = 0;
	virtual ~IFurit() = default;
};


// 具体服务
class Noodle : public IFood
{
public:


	// Inherited via IFood
	virtual std::string GetServiceName() override
	{
		return "this is Noodle";
	}

	virtual std::string GetServiceType() override
	{
		return "Noodle Noodle";
	}

	virtual std::string RawMaterial() override
	{
		return "Noodles are made of wheat";
	}

	virtual bool IsHot() override
	{
		return true;
	}

public:
	//各种特殊功能
	bool IsNeedCook()
	{
		return true;
	}

};

class Apple :public IFurit
{
	// Inherited via IFurit
	virtual std::string GetServiceName() override
	{
		return "this is Apple";
	}
	virtual std::string GetServiceType() override
	{
		return "Apple Apple";
	}
	virtual std::string Origin() override
	{
		return "Apples are made of water";
	}
	virtual int EatType() override
	{
		return 1;
	}

	//具体功能
	std::string Color()
	{
		return "Apple is red";
	}
};

//template<class Ty>
template<typename Ty>
class ServiceFactory : public IFactoryInterface
{
	// Inherited via IFactoryInterface
	virtual std::shared_ptr<IService> CreateInstance() override
	{
		return std::shared_ptr<IService>();
	}
	virtual void clear() override
	{
	}
};