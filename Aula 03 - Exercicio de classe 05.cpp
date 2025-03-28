#include <iostream>

using namespace std;

int main() {
    int N; // N�mero de alunos
    cout << "Digite o n�mero de alunos: ";
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

        // C�lculo da m�dia
        float media = soma / 4;

        // Exibi��o da m�dia e mensagem de aprova��o/reprova��o
        cout << "M�dia do aluno " << i + 1 << ": " << media << endl;

        if (media > 7) {
            cout << "Aluno aprovado!" << endl;
        } else {
            cout << "Aluno reprovado!" << endl;
        }
    }

    return 0;
}
