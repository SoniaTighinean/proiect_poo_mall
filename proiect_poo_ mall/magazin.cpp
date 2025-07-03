#include "magazin.h"
#include <iostream>
#include <map>

int Magazin::next_id = 0;

Magazin::Magazin() {
	m_id = ++next_id;
	m_nume = "necunoscut";
}

Magazin::Magazin(const string& nume) : m_nume(nume) {
	m_id = ++next_id;
}

void Magazin::AdaugaProdus(Produs* produs) {
	if (produs == nullptr) {
		throw invalid_argument("Produsul e null");
	}
	m_inventar.push_back(produs);

}

void Magazin::AfiseazaInventar() const {
	cout << "Inventar " <<m_nume<<": \n";
	for (const auto& p : m_inventar) {
		p->Afiseaza();
	}
}

double Magazin::CalculValoareTotala() const {
	double total = 0.0;

	for (const auto& p : m_inventar) {
		total += p->GetPret() * p->GetCantitate();
	}
	return total;
}

int Magazin::GetNrProduse() const {
	int total = 0;
	for (const auto& p : m_inventar) {
		total += p->GetCantitate();
	}
	return total;
}

Magazin::~Magazin() {
	for (auto* p : m_inventar) {
		delete p;
	}

}

