#include "electronice.h"
#include <iostream>

Electronice::Electronice() : Produs() {
	m_marca = "necunoscut";
	m_garantie = 0;
}

Electronice::Electronice(const string& nume, double pret, int cant,const string&marca, int garantie) : Produs(nume, pret, cant),
	m_marca(marca), m_garantie(garantie) { }

void Electronice::AfiseazaInfo() const {
	cout << "Nume: " << m_nume << ", pret: " << m_pret << ", cantiate: " << m_cantitate;
	cout << ", marca: " << m_marca << ", garantie: " << m_garantie<<" luni ";
}
