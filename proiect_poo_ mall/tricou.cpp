#include "tricou.h"
#include <iostream>

Tricou::Tricou() : Haina() {  
   m_culoare = "alb";  
   m_are_imprimeu = false;  
}  

Tricou::Tricou(const string& nume, double pret, int cant, const string& marime, const string& material, const string& culoare, bool imprimeu)
	: Haina(nume,pret,cant,marime, material) ,m_culoare(culoare), m_are_imprimeu(imprimeu) {   
}

void Tricou::Afiseaza() const {
	Haina::Afiseaza();
	cout << ", Culoare: " << m_culoare<<", are imprimeu : ";
	if (m_are_imprimeu)
		cout << "DA\n";
	else
		cout << "NU\n";
}

double Tricou::CalculValoareTotala() const {
	double valoare = Produs::CalculValoareTotala();
	if (m_are_imprimeu) {
		valoare = valoare * 1.1;
	}
	return valoare;
}