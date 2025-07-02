#pragma once
#include "magazin_imbracaminte.h"

class MagazinUrban : public MagazinImbracaminte {
private:
	string m_colectie;

public :
	MagazinUrban();
	MagazinUrban(string const& nume, string const& gen, bool cabina, string const& colectie);

	void Afiseaza() const override;
	string GetTipMagazin() const override;
	
};