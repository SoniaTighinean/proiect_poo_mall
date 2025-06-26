#pragma once
#include "magazin_imbracaminte.h"

class MagazinSport : public MagazinImbracaminte {
private:
	string m_brand;
	int m_nr_echipamente;

public :
	MagazinSport();
	MagazinSport(string const& nume, string const& gen, bool cabina, string const& brand, int nr_echipament);

	void Afiseaza() const override;

};