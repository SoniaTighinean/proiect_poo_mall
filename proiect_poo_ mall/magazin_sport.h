#pragma once
#include "magazin_imbracaminte.h"
#include <vector>

class MagazinSport : public MagazinImbracaminte {
private:
	vector<string> m_branduri;
	string m_tip_sport;

public :
	MagazinSport();
	MagazinSport( const string & nume, const string& gen, bool cabina, const vector<string>& brand,  const string& tip);

	void Afiseaza() const override;
	string GetTipMagazin() const override;

};