#include "laptop.h"
#include <iostream>

Laptop::Laptop() :Electronice() {
	m_procesor = "intel";
	m_memorie = 0;
}

Laptop::Laptop(const string& nume, double pret, int cant, const string marca, int garantie, const string& procesor, int memorie):
	Electronice(nume,pret,cant,marca,garantie), m_procesor(procesor), m_memorie(memorie) { }

void Laptop::AfiseazaInfo() const {
	Electronice::AfiseazaInfo();
	cout << ", Procesor: " << m_procesor << ", memorie: " << m_memorie << "GB\n";
}

double Laptop::CalculValoareTotala() const {
	double valoare = CalculValoareTotala();
	if (m_memorie > 8) {
		valoare *= 1.2;
	}
	return valoare;
}
