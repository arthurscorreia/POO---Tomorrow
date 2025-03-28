#include <iostream>
#include <iomanip> // Para usar fixed e setprecision

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    // Declaração de variáveis
    float peso, altura, imc;

    // Entrada de dados
    cout << "Digite o peso (kg): ";
    cin >> peso;
    cout << "Digite a altura (m): ";
    cin >> altura;

    // Cálculo do IMC
    imc = peso / (altura * altura);

    // Exibição do IMC com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "IMC: " << imc << endl;

    // Classificação e risco de comorbidade
    if (imc < 18.5) {
        cout << "Classificação: Baixo peso" << endl;
        cout << "Risco de comorbidade: Baixo" << endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "Classificação: Peso normal" << endl;
        cout << "Risco de comorbidade: Médio" << endl;
    } else if (imc >= 25.0 && imc <= 29.9) {
        cout << "Classificação: Pré-obeso" << endl;
        cout << "Risco de comorbidade: Aumentado" << endl;
    } else if (imc >= 30.0 && imc <= 34.9) {
        cout << "Classificação: Obeso I" << endl;
        cout << "Risco de comorbidade: Moderado" << endl;
    } else if (imc >= 35.0 && imc <= 39.9) {
        cout << "Classificação: Obeso II" << endl;
        cout << "Risco de comorbidade: Grave" << endl;
    } else {
        cout << "Classificação: Obeso III" << endl;
        cout << "Risco de comorbidade: Muito grave" << endl;
    }

    return 0;
}
