#pragma once
#include <string>

using namespace std;

class Afisare {
public:
	virtual void AfisareLunga() const = 0;
	virtual void AfisareScurta() const = 0;
	virtual ~Afisare() {}

};