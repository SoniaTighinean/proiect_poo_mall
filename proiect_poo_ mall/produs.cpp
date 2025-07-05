#include "produs.h"
#include <iostream>

Produs::Produs() {
	m_nume = "necunoscut";
	m_pret=0.0; 
	m_cantitate = 0; }

Produs::Produs(const string& nume, double pret, int cant) : m_nume(nume), m_pret(pret), m_cantitate(cant) {}

double Produs::CalculValoareTotala() const {
	return m_pret * m_cantitate;
}

bool Produs::EsteDisponibil() const {
	return m_cantitate > 0;
}

bool Produs::EsteMaiScumpCa(const Produs& produs) const {
	return m_pret > produs.m_pret;
}


void  Produs::AfisareDetaliata() const {
	cout << "Produs: " << m_nume << ", Pret: "<<m_pret<<", Cantitate: "<<m_cantitate<<"\n";

}

void Produs::AfisareScurta() const {
	cout << "Produs: " << m_nume;

}

