#include "produs_imbracaminte.h"
#include <iostream>

ProdusImbracaminte::ProdusImbracaminte() : Produs() {
	m_marime = "XS";
	m_material = "necunoscut";
}

ProdusImbracaminte::ProdusImbracaminte(const string& nume, double pret, int cant, const string& marime, const string& material) : Produs(nume, pret, cant),
m_marime(marime), m_material(material) { }



void ProdusImbracaminte::AfiseazaInfo() const {
	cout << "Nume: " << m_nume << ", pret: " << m_pret << ", cantiate: " << m_cantitate;
	cout << ", marime: " << m_marime << ", material: " << m_material << "\n";
}