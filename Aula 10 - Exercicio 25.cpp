#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

class Aluno {
public:
    string nome;
    int matricula;
    float notaMatematica;
    float notaPortugues;
    float notaCiencias;
    Aluno() : nome(""), matricula(0), notaMatematica(0.0), notaPortugues(0.0), notaCiencias(0.0) {}

    Aluno(string nome, int matricula, float notaMatematica, float notaPortugues, float notaCiencias) {
        this->nome = nome;
        this->matricula = matricula;
        this->notaMatematica = notaMatematica;
        this->notaPortugues = notaPortugues;
        this->notaCiencias = notaCiencias;
    }

    float calcularMedia() const {
        return (notaMatematica + notaPortugues + notaCiencias) / 3.0;
    }

    void exibirDados() const {
        cout << "Nome: " << nome << endl;
        cout << "Matr�cula: " << matricula << endl;
        cout << "Notas: " << "Matem�tica: " << notaMatematica << ", Portugu�s: " << notaPortugues << ", Ci�ncias: " << notaCiencias << endl;
        cout << "M�dia: " << fixed << setprecision(2) << calcularMedia() << endl;
    }

    int getMatricula() const {
        return matricula;
    }
};

int main() {
    setlocale(LC_ALL, "portuguese");
    map<int, Aluno> alunos;
    int quantos_alunos;
    int num = 1;
   
    cout << "Quantos alunos deseja cadastrar? ";
    cin >> quantos_alunos;
        
    while(quantos_alunos > 0) {
            string nome;
            int matricula;
            float notaMatematica, notaPortugues, notaCiencias;
            cout << "Aluno " << num << ":" << endl;
            cout << "Nome: ";
            cin.ignore(); 
            getline(cin, nome); 
            cout << "Matr�cula: ";
            cin >> matricula;

            cout << "Nota de Matem�tica: ";
            cin >> notaMatematica;

            cout << "Nota de Portugu�s: ";
            cin >> notaPortugues;

            cout << "Nota de Ci�ncias: ";
            cin >> notaCiencias;
            cout << endl;

            Aluno aluno(nome, matricula, notaMatematica, notaPortugues, notaCiencias);
            alunos[matricula] = aluno;
            quantos_alunos -= 1;
            num += 1;
            }
        cout << "Dados dos Alunos:" << endl;
        for (const auto& entry : alunos) {
        entry.second.exibirDados();
        cout << endl;
    }
        return 0;
}
