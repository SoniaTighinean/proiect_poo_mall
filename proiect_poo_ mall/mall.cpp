#include "mall.h"
#include <iostream>
#include <map>

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

double Mall::CalculValoareTotala() const {
	double total = 0.0;
	for (const auto& m : m_magazine) {
		total += m->CalculValoareTotala();
	}
	return total;
}
int Mall::GetNrProduse() const {
	int total = 0;
	for (const auto& m : m_magazine) {
		total += m->GetNrProduse();
	}
	return total;
}

void Mall::Afiseaza() const {
	cout << " Mall " << m_nume << ": \n";
	cout << "Magazine disponibile:  \n";
	if (m_magazine.empty()) {
		cout << "Mall nu are magazine.\n";
	}

	for (const auto& m : m_magazine) {
		cout << "Magazin : " << m->GetNume() << ", Tip: " << m->GetTipMagazin() << "\n";
		m->AfiseazaInventar();
	}

	cout << "Numar magazine: " << GetNrMagazine() << "\n";
	cout << "Valoare totala produse: " <<CalculValoareTotala()<< " lei\n";
}

void Mall::AfiseazaStatisticiPeTip() const {
	map<string, double> statistici;

	for (const auto& m : m_magazine) {
		string tip = m->GetTipMagazin();
		double valoare = m->CalculValoareTotala();
		statistici[tip] += valoare;
	}

	cout << "Statistici pe tip: \n";
	for (const auto& [tip, valoare] : statistici) {
		cout << tip << " : " << valoare << " lei\n";
	}

}

Mall::~Mall() {
	for (const auto& m : m_magazine) {
		delete m;
	}
}