#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Napiš něco! " << endl;
    string vstup;
    cin >> vstup;
    cout << vstup + " " + vstup + "!" << endl;
    cin.get();
    cin.get();
    return 0;
}
