#include "magazin_electronice.h"
#include <iostream>
MagazinElectronice::MagazinElectronice() : Magazin() {
	m_brand_principal = "necunoscut";
	m_are_service = false;
}

MagazinElectronice::MagazinElectronice(const string& nume, const string& brand, bool service) 
	:Magazin(nume) , m_brand_principal(brand), m_are_service(service) { }

void MagazinElectronice::Afiseaza() const {
	cout << "Id: " << m_id << ", Nume: " << m_nume << ", brand primcipal: " << m_brand_principal << ", are service: ";
	if (m_are_service)
		cout << "DA\n";
	else
		cout << "NU\n";
}
