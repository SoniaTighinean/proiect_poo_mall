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
		p->AfisareDetaliata();
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

int Magazin::NrProduseCategorie(const string& categorie) const {
	int nr = 0;
	for (const auto& p : m_inventar) {
		if (p->GetCategorie() == categorie) {
			nr += p->GetCantitate();
		}
	}
	return nr;
}

Produs* Magazin::GetCelMaiScumpProdus() const {
	if (m_inventar.empty()) 
		return nullptr;

	Produs* maxim = m_inventar[0];
	for (const auto& p : m_inventar) {
		if (p->EsteMaiScumpCa(*maxim)) {
			maxim = p;
		}
	}
	return maxim;
}

void Magazin::AfisareDetaliata() const {
	cout << " ID: "<<m_id<<", Nume: "<<m_nume<<"\n";
}

void Magazin::AfisareScurta() const {
	cout << "Magazin: " << m_nume;
}


Magazin::~Magazin() {
	for (auto* p : m_inventar) {
		delete p;
	}

}

