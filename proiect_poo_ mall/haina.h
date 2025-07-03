#pragma once
#include "produs.h"
#include <string>

using namespace std;

class Haina : public Produs {
protected:
	string m_marime;
	string m_material;

public:
	Haina();
	Haina(const string& nume, double pret, int cant, const string& marime, const string& material);

	string GetMarime() const {
		return m_marime;
	}
	string GetMaterial() const {
		return m_material;
	}
	void Afiseaza() const override;
	string GetCategorie() const override { return "Haine"; }
};