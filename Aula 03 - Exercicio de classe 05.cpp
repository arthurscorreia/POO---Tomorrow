#include <iostream>

using namespace std;

int main() {
    int N; // Número de alunos
    cout << "Digite o número de alunos: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "\n--- Aluno " << i + 1 << " ---" << endl;

        float nota, soma = 0;
        int contador = 0;

        // Loop para ler as 4 notas de cada aluno
        while (contador < 4) {
            cout << "Digite a nota " << contador + 1 << ": ";
            cin >> nota;
            soma += nota;
            contador++;
        }

        // Cálculo da média
        float media = soma / 4;

        // Exibição da média e mensagem de aprovação/reprovação
        cout << "Média do aluno " << i + 1 << ": " << media << endl;

        if (media > 7) {
            cout << "Aluno aprovado!" << endl;
        } else {
            cout << "Aluno reprovado!" << endl;
        }
    }

    return 0;
}
