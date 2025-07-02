
#include <iostream>
#include <vector>
#include "magazin.h"
#include "magazin_imbracaminte.h"
#include "magazin_sport.h"
#include "magazin_urban.h"
#include "produs.h"
#include "haina.h"
#include "tricou.h"
#include "pantaloni.h"

int main()
{
	vector<Magazin*> mall;
	mall.push_back(new MagazinSport("InterSport", "unisex", true, "nike", "baschet"));
	mall.push_back(new MagazinUrban("ZARA", "femei", true, "primavara 2025"));


	vector<Produs*> produse;
	produse.push_back(new Tricou("tricou adidas", 50.0, 2, "M", "bumbac", "rosu", true));
	for (auto m : mall) {
		m->Afiseaza(); 
	}

	for (auto p : produse) {
		p->AfiseazaInfo();
	}

}

