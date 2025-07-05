#pragma once
#include <string>
#include <vector>
#include <memory>
#include "produs.h"
#include "afisare.h"

using namespace std;

class Magazin : public Afisare {
protected:
	static int next_id;
	int m_id;
	string m_nume;
	std::vector<std::shared_ptr<Produs>> m_inventar;

public:
	Magazin(); 

	Magazin(const string& nume);

	int GetId() const {
		return m_id;
	}

	string GetNume() const{
		return m_nume;
	}

	void AdaugaProdus(std::shared_ptr<Produs> produs);
	void AfiseazaInventar() const;
	double CalculValoareTotala() const;
	int GetNrProduse() const;
	

	virtual string GetTipMagazin() const = 0;

	int NrProduseCategorie(const string& categorie) const;
	std::shared_ptr<Produs> GetCelMaiScumpProdus() const;
	
	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

	virtual ~Magazin();
	

};