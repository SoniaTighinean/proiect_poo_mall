#pragma once
#include "magazin.h"
#include <string>

using namespace std;

class MagazinImbracaminte : public Magazin {
protected:
	string m_gen;
	bool m_are_cabina;
	string m_tip;

public:
	MagazinImbracaminte();
	MagazinImbracaminte(const string& nume,  const string& gen, bool cabina);

	void Afiseaza() const override;

};
