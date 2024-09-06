#include <iostream>
using namespace std;


class Car
{
	char* model;
	char* country;
	char* price;
	int year;
public:
	Car()
	{
		model = nullptr;
		country = nullptr;
		price = nullptr;
		year = 0;
	}
	Car(const char* Model, const char* Country, const char* Price, int Year) // construct with param
	{
		model = new char[strlen(Model) + 1];
		strcpy_s(model , strlen(Model) + 1, Model);
		country = new char [strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);
		price = new char[strlen(Price) + 1];
		strcpy_s(price, strlen(Price) + 1, Price);
		year = Year;
	}
	
	void Input()
	{
		char buff[20];

		cout << "Model: ";
		cin >> buff;
		SetM(buff);

		cout << "Country: ";
		cin >> buff;
		SetC(buff);

		cout << "Price: ";
		cin >> buff;
		SetP(buff);

		cout << "Year: ";
		cin >> year;
		SetY(year);
		
	}

	void SetM(const char* Model)
	{
		if (model != nullptr)
		{
			delete[] model;
		}
		model = new char[strlen(Model) + 1];
		strcpy_s(model, strlen(Model) + 1, Model);
	}
	void SetC(const char* Country)
	{
		if (country != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);
	}
	void SetP(const char* Price)
	{
		if (price != nullptr)
		{
			delete[] price;
		}
		price = new char[strlen(Price) + 1];
		strcpy_s(price, strlen(Price) + 1, Price);
	}
	void SetY(int Year)
	{
		year = Year;
	}

	char* GetM()
	{
		return model;
	}
	char* GetC()
	{
		return country;
	}
	char* GetP()
	{
		return price;
	}
	int GetY()
	{
		return year;
	}

	void Output()
	{
		cout << "Model: "<< GetM()<<endl;
		cout << "Country: "<< GetC()<<endl;
		cout << "Price: "<<GetP()<<endl;
		cout << "Year: "<<GetY()<<endl;
	}

	~Car()
	{
		delete[] model;
		delete[] country;
		delete[] price;
	}
	
};

int main()
{

	Car car1("BMW","USA","25.000", 2022);
	car1.Output();

	Car car2;
	car2.Input();
	car2.Output();

	system("pause");
}