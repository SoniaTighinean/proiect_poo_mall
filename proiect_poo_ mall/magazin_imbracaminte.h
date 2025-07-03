#pragma once
#include "magazin.h"
#include <string>

using namespace std;

class MagazinImbracaminte : public Magazin {
protected:
	string m_gen;
	bool m_are_cabina;
	

public:
	MagazinImbracaminte();
	MagazinImbracaminte(const string& nume,  const string& gen, bool cabina);


	string GetTipMagazin() const override;
	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

};
