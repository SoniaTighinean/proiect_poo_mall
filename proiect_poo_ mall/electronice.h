#pragma once
#include "produs.h"

class Electronice : public Produs {
protected:
	string m_marca;
	int m_garantie;

public:
	Electronice();
	Electronice(const string& nume, double pret, int cant,const string& marca, int garantie);

	void AfiseazaInfo() const ;

};