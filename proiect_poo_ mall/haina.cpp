#include "haina.h"
#include <iostream>

Haina::Haina() : Produs() {
	m_marime = "XS";
	m_material = "necunoscut";
}

Haina::Haina(const string& nume, double pret, int cant, const string& marime, const string& material) : Produs(nume, pret, cant),
m_marime(marime), m_material(material) { }



void Haina::AfisareLunga() const {
	cout << "Nume: " << m_nume << ", pret: " << m_pret << ", cantitate: " << m_cantitate;
	cout << ", marime: " << m_marime << ", material: " << m_material ;
}

void Haina::AfisareScurta() const {
	cout << "Haina: " << m_nume<<"\n";
}