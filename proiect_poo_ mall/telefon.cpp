#include "telefon.h"
#include <iostream>

Telefon::Telefon() : Electronice() {
	m_stocare = 0;
	m_rezolutie = 0;
}

Telefon::Telefon(const string& nume, double pret, int cant, const string marca, int garantie, int stocare, int rezolutie) : Electronice(nume,pret,cant,marca,garantie) , 
	m_stocare(stocare) , m_rezolutie(rezolutie){ }

void Telefon::AfiseazaInfo() const {
	Electronice::AfiseazaInfo();
	cout << ", Spatiu stocare: "<<m_stocare << "GB, Rezolutie Camera: " << m_rezolutie << "MP\n";
}

double Telefon::CalculValoareTotala() const {
	double valoare = Produs::CalculValoareTotala();
	if (m_stocare > 256) {
		valoare *= 1.25;
	}
	return valoare;
}
