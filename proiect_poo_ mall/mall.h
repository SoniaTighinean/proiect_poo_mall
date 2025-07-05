#pragma once
#include "magazin.h"
#include <memory>
#include "afisare.h"

using namespace std;
class Mall : public Afisare {
private:
	string m_nume;
	std::vector<shared_ptr<Magazin>> m_magazine;

public:
	Mall();
	Mall(const string& nume);

	string GetNume() const {
		return m_nume;
	}

	void AdaugaMagazin(std::shared_ptr<Magazin> magazin);
	double CalculValoareTotala() const;
	int GetNrProduse() const;
	int GetNrMagazine() const ;

	void AfiseazaStatisticiPeTip() const;

	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

	~Mall() {};

};