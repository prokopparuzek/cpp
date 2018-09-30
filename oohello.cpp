#include <iostream>
using namespace std;

class ahoj {
    public:
        string text;
        string pozdrav(string);
};

string ahoj::pozdrav(string jmeno) {
    return text + " " + jmeno + "!\n";
}

int main() {
    ahoj pozdrav;
    pozdrav.text = "Ahoj";
    cout << pozdrav.pozdrav("Prokope");
    cin.get();
    return 0;
}
