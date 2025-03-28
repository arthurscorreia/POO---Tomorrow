#include <iostream>
#include <iomanip> // Para usar fixed e setprecision

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    // Declara��o de vari�veis
    float peso, altura, imc;

    // Entrada de dados
    cout << "Digite o peso (kg): ";
    cin >> peso;
    cout << "Digite a altura (m): ";
    cin >> altura;

    // C�lculo do IMC
    imc = peso / (altura * altura);

    // Exibi��o do IMC com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "IMC: " << imc << endl;

    // Classifica��o e risco de comorbidade
    if (imc < 18.5) {
        cout << "Classifica��o: Baixo peso" << endl;
        cout << "Risco de comorbidade: Baixo" << endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "Classifica��o: Peso normal" << endl;
        cout << "Risco de comorbidade: M�dio" << endl;
    } else if (imc >= 25.0 && imc <= 29.9) {
        cout << "Classifica��o: Pr�-obeso" << endl;
        cout << "Risco de comorbidade: Aumentado" << endl;
    } else if (imc >= 30.0 && imc <= 34.9) {
        cout << "Classifica��o: Obeso I" << endl;
        cout << "Risco de comorbidade: Moderado" << endl;
    } else if (imc >= 35.0 && imc <= 39.9) {
        cout << "Classifica��o: Obeso II" << endl;
        cout << "Risco de comorbidade: Grave" << endl;
    } else {
        cout << "Classifica��o: Obeso III" << endl;
        cout << "Risco de comorbidade: Muito grave" << endl;
    }

    return 0;
}
