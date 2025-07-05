
#include <iostream>
#include <vector>
#include "magazin.h"
#include "magazin_imbracaminte.h"
#include "magazin_sport.h"
#include "magazin_casual.h"
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

	//crearea magazinelor care au tipuri diferite: sport, casual, electronice

	MagazinSport* m1 = new MagazinSport("InterSport", "unisex", true, { "nike","adidas" }, "baschet");
	MagazinCasual* m2 = new  MagazinCasual("ZARA", "femei", true, "primavara 2025");
	MagazinCasual* m3 = new MagazinCasual("Berska", "unisex", false, "toamna 2025");

	vector<string> marci = { "Apple", "Samsung", "Lenovo" };
	MagazinElectronice* m4 = new MagazinElectronice("Altex", marci, true);


	//crearea produselor diferite
	Haina* p1 = new Tricou("Tricou adidas", 50.0, 2, "M", "bumbac", "rosu", true);
	Laptop* p2 = new Laptop("Laptop ASUS", 5499.99, 1, "ASUS", 24, "Intel i7", 1000);
	Telefon* p3 = new Telefon("Iphone 16", 4599.99, 2, "Apple ", 48, 256, 8);
	Haina* p4 = new Haina("Bluza", 100.00, 1, "M", "bumbac");
	Electronice* p5 = new Electronice("Aspirator", 2499.99, 3, "DELL", 12);

	//asocierea magazinelor cu mall-ul
	AFI->AdaugaMagazin(m1);
	AFI->AdaugaMagazin(m2);
	AFI->AdaugaMagazin(m3);
	AFI->AdaugaMagazin(m4);

	//adaugarea produselor intr-un magazin specific
	m1->AdaugaProdus(p1);
	m4->AdaugaProdus(p2);
	m4->AdaugaProdus(p3);
	m2->AdaugaProdus(p4);
	m4->AdaugaProdus(p5);


	//interfata afisare
	vector<Afisare*> tot;

	tot.push_back(AFI);
	tot.push_back(m1);
	tot.push_back(m2);
	tot.push_back(m3);

	tot.push_back(p1);
	tot.push_back(p2);
	tot.push_back(p3);

	cout << "Afisarea toturor delaliilor: \n";
	for (const auto& t : tot) {
		t->AfisareScurta();
		//t->AfisareDetaliata();

		auto magazin = dynamic_cast<Magazin*>(t);
		if (magazin != nullptr) {
			cout << "Afisare Inventar: \n";
			magazin->AfiseazaInventar();
		}
		cout<<endl;
		
	}

	vector<Magazin*> magazine;
	magazine.push_back(m1);
	magazine.push_back(m2);
	magazine.push_back(m3);
	magazine.push_back(m4);

	cout<<endl;
	cout << "Pentru fiecare magazin se afiseaza numele, tipul, valoarea totala si inventarul\n";
	for (const auto& m : magazine) {
		cout<<endl;
		cout << m->GetNume() << " ,Tip: " << m->GetTipMagazin()  
			<< "\nValoare totala produse: " << m->CalculValoareTotala() << " lei"
			<<"\nNumar total de produse: " << m->GetNrProduse() << "\n";
		m->AfiseazaInventar();
		
	}

	cout<<endl;
	cout << "Valoarea totala a mall-ului: ";
	cout << AFI->CalculValoareTotala() << " lei\n";

	cout<<endl;
	cout << "Afiseare Statistici pentru fiecare tip: \n";
	AFI->AfiseazaStatisticiPeTip();

	vector<Produs*> produse = { p1, p2, p3, p4, p5 };
	for (const auto& p : produse) {
		cout << p->GetNume() << " ";
		cout << "E disponibil :";
		if (p->EsteDisponibil())
			cout << " DA ";
		else
			cout << " NU ";
        cout << "Pret: " << p->GetPret() << "\n";
	}

	for (const auto& m : magazine) {
		cout << m->GetNume();
		auto maxim = m->GetCelMaiScumpProdus();
		cout << " Cel mai scump produs: " << maxim->GetNume()<<"\n";
		cout << "Produse din categoria Haine: " << m->NrProduseCategorie("Haine") << "\n";
	}

	delete AFI;

	
	return 0;
}

