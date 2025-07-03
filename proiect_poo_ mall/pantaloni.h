#pragma once
#include "haina.h"

class Pantaloni : public Haina{
private:
	string m_tip;
	int m_nr_buzunare;
public:
	Pantaloni();
	Pantaloni(const string& nume, double pret, int cant, const string& marime, const string& material, const string& tip, int nr);

	string GetTip() const {
		return m_tip;
	}

	int GetNrBuzunare() const {
		return m_nr_buzunare;
	}
	
	double CalculValoareTotala() const override;

	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

};