#pragma once
#include <string>
#include <vector>
#include "produs.h"
#include "afisare.h"

using namespace std;

class Magazin : public Afisare {
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
	

	virtual string GetTipMagazin() const = 0;
	
	void AfisareLunga() const override;
	void AfisareScurta() const override;

	virtual ~Magazin();
	

};