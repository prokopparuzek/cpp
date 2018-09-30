#include <iostream>
using namespace std;

class ahoj {
    public:
        void pozdrav();
};

void ahoj::pozdrav() {
    cout << "Ahoj světe!" << endl;
}

int main() {
    ahoj pozdrav;
    pozdrav.pozdrav();
    cin.get();
    return 0;
}
