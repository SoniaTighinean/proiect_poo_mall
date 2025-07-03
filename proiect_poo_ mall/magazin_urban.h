#pragma once
#include "magazin_imbracaminte.h"

class MagazinUrban : public MagazinImbracaminte {
private:
	string m_colectie;

public :
	MagazinUrban();
	MagazinUrban(string const& nume, string const& gen, bool cabina, string const& colectie);

	string GetTipMagazin() const override;
	void AfisareLunga() const override;
	void AfisareScurta() const override;
	
};