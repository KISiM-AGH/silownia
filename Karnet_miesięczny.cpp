#include <exception>
#include <iostream>
using namespace std;

#include "Karnet_miesi�czny.h"
#include "Karnet.h"
#include"Klient.h"


Karnet_miesi�czny::Karnet_miesi�czny(int dzien, int miesiac, int cena)
{
	_dzien = dzien;
	_miesiac = miesiac;
	_cena = cena;
}

void Karnet_miesi�czny::przedluz(Karnet* k, Klient* kl)
{
	//k->_miesiac + 01 = k;
	cout << "Karnet zosta� przed�uzony do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

void Karnet_miesi�czny::zawies(Karnet* k1, Karnet_miesi�czny karnet_miesi�czny)
{

	cout << "Karnet zosta� zawieszony do dnia:" << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

