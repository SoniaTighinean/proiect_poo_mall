#pragma once
#include "magazin.h"
#include "descriere.h"

using namespace std;
class Mall : public Descriere {
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
	double CalculValoareTotala() const;
	int GetNrProduse() const;
	int GetNrMagazine() const ;

	void Afiseaza() const;
	void AfiseazaStatisticiPeTip() const;

	string DescriereLunga() const override;
	string DescriereScurta() const override;

	~Mall();

};