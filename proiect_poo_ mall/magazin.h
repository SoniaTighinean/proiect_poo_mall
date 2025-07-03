#pragma once
#include <string>
#include <vector>
#include "produs.h"
#include "descriere.h"

using namespace std;

class Magazin : public Descriere {
protected:
	static int next_id;
	int m_id;
	string m_nume;
	vector<Produs*> m_inventar;

public:
	Magazin(); 

	Magazin(const string& nume);

	int GetId() const {
		return m_id;
	}

	string GetNume() const{
		return m_nume;
	}

	void AdaugaProdus(Produs* produs);
	void AfiseazaInventar() const;
	double CalculValoareTotala() const;
	int GetNrProduse() const;
	

	virtual void Afiseaza() const = 0 ;
	virtual string GetTipMagazin() const = 0;
	
	string DescriereLunga() const override;
	string DescriereScurta() const override;

	virtual ~Magazin();
	

};