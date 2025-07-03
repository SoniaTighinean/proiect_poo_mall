#pragma once
#include "electronice.h"

class Telefon : public Electronice {
private:
	int m_stocare;
	int m_rezolutie;
	
public:
	Telefon();
	Telefon(const string& nume, double pret, int cant, const string marca, int garantie, int stocare,int rezolutie);

	int GetStocare() const {
		return m_stocare;
	}

	int GetRezolutie() const {
		return m_rezolutie;
	}
	void Afiseaza()const override;
	double CalculValoareTotala() const override;

};