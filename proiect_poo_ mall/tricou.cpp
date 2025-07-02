#include "tricou.h"
#include <iostream>

Tricou::Tricou() : Haina() {  
   m_culoare = "alb";  
   m_are_imprimeu = false;  
}  

Tricou::Tricou(const string& nume, double pret, int cant, const string& marime, const string& material, const string& culoare, bool imprimeu)
	: Haina(nume,pret,cant,marime, material) ,m_culoare(culoare), m_are_imprimeu(imprimeu) {   
}

void Tricou::AfiseazaInfo() const {
	Haina::AfiseazaInfo();
	cout << ", Culoare: " << m_culoare<<", are imprimeu : ";
	if (m_are_imprimeu)
		cout << "DA\n";
	else
		cout << "NU\n";
}