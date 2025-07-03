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

	const vector<string>& GetMarci() const {
		return m_marci;
	}

	bool GetService() const {
		return m_are_service;
	}

	string GetTipMagazin() const override;

	void AfisareDetaliata() const override;
	void AfisareScurta() const override;

};