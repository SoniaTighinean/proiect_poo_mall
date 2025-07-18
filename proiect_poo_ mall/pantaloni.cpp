#include "pantaloni.h"
#include <iostream>

Pantaloni::Pantaloni() : Haina() {
	m_tip = "scurti";
	m_nr_buzunare = 0;
}

Pantaloni::Pantaloni(const string& nume, double pret, int cant, const string& marime, const string& material, const string& tip, int nr) 
	: Haina(nume, pret, cant, marime, material) , m_tip(tip), m_nr_buzunare(nr) { }

void Pantaloni::AfisareDetaliata() const {
	Haina::AfisareDetaliata();
	cout << "Tip: " << m_tip << ", nr_buzunare: " << m_nr_buzunare<<"\n";
}

void Pantaloni::AfisareScurta() const {
	cout << "Pantaloni:"<<m_nume<<"\n ";
}

double Pantaloni::CalculValoareTotala() const {
	double valoare = Produs::CalculValoareTotala();
	if (m_nr_buzunare > 4) {
		valoare *= 1.15;
	}
	return valoare;
}