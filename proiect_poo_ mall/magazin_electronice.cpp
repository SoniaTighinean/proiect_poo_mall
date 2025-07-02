#include "magazin_electronice.h"
#include <iostream>
MagazinElectronice::MagazinElectronice() : Magazin() {
	m_are_service = false;
}

MagazinElectronice::MagazinElectronice(const string& nume, const vector<string>& marca, bool service) 
	:Magazin(nume) , m_marci(marca), m_are_service(service) { }

void MagazinElectronice::Afiseaza() const {
	cout << "Id: " << m_id << ", Nume: " << m_nume<<", Marci: ";
	for (const auto& b : m_marci) {
		cout << b << ", ";
	}
	cout<< " are service: ";
	if (m_are_service)
		cout << "DA\n";
	else
		cout << "NU\n";

}

string MagazinElectronice::GetTipMagazin() const {
	return "Electronic";
}
