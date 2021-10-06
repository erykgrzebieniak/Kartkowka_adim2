#include <iostream>
#include <string>
#include <fstream>

using namespace std;

fstream plik;

class Uczen
{
	public:
		string imie;
		string nazwisko;
		string klasa;
		int rok_ur;
		
		void ustawImie(string);
		void ustawNazwisko(string);
		void ustawKlase(string);
		void ustawRokUr(int);
		
		void testEG()
		{
			cout<<"imie, nazwisko: "<<imie<<" , "<<nazwisko<<" klasa: "<<klasa<<" rok ur: "<<rok_ur<<endl;
		}
};
void Uczen::ustawImie(string pImie)
{
	imie=pImie;
}
void Uczen::ustawNazwisko(string pNazwisko)
{
	nazwisko=pNazwisko;
}
void Uczen::ustawKlase(string pKlasa)
{
	klasa=pKlasa;
}
void Uczen::ustawRokUr(int pRok_ur)
{
	rok_ur=pRok_ur;
}


int main()
{
	int wyn;
	Uczen uczen_a;
	uczen_a.imie="Jan";
	uczen_a.nazwisko="Nowak";
	uczen_a.klasa="3b";
	uczen_a.rok_ur=2003;
	
	Uczen uczen_b;
	uczen_b.imie="Maciek";
	uczen_b.nazwisko="Kowalski";
	uczen_b.klasa="1a";
	uczen_b.rok_ur=2005;
		
	uczen_a.testEG();
	uczen_b.testEG();
	
	if(uczen_a.rok_ur>uczen_b.rok_ur)
	{
			wyn=uczen_a.rok_ur - uczen_b.rok_ur;
			cout<<"uczen b jest starszy od ucznia a o: "<<wyn;
	}
	else
	{
		wyn=uczen_b.rok_ur - uczen_a.rok_ur;
		cout<<"uczen a jest starszy od ucznia b o: "<<wyn;
	}
	
	fstream plik;
	plik.open("dane.txt", ios::app);
	
	plik<<uczen_a.imie<<endl;
	plik<<uczen_a.nazwisko<<endl;
	plik<<uczen_a.rok_ur<<endl;
	
	plik<<uczen_b.imie<<endl;
	plik<<uczen_b.nazwisko<<endl;
	plik<<uczen_b.rok_ur<<endl;
	
	plik.close();
	
	return 0;
}
