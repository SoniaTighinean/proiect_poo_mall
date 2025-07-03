
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
#include "mall.h"
#include "afisare.h"

int main()
{

	Mall* AFI = new Mall("Afi Cotroceni");

	MagazinSport* intersport = new MagazinSport("InterSport", "unisex", true, { "nike","adidas" }, "baschet");
	MagazinUrban* zara = new  MagazinUrban("ZARA", "femei", true, "primavara 2025");
	
	vector<string> marci = { "Apple", "Samsung", "Lenovo" };
	MagazinElectronice* altex = new MagazinElectronice("Altex", marci, true);
	
	AFI->AdaugaMagazin(intersport);
	AFI->AdaugaMagazin(zara);
	AFI->AdaugaMagazin(altex);
	
	intersport->AdaugaProdus(new Tricou("tricou adidas", 50.0, 2, "M", "bumbac", "rosu", true));

	altex->AdaugaProdus(new Laptop("Lap ASUS", 5499.99, 1, "ASUS", 24, "Intel i7", 1000));

	altex->AdaugaProdus(new Telefon("Iph 16", 4599.99, 2, "Apple ", 48, 256, 8));

	AFI->AfisareLunga();
	
	AFI->AfiseazaStatisticiPeTip();

	delete AFI;

	return 0;
}

