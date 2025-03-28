#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Digite um numero de 1 a 3:" << endl;
    cin >> x;

    switch (x) {
        case 1:
            cout << "C++ e melhor do que Java!" << endl;
            break;
        case 2:
            cout << "Cuidado com a SkyNet!!!" << endl;
            break;
        case 3:
            cout << "Nao esqueca de usar o ; em C++" << endl;
            break;
        default:
            cout << "Desistir nunca, render-se jamais" << endl;
    }

    return 0;
}
