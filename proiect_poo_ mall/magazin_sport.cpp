#include "magazin_sport.h"
#include <iostream>

MagazinSport::MagazinSport() : MagazinImbracaminte() {
	m_brand = "neconoscut";
	m_specializare = "necunoscut";
}


MagazinSport::MagazinSport(string const& nume, string const& gen, bool cabina, string const& brand, const string& spec) : MagazinImbracaminte(nume,gen, cabina),
m_brand(brand), m_specializare(spec) {
}

void MagazinSport::Afiseaza() const {
	MagazinImbracaminte::Afiseaza();
	cout << ", Brand : " << m_brand << ", Nr echipamente: " << m_specializare<<"\n";
}

string MagazinSport::GetTipMagazin() const {
	return "Sport";
}