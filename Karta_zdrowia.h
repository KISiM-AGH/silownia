#include <exception>
#include <string>
using namespace std;

#ifndef __Karta_zdrowia_h__
#define __Karta_zdrowia_h__

// #include "Klient.h"
// #include "Trener.h"

class Klient;
class Trener;
class Karta_zdrowia;

class Karta_zdrowia
{
public: 
	int _masa;;
	int _wzrost;
	string _grupa_krwi;
	Klient* _unnamed_Klient_;
	Trener* _unnamed_Trener_;

	 void dodaj_informacje();
	 void zmien_dane();
	 Karta_zdrowia(int m, int w, string k, Klient* klient, Trener* trener);
	 
};

#endif
