#pragma once
#include "produs.h"

class Electronice : public Produs {
protected:
	string m_marca;
	int m_garantie;

public:
	Electronice();
	Electronice(const string& nume, double pret, int cant,const string& marca, int garantie);

	string GetMarca() const {
		return m_marca;
	}

	int GetGarantie() const {
		return m_garantie;
	}

	string GetCategorie() const override;
	double CalculValoareTotala() const override;

	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

};