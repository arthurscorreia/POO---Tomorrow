#include <iostream>
#include <vector>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;

public:
    int id; // ID do livro

    Livro(int id, string t, string a) {
		this->id=id;
		this->titulo=t;
		this->autor=a;
	} // Construtor parametrizado

    void mostrarInfo()  {
        cout << "ID: " << id << ", Livro: " << titulo << ", Autor: " << autor << endl;
    }

    // M�todo para verificar se o t�tulo do livro corresponde a uma string fornecida
    bool pesquisarPorTitulo(const string& pesquisa)  {
        return titulo == pesquisa;
    }
};

int main() {
    Livro livro(1,"C Completo e Total","Herbert Schildt ");
	livro.mostrarInfo();
    return 0;
}
