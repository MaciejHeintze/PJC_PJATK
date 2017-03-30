#include <iostream>;
using namespace std;
//Wykorzystuj¹c mo¿liwoœæ definiowania typu wylicznikowego napisz program pozwalaj¹cy u¿ytkownikowi wybraæ kolor nadwozia dla dwóch samochodów: Forda T i Lexusa.

 enum Kolor
    {
        CZERWONY = 1,
        NIEBIESKI = 2,
        SREBRNY = 3,
        BIALY = 4

    };
    enum Samochod
    {
        Lexus = 1,
        Ford = 2
    };


int main()
{

int iy;
    cout << "Prosze wybrac samochod" << endl;
    cout << "Wpisujac:" << endl;
    cout<<" 1 ---------- dla Lexusa"<<endl;
    cout<<" 2 ---------- dla Forda"<< endl;
    cout<<"oraz zatwierdzajac enter " << endl;
cout<<"Twoj numer: " << endl;
    cout << endl;
    cin >>iy;
    switch(iy)
    {
    case Lexus:
        cout <<"Wybrano Lexusa" << endl;
        break;
    case Ford:
        cout << "Wybrano Forda" << endl;
        break;
    default:
        cout<<"Nie ma takiego samochodu" << endl;

    }

cout << "-------------------------------------------------" << endl;
cout << "Prosze wybrac kolor samochodu oraz zatwierdzic enter: " << endl;
cout<< "1 - kolor CZERWONY" << endl;
cout << "2 - kolor NIEBIESKI" << endl;
cout << "3 - kolor SREBNRY" << endl;
cout << "4 - kolor BIALY" << endl;
cout<<"Twoj numer: " << endl;
int i;
cin >> i;

switch(i)
{
case CZERWONY:
   cout << "Twoj samochod bedzie koloru czerwonego" << endl;
    break;
case NIEBIESKI:
    cout << "Twoj samochod bedzie koloru niebieskiego" << endl;
    break;
case SREBRNY:
    cout << "Twoj samochod bedzie koloru srebrnego" << endl;
    break;
case BIALY:
       cout << "Twoj samochod bedzie koloru bialego" << endl;
       break;

default:
    cout << "Zly numer nie ma takiego koloru";
    break;
}

return 0;
}
