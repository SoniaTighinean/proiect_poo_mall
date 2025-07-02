#pragma once
#include "magazin.h"

class Mall {
private:
	string m_nume;
	vector<Magazin*> m_magazine;

public:
	Mall();
	Mall(const string& nume);

	string GetNume() const {
		return m_nume;
	}

	void AdaugaMagazin(Magazin* magazin);
	double CalcValoareTotala() const;
	int GetNrProduse() const;
	int GetNrMagazine() const ;

	void AfiseazaMall() const;

	~Mall();

};