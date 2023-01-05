#pragma once
#include <memory>
#include <vector>
#include <mutex>
#include "IProduct.h"


//////
/*
���󹤳����������в�Ʒ����ͨ�ýӿ�
*/
/////
class IFactory
{
public:
	virtual std::shared_ptr<IChair> GetChair() = 0;
	virtual std::shared_ptr<ISofa> GetSofa() = 0;
	virtual std::shared_ptr<ITable> GetTable() = 0;
};


// ���з������
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

// ���񹤳��ӿ�
class IFactoryInterface
{
public:
	virtual std::shared_ptr<IService> CreateInstance() = 0;
	virtual void clear() = 0;
	virtual ~IFactoryInterface() = default;
};

// ��ͬ������ӿ�
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


// �������
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
	//�������⹦��
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

	//���幦��
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