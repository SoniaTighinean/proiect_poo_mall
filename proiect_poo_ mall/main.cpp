#include <iostream>
#include <vector>
#include <memory>
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
    auto AFI = std::make_shared<Mall>("Afi Cotroceni");

    //crearea magazinelor care au tipuri diferite: sport, casual, electronice
    auto m1 = std::make_shared<MagazinSport>("InterSport", "unisex", true, std::vector<std::string>{ "nike","adidas" }, "baschet");
    auto m2 = std::make_shared<MagazinCasual>("ZARA", "femei", true, "primavara 2025");
    auto m3 = std::make_shared<MagazinCasual>("Berska", "unisex", false, "toamna 2025");

    std::vector<std::string> marci = { "Apple", "Samsung", "Lenovo" };
    auto m4 = std::make_shared<MagazinElectronice>("Altex", marci, true);

    //crearea produselor diferite
    auto p1 = std::make_shared<Tricou>("Tricou adidas", 50.0, 2, "M", "bumbac", "rosu", true);
    auto p2 = std::make_shared<Laptop>("Laptop ASUS", 5499.99, 1, "ASUS", 24, "Intel i7", 16);
    auto p3 = std::make_shared<Telefon>("Iphone 16", 4599.99, 2, "Apple", 48, 256, 8);
    auto p4 = std::make_shared<Haina>("Bluza", 100.00, 1, "M", "bumbac");
    auto p5 = std::make_shared<Electronice>("Aspirator", 2499.99, 3, "DELL", 12);

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
    std::vector<std::shared_ptr<Afisare>> tot;

    tot.push_back(AFI);
    tot.push_back(m1);
    tot.push_back(m2);
    tot.push_back(m3);

    tot.push_back(p1);
    tot.push_back(p2);
    tot.push_back(p3);

    std::cout << "Afisarea toturor delaliilor: \n";
    for (const auto& t : tot) {
        t->AfisareScurta();
        //t->AfisareDetaliata();

        auto magazin = std::dynamic_pointer_cast<Magazin>(t);
        if (magazin != nullptr) {
            std::cout << "Afisare Inventar: \n";
            magazin->AfiseazaInventar();
        }
        std::cout << std::endl;
    }

    std::vector<std::shared_ptr<Magazin>> magazine;
    magazine.push_back(m1);
    magazine.push_back(m2);
    magazine.push_back(m3);
    magazine.push_back(m4);

    std::cout << std::endl;
    std::cout << "Pentru fiecare magazin se afiseaza numele, tipul, valoarea totala si inventarul\n";
    for (const auto& m : magazine) {
        std::cout << std::endl;
        std::cout << m->GetNume() << " ,Tip: " << m->GetTipMagazin()
            << "\nValoare totala produse: " << m->CalculValoareTotala() << " lei"
            << "\nNumar total de produse: " << m->GetNrProduse() << "\n";
        m->AfiseazaInventar();
    }

    std::cout << std::endl;
    std::cout << "Valoarea totala a mall-ului: ";
    std::cout << AFI->CalculValoareTotala() << " lei\n";

    std::cout << std::endl;
    std::cout << "Afiseare Statistici pentru fiecare tip: \n";
    AFI->AfiseazaStatisticiPeTip();

    std::vector<std::shared_ptr<Produs>> produse = { p1, p2, p3, p4, p5 };
    for (const auto& p : produse) {
        std::cout << p->GetNume() << " ";
        std::cout << "E disponibil :";
        if (p->EsteDisponibil())
            std::cout << " DA ";
        else
            std::cout << " NU ";
        std::cout << "Pret: " << p->GetPret() << "\n";
    }

    for (const auto& m : magazine) {
        std::cout << m->GetNume();
        auto maxim = m->GetCelMaiScumpProdus();
        if (maxim) {
            std::cout << " Cel mai scump produs: " << maxim->GetNume() << "\n";
        }
        std::cout << "Produse din categoria Haine: " << m->NrProduseCategorie("Haine") << "\n";
    }

    // No need to delete, shared_ptr handles memory

    return 0;
}
