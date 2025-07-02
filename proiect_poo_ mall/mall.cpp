#include "mall.h"
#include <iostream>

Mall::Mall() {
	m_nume = "necunoscut";
}

Mall::Mall(const string&nume) : m_nume(nume){}

void Mall::AdaugaMagazin(Magazin* magazin) {
	if (magazin != nullptr) {
		m_magazine.push_back(magazin);
	}
}
int Mall::GetNrMagazine() const {
	return int(m_magazine.size());
}

double Mall::CalcValoareTotala() const {
	double total = 0.0;
	for (const auto& m : m_magazine) {
		total += m->CalculValoareTotala();
	}
	return total;
}
int Mall::GetNrProduse() const {
	double total = 0;
	for (const auto& m : m_magazine) {
		total += m->GetNrProduse();
	}
	return total;
}

void Mall::AfiseazaMall() const {
	cout << " Mall " << m_nume << ": \n";
	cout << "Magazine disponibile:  \n";
	if (m_magazine.empty()) {
		cout << "Mall nu are magazine.\n";
	}

	for (const auto& m : m_magazine) {
		m->Afiseaza();
	}

	cout << "Numar magazine: " << GetNrMagazine() << "\n";
	cout << "Valoare totala produse: " <<CalcValoareTotala()<< " lei\n";
}
Mall::~Mall() {
	for (const auto& m : m_magazine) {
		delete m;
	}
}