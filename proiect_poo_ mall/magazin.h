#pragma once
#include <string>

using namespace std;

class Magazin {
protected:
	static int next_id;
	int m_id;
	string m_nume;
	//int m_etaj;

public:
	Magazin(); 

	Magazin(const string& nume);

	int GetId() const {
		return m_id;
	}

	string GetNume() const{
		return m_nume;
	}

	virtual void Afiseaza() const = 0 ;
	virtual ~Magazin() = default;
	

};