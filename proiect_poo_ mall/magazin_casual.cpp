#include "magazin_Casual.h"
#include <iostream>

MagazinCasual::MagazinCasual() : MagazinImbracaminte() {
	m_colectie = "necunoscuta";
}

MagazinCasual::MagazinCasual(string const& nume, string const& gen, bool cabina, string const& colectie) : MagazinImbracaminte(nume, gen, cabina) , m_colectie(colectie) {}

void MagazinCasual::AfisareDetaliata() const {
	MagazinImbracaminte::AfisareDetaliata();
	cout << ", colectie: " << m_colectie << "\n";
}

void MagazinCasual::AfisareScurta() const {
	cout << "MagazinCasual: " << m_nume << "\n";
}

string MagazinCasual::GetTipMagazin() const {
	return "Casual";
}