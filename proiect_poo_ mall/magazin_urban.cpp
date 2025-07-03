#include "magazin_urban.h"
#include <iostream>

MagazinUrban::MagazinUrban() : MagazinImbracaminte() {
	m_colectie = "necunoscuta";
}

MagazinUrban::MagazinUrban(string const& nume, string const& gen, bool cabina, string const& colectie) : MagazinImbracaminte(nume, gen, cabina) , m_colectie(colectie) {}

void MagazinUrban::AfisareLunga() const {
	MagazinImbracaminte::AfisareLunga();
	cout << ", colectie: " << m_colectie << "\n";
}

void MagazinUrban::AfisareScurta() const {
	cout << "MagazinUrban: " << m_nume << "\n";
}

string MagazinUrban::GetTipMagazin() const {
	return "Urban";
}