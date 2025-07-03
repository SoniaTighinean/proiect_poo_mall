#pragma once
#include "haina.h"

class Tricou : public Haina {
private:
	string m_culoare;
	bool m_are_imprimeu;

public:
	Tricou();
	Tricou(const string& nume, double pret, int cant, const string& marime, const string& material, const string& culoare, bool imprimeu);

	string GetCuloare() const{
		return m_culoare;
	}

	bool GetImprimeu() const {
		return m_are_imprimeu;
	}

	double CalculValoareTotala() const override;

	void AfisareLunga() const override;
	void AfisareScurta() const override;

};