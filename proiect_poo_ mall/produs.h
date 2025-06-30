#pragma once
#include <string>

using namespace std;

class Produs {
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
	virtual void AfiseazaInfo() const=0 ;

	virtual ~Produs(){}


};