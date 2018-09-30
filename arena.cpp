#include <iostream>
using namespace std;

class Kostka {
    public:
        int pocet_sten;
        Kostka(int);
        Kostka();
        char hod();
};

class Hrac {
    public:
        string jmeno;
        Hrac(string);
};

class Arena {
    public:
        Hrac prvni;
        Hrac druhy;
        Arena(string, string);
};

Kostka::Kostka(int steny) {
//    cout << "Parametr" << endl;
    pocet_sten = steny;
}

Kostka::Kostka() : Kostka(6){
//    cout << "Bezparametr" << endl;
}

Hrac::Hrac(string _jmeno) {
    jmeno = _jmeno;
}

Arena::Arena(string jmeno1, string jmeno2) : prvni(jmeno1), druhy(jmeno2) {
    
}

int main() {
    Kostka k1;
    Kostka k2(12);
    return 0;
}
