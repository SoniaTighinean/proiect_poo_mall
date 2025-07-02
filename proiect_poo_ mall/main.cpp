
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
#include "magazin_electronice.h"
#include "laptop.h"
#include "telefon.h"

int main()
{
	vector<Magazin*> mall;

	mall.push_back(new MagazinSport("InterSport", "unisex", true, { "nike"}, "baschet"));
	mall.push_back(new MagazinUrban("ZARA", "femei", true, "primavara 2025"));

	vector<string> marci = { "Apple", "Samsung", "Lenovo" };
	mall.push_back(new MagazinElectronice("Altex", marci, true));

	vector<Produs*> produse;
	produse.push_back(new Tricou("tricou adidas", 50.0, 2, "M", "bumbac", "rosu", true));

	produse.push_back(new Laptop("Lap ASUS", 5499.99, 1, "ASUS", 24, "Intel i7", 1000));

	produse.push_back(new Telefon("Iph 16", 4599.99, 2, "Apple ", 48, 256, 8));
	for (auto m : mall) {
		m->Afiseaza(); 
	}

	for (auto p : produse) {
		p->AfiseazaInfo();
	}

	

}

