#include <iostream>
#include <string>
using namespace std;

// Classe Usu�rio
class Usuario {
public:
    string matricula;
    string endereco;
    string tipoUsuario;

    // M�todo para exibir informa��es do usu�rio
    void exibirInformacoes() {
        cout << "Matricula: " << matricula << endl;
        cout << "Endereco: " << endereco << endl;
        cout << "Tipo de Usuario: " << tipoUsuario << endl;
    }
};

// Fun��o principal
int main() {
    // Criando um objeto da classe Usuario
    Usuario usuario;

    // Inserindo um usu�rio manualmente
    usuario.matricula = "2023001";
    usuario.endereco = "Rua A, 123";
    usuario.tipoUsuario = "Aluno";

    // Exibindo as informa��es do usu�rio
    cout << "Informacoes do Usuario:" << endl;
    usuario.exibirInformacoes();

    return 0;
}
