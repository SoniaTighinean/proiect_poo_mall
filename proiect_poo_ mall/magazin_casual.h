#pragma once
#include "magazin_imbracaminte.h"

class MagazinCasual : public MagazinImbracaminte {
private:
	string m_colectie;

public :
	MagazinCasual();
	MagazinCasual(string const& nume, string const& gen, bool cabina, string const& colectie);

	string GetTipMagazin() const override;
	void AfisareDetaliata() const override;
	void AfisareScurta() const override;
	
};