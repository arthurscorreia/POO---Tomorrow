#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    int idade1, idade2;
    float media;
    cin >> idade1 >> idade2;
    media = (idade1 + idade2) / 2.0; 
    cout << fixed << setprecision(2); 
    if (media >= 18) {
        cout << "A idade m�dia das pessoas � " << media << " e eles est�o aptos ao trabalho" << endl;
    } 
    else {
        cout << "A idade m�dia de " << media << " n�o permite executar o trabalho" << endl;
    }
}
