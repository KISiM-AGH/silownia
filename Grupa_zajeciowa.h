#include <exception>
#include <string>

using namespace std;

#ifndef __Grupa_zajeciowa_h__
#define __Grupa_zajeciowa_h__

// #include "Klient.h"
// #include "Trener.h"

class Klient;
class Trener;
class Grupa_zajeciowa;

class Grupa_zajeciowa
{
private: 
	int _godzina;
	string _rodzaj_zajec;//np Yoga, k-box
	int  _liczba_osob;
	int  _sala;
	int _dzien_tygodnia;//1-7
	
public: 
	Klient* _unnamed_Klient_;
	Trener* _unnamed_Trener_;
	Grupa_zajeciowa(int g, int l, int s, int d, string rodzaj) :
		_godzina(g), _liczba_osob(l), _sala(s), _dzien_tygodnia(d), _rodzaj_zajec(rodzaj) {}
	void dodaj_uczestnika();

	void usun_uczestnika();

	void podaj_godziny_zajec();
};

#endif
