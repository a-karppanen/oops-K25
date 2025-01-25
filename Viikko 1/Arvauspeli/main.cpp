#include <iostream>
#include <stdlib.h>     //rand, srand
#include <time.h>       //time
using namespace std;

int game(int arvaus, int x, int a);

int main() {
    int maxnum;

    cout << "Anna korkein arvottava luku" << endl;
    cin >> maxnum;

    srand(time(0));
    int x = rand()%maxnum;
    int arvaus;
    int a = 0;
    int yritys = 0;

    while (a != 1) {
        //cout << "a whilen alussa " << a << endl;
        cout << "Arvaa luku 0-" << maxnum << endl;
        cin >> arvaus;
        a = game(arvaus, x, a);
        yritys++;
        cout << "Arvauksia yhteensa: " << yritys << endl;
        //cout << "a game funktion jalkee " << a << endl;
    }

    return 0;
}

int game(int arvaus, int x, int a) {
    if (arvaus == x) {
        cout << "Oikein!" << endl;
        a = 1;
    }
    else if (arvaus < x) {
        cout << "Luku on suurempi" << endl;
    }
    else if (arvaus > x) {
        cout << "Luku on pienempi" << endl;
    }
    //cout << "a gamessa " << a << endl;
    return a;
}
