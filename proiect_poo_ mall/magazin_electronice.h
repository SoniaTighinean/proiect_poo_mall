#pragma once
#include "magazin.h"
#include <string>

class MagazinElectronice : public Magazin {
private:
	bool m_are_service;
	string m_brand_principal;

public:
	MagazinElectronice();
	MagazinElectronice(const string& nume, const string& brand, bool service);

	string GetBrand() const {
		return m_brand_principal;
	}

	bool GetService() const {
		return m_are_service;
	}
	void Afiseaza() const override;

};