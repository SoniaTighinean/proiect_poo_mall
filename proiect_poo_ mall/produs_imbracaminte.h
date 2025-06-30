#pragma once
#include "produs.h"
#include <string>

using namespace std;

class ProdusImbracaminte : public Produs {
protected:
	string m_marime;
	string m_material;

public:
	ProdusImbracaminte();
	ProdusImbracaminte(const string& nume, double pret, int cant, const string& marime, const string& material);

	void AfiseazaInfo() const override;
};