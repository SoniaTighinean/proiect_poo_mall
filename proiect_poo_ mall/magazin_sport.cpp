#include "magazin_sport.h"
#include <iostream>

MagazinSport::MagazinSport() : MagazinImbracaminte() {
	m_brand = "neconoscut";
	m_nr_echipamente = 0;
}


MagazinSport::MagazinSport(string const& nume, string const& gen, bool cabina, string const& brand, int nr_echipamente) : MagazinImbracaminte(nume,gen, cabina),
m_brand(brand), m_nr_echipamente(nr_echipamente) {
}

void MagazinSport::Afiseaza() const {
	MagazinImbracaminte::Afiseaza();
	cout << ", Brand : " << m_brand << ", Nr echipamente: " << m_nr_echipamente<<"\n";
}