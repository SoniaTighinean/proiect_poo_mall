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

string Produs::DescriereLunga() const {
    return "Produs: " + m_nume +
        ", Categorie: " + GetCategorie() +
        ", Pret: " + to_string(m_pret) +
        " lei, Cantitate: " + to_string(m_cantitate) +
        ", Valoare totala: " + to_string(CalculValoareTotala()) + " lei";
}

string Produs::DescriereScurta() const {
    return "Nume: " + m_nume + ", Pret: " + to_string(m_pret) + " lei";
}

