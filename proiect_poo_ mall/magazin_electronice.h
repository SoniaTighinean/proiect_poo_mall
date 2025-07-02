#pragma once
#include "magazin.h"
#include <string>
#include <vector>

using namespace std;

class MagazinElectronice : public Magazin {
private:
	bool m_are_service;
	vector<string> m_marci;

public:
	MagazinElectronice();
	MagazinElectronice(const string& nume, const vector<string>& marca, bool service);

	const vector<string>& GetBrand() const {
		return m_marci;
	}

	bool GetService() const {
		return m_are_service;
	}
	void Afiseaza() const override;
	string GetTipMagazin() const override;

};