
#include <iostream>
#include <vector>
#include "magazin.h"
#include "magazin_imbracaminte.h"
#include "magazin_sport.h"
#include "magazin_urban.h"

int main()
{
	vector<Magazin*> mall;
	mall.push_back(new MagazinSport("InterSport", "unisex", true, "nike", "baschet"));
	mall.push_back(new MagazinUrban("ZARA", "femei", true, "primavara 2025"));

	for (auto m : mall) {
		m->Afiseaza(); 
	}

}

