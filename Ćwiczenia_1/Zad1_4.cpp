#include <iostream>
using namespace std;



void fun1(int x){
    cout << x << endl;
    x++;
    cout << x << endl;
}

void fun2(int* x){
    cout << *x << endl;
    (*x)++;
    cout << *x << endl;
}

void fun3(int &x){
    cout << x << endl;
    x++;
    cout << x << endl;
}

int main()
{

int wrt = 1;
cout <<"Poczatkowe wrt: "<< wrt << endl;

fun1(wrt);
fun2(&wrt);
fun3(wrt);

cout << "Nowa wartosc wrt: " << wrt << endl;





    return 0;
}
