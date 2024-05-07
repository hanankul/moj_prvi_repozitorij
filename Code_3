#include<iostream>
using namespace std;

double prosjek(int niz[], int velicina) {
    double suma = 0.0;
    for (int i = 0; i < velicina; ++i) {
        suma += niz[i];
    }
    return suma / velicina;
}

int main() {
    int niz[] = {5, 7, 9, 11, 13};
    int velicina = sizeof(niz) / sizeof(niz[0]);
    cout << "Prosjek elemenata u nizu je: " << prosjek(niz, velicina) << endl;
    return 0;
}