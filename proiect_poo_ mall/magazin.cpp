#include "magazin.h"
#include <iostream>

int Magazin::next_id = 0;

Magazin::Magazin() {
	m_id = ++next_id;
	m_nume = "necunoscut";
}

Magazin::Magazin(const string& nume) : m_nume(nume) {
	m_id = ++next_id;
}

void Magazin::AdaugaProdus(Produs* produs) {
	if (produs != NULL) {
		m_inventar.push_back(produs);
	}

}

void Magazin::AfiseazaInventar() const {
	cout << "Inventar " <<m_nume<<": \n";
	for (const auto& p : m_inventar) {
		cout << p << " ";
	}
}

double Magazin::CalculValoareTotala() const {
	double total = 0.0;

	if (m_inventar.empty()) {
		cout << "Inventarul e gol.\n";
		return;
	}
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

