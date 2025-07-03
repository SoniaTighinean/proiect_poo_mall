#include "laptop.h"
#include <iostream>

Laptop::Laptop() :Electronice() {
	m_procesor = "intel";
	m_memorie = 0;
}

Laptop::Laptop(const string& nume, double pret, int cant, const string marca, int garantie, const string& procesor, int memorie):
	Electronice(nume,pret,cant,marca,garantie), m_procesor(procesor), m_memorie(memorie) { }

void Laptop::AfisareDetaliata() const {
	Electronice::AfisareDetaliata();
	cout << ", Procesor: " << m_procesor << ", memorieRAM: " << m_memorie << "GB\n";
}

void Laptop::AfisareScurta() const {
	cout << "Laptop: " << m_nume << "\n";
}

double Laptop::CalculValoareTotala() const {
	double valoare = Electronice::CalculValoareTotala();
	if (m_memorie > 8) {
		valoare *= 1.2;
	}
	return valoare;
}
