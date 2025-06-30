#pragma once
#include "magazin_imbracaminte.h"

class MagazinSport : public MagazinImbracaminte {
private:
	string m_brand;
	string m_specializare;

public :
	MagazinSport();
	MagazinSport(string const& nume, string const& gen, bool cabina, string const& brand, string const& spec);

	void Afiseaza() const override;

};