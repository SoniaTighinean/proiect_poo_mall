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


	string GetTipMagazin() const override;

	void AfisareLunga() const override;
	void AfisareScurta() const override;

};