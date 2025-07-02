#include "magazin_sport.h"
#include <iostream>
#include <vector>

MagazinSport::MagazinSport() : MagazinImbracaminte() {
	m_tip_sport = "necunoscut";
}


MagazinSport::MagazinSport(const string& nume, const string& gen, bool cabina, const vector<string> & brand, const string& tip) : MagazinImbracaminte(nume,gen, cabina),
m_branduri(brand), m_tip_sport(tip) {
}

void MagazinSport::Afiseaza() const {
	MagazinImbracaminte::Afiseaza();
	cout << ", Branduri : ";
	for (const auto& b : m_branduri)
		cout << b << ", ";
	cout << " Tip Sport: " << m_tip_sport << "\n";
}

string MagazinSport::GetTipMagazin() const {
	return "Sport";
}