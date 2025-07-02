#pragma once
#include "electronice.h"

class Telefon : public Electronice {
private:
	int m_stocare;
	int m_rezolutie;
	
public:
	Telefon();
	Telefon(const string& nume, double pret, int cant, const string marca, int garantie, int stocare,int rezolutie);

	void AfiseazaInfo()const override;

};