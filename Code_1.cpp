#include<iostream>
using namespace std;

int najmanjiBroj(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    cout << "Unesite dva broja: ";
    cin >> x >> y;
    cout << "Manji broj je: " << najmanjiBroj(x, y) << endl;
    return 0;
}