#include "magazin_imbracaminte.h"
#include <iostream>

MagazinImbracaminte::MagazinImbracaminte() : Magazin() {
	m_gen = "unisex";
	m_are_cabina = false;
}

MagazinImbracaminte::MagazinImbracaminte(const string& nume, const string& gen, bool cabina): Magazin(nume), m_gen(gen), m_are_cabina(cabina) {}

void MagazinImbracaminte::Afiseaza() const {
	cout << " Id: " << m_id << ", Nume: "<< m_nume;
	cout << ", Gen: " << m_gen << ", cabina de proba: ";
	if (m_are_cabina)
		cout << "DA ";
	else
		cout << "NU ";

}

string MagazinImbracaminte::GetTipMagazin() const {
	return "imbracaminte";
}