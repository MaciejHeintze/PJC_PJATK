#include <iostream>
#include <conio.h> // wczytywanie wartosci z klawiatury
#include <cstdlib> // czyszczenie konsoli
#include <time.h> //srand
#include <windows.h>
using namespace std;

int szerokosc;
int wysokosc;
int pace;
int up, down;
int l;
int r;
char tab[40][40];
int wspX, wspY;
int wspX1, wspY1;
int dlugosc=4;
int staraWspX[10000];
int staraWspY[10000];
int ilosc = 0;
int klawisz;
char kierunek = 'p'; // w prawo
char waz = 219, jedzenie = 177, prawyDolny=188, prawyGorny=187, lewyDolny=200;
char lewyGorny=201, liniaPozioma = 205, liniaPionowa = 186;


// czyszczenie kursora - problem z migającym ekranem funkcja idzdoxy

void idzdoxy(int x, int y){
HANDLE hCon;
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;

hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hCon, dwPos);

}




int blad(){
    cout << "Liczba poza zakresem!!!" << endl;
    cout << "Podaj jeszcze raz wartosc z zakresu:" << endl;
    cin >> szerokosc;
    if(szerokosc<5||szerokosc>40){
         cout<< "Szerokosc ustawiona automatycznie"<<endl;
        szerokosc = 20;
    }
}
int blad1(){
    cout << "Liczba poza zakresem!!!" << endl;
    cout << "Podaj jeszcze raz wartosc z zakresu:" << endl;
    cin >> wysokosc;
    if(wysokosc<5||wysokosc>40){
        cout<< "Wysokosc ustawiona automatycznie" << endl;
        wysokosc = 20;
    }
}

int main()
{
    cout << "Podaj szerokosc planszy w postaci liczby calkowitej w zakresie od 5 do 20:" << endl;
    cin >> szerokosc;
    if(szerokosc<5 || szerokosc>40){
        blad();
    }
     cout << "Podaj wysokosc planszy w postaci liczby calkowitej w zakresie od 5 do 20:" << endl;
     cin>>wysokosc;
     if(wysokosc<5||wysokosc>40){
        blad1();
     }
    cout << "Podaj szybkosc w postaci liczby calkowitej w zakresie od 1 do 10:" << endl;
    cin >> pace;
    if(pace<1){
        pace = 5;
    }else if(pace>10){
    pace = 5;
    }

    cout << "Teraz wybierz przyciski ktorymi lubisz grac :)"<<endl;

    cout << "PRZYCISK GORA: "<<endl;
    up = getch();
    if(up==224){
        up=up+getch();
    }else if(up==0){
    up -= getch();
    }

    cout << "PRZYCISK DOL: "<<endl;
    down = getch();
    if(down==224){
        down=down+getch();
    }else if(down==0){
       down -= getch();
    }

    cout << "PRZYCISK LEWY: "<<endl;
    l=getch();
    if(l==224){
        l+=getch();
    }else if(l==0){
    l-= getch();
    }

    cout << "PRZYCISK PRAWY: "<<endl;
    r = getch();
    if(r==224){
        r=r+getch();
    }else if(r==0){
    r-= getch();
    }

    for(int i=0; i<wysokosc;i++){
        for(int j=0; j<szerokosc;j++){
            tab[j][i] = 'e'; // e - empty
        }
    }


    srand(time(NULL)); // generator losowania
//losowanie pola snake'a
    wspX=rand()%szerokosc;
    wspY=rand()%wysokosc;

    tab[wspX][wspY]= 's'; // s - snake
// losowanie pola jedzenia snake'a
   do{
    wspX1=rand()%szerokosc;
    wspY1=rand()%wysokosc;
   }while(tab[wspX1][wspY1] != 'e');

   tab[wspX1][wspY1] = 'a'; // a - apple

system("cls");

idzdoxy(0,0);


    cout<< lewyGorny;


    //gorna granicza

    for(int i = 0; i<szerokosc; i++){
        cout<<liniaPozioma<<liniaPozioma;
    }
    cout << prawyGorny;


    for(int i=0; i<wysokosc;i++){
        cout << endl << liniaPionowa; // lewa granica
        for(int j=0; j<szerokosc;j++){
            if(tab[j][i] == 'e'){
                cout << "  ";
            }else if(tab[j][i] == 's'){
                cout << waz << waz;
            }else if(tab[j][i] == 'a'){
                cout << jedzenie << jedzenie;
            }
        }

        cout << liniaPionowa;
    }
    cout << endl;

    cout << lewyDolny;


    for(int i = 0; i<szerokosc; i++){
        cout<<liniaPozioma<<liniaPozioma;
    }
    cout << prawyDolny;


// rozpoczynamy gre
   for(;;) // nieskoñczona pêtla
   {
       ilosc++;

       staraWspX[ilosc] = wspX;
       staraWspY[ilosc] = wspY;




    // montujemy plansze -------------

Sleep(1000/pace);
    if(kbhit()){
        klawisz = getch();
        if(klawisz==224){
            klawisz+=getch();
        }else if(klawisz==0){
            klawisz -= getch();
        }
        if(klawisz==up && (kierunek=='l' || kierunek == 'p')){
                kierunek = 'g';

        }else if(klawisz == down &&(kierunek == 'l' || kierunek == 'p')){
            kierunek = 'd';
        }else if(klawisz == r && (kierunek == 'g' || kierunek == 'd')){
            kierunek = 'p';
        }else if(klawisz == l && (kierunek == 'g' || kierunek == 'd')){
            kierunek = 'l';
        }
    }





   if(kierunek == 'd') wspY++;
    if(kierunek == 'g') wspY--;
    if(kierunek == 'l') wspX--;
    if(kierunek == 'p') wspX++;


    // przechodzenie snake'a przez sciany
    if(wspX ==szerokosc){
        wspX = 0;
    }else if(wspX == -1){
        wspX = szerokosc-1;
    }
    if(wspY == wysokosc){
        wspY = 0;
    }else if(wspY == -1){
        wspY = wysokosc-1;
    }

    if(tab[wspX][wspY] == 's'){
        idzdoxy(0, wysokosc+5);
       cout << endl<< "\aKoniec gry! Dlugosc snake'a wynosi: " << dlugosc+1;
        break;
    }

    if(tab[wspX][wspY]=='a'){
        dlugosc++;
        do{
            wspX1=rand()%szerokosc;
            wspY1=rand()%wysokosc;
            }while(tab[wspX1][wspY1] != 'e');

        tab[wspX1][wspY1] = 'a';
        idzdoxy(wspX1*2+1,wspY1+1);
        cout << jedzenie << jedzenie;
    }else{
    // usuwanie ogona snake'a
        tab[staraWspX[ilosc-dlugosc]][staraWspY[ilosc-dlugosc]] = 'e';
        idzdoxy(staraWspX[ilosc-dlugosc]*2+1,staraWspY[ilosc-dlugosc]+1);
        cout << "  ";
    }


    tab[wspX][wspY] = 's';
    idzdoxy(wspX*2+1,wspY+1);
    cout << waz << waz;
   }
   getch();
    return 0;

}

