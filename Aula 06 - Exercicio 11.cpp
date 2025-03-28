#include <iostream>
#include <string>
#include <locale.h>

using namespace std; // Uso do namespace std para evitar repetição de std::

// Classe Base: Pessoa
class Pessoa {
protected:
    string nome;
    string endereco;
    string telefone;

public:
    Pessoa(string nome, string endereco, string telefone) {
        this->nome = nome;
        this->endereco = endereco;
        this->telefone = telefone;
    }

    void exibirDados() {
        cout << "Nome: " << nome << ", Endereço: " << endereco << ", Telefone: " << telefone << endl;
    }
};

// Classe Derivada: PessoaFisica
class PessoaFisica : public Pessoa {
private:
    string cpf;
    string dataNasc;

public:
    PessoaFisica(string nome, string endereco, string telefone, string cpf, string dataNasc)
        : Pessoa(nome, endereco, telefone) {
        this->cpf = cpf;
        this->dataNasc = dataNasc;
    }

    void validarCPF() {
        cout << "Validando CPF: " << cpf << endl;
    }

    void exibirDados() {
        Pessoa::exibirDados();
        cout << "CPF: " << cpf << ", Data de Nascimento: " << dataNasc << endl;
    }
};

// Classe Derivada: PessoaJuridica
class PessoaJuridica : public Pessoa {
private:
    string cnpj;
    string razaoSocial;

public:
    PessoaJuridica(string nome, string endereco, string telefone, string cnpj, string razaoSocial)
        : Pessoa(nome, endereco, telefone) {
        this->cnpj = cnpj;
        this->razaoSocial = razaoSocial;
    }

    void validarCNPJ() {
        cout << "Validando CNPJ: " << cnpj << endl;
    }

    void exibirDados() {
        Pessoa::exibirDados();
        cout << "CNPJ: " << cnpj << ", Razão Social: " << razaoSocial << endl;
    }
};

// Função principal (main)
int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    // Exemplo de uso da classe PessoaFisica
    PessoaFisica pessoaFisica("João Silva", "Rua A, 123", "1234-5678", "123.456.789-00", "10/05/1980");
    pessoaFisica.exibirDados();
    pessoaFisica.validarCPF();

    cout << endl;

    // Exemplo de uso da classe PessoaJuridica
    PessoaJuridica pessoaJuridica("Empresa XYZ", "Av. B, 456", "9876-5432", "12.345.678/0001-99", "Empresa XYZ Ltda");
    pessoaJuridica.exibirDados();
    pessoaJuridica.validarCNPJ();

    return 0;
}
