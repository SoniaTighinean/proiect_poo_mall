#pragma once
#include <string>

using namespace std;

class Descriere {
public:
	virtual string DescriereLunga() const = 0;
	virtual string DescriereScurta() const = 0;
	virtual ~Descriere() {}

};