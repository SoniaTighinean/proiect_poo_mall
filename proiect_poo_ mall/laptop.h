#pragma once
#include "electronice.h"

class Laptop : public Electronice {
private:
	string m_procesor;
	int m_memorie;

public:
	Laptop();
	Laptop(const string& nume, double pret, int cant, const string marca, int garantie, const string& procesor, int memorie);
	
	double CalculValoareTotala() const override;

	void AfisareLunga() const override;
	void AfisareScurta() const override;
};