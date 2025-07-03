#pragma once
#include <string>
#include "descriere.h"

using namespace std;

class Produs : public Descriere{
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
	virtual void Afiseaza() const=0 ;
	virtual string GetCategorie() const = 0;
	virtual double CalculValoareTotala() const;
	
	string DescriereLunga() const override;
	string DescriereScurta() const override;

	virtual ~Produs(){}


};