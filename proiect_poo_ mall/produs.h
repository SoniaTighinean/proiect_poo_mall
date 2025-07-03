#pragma once
#include <string>
#include "afisare.h"

using namespace std;

class Produs : public Afisare {
protected:
	string m_nume;
	double m_pret;
	int m_cantitate;

public:
	Produs();
	Produs(const string& nume, double pret, int cant);

	string GetNume() const {
		return m_nume;
	}

	double GetPret() const {
		return m_pret;
	}

	int GetCantitate() const {
		return m_cantitate;
	}
	
	virtual string GetCategorie() const = 0;
	virtual double CalculValoareTotala() const;
	
	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

	virtual ~Produs(){}


};