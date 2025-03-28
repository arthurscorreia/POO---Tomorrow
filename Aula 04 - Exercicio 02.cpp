#include <iostream>
#include <vector>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;

public:
    int id; // ID do livro

    // Construtor parametrizado
    Livro(int id, string t, string a) {
        this->id = id;
        this->titulo = t;
        this->autor = a;
    }

    // Método para mostrar as informações do livro
    void mostrarInfo() {
        cout << "ID: " << id << ", Livro: " << titulo << ", Autor: " << autor << endl;
    }

    // Método para verificar se o título do livro corresponde a uma string fornecida
    bool pesquisarPorTitulo(const string& pesquisa) {
        return titulo == pesquisa;
    }

    int getId() {
        return id;
    }

protected:
    vector<Livro> livros;

public:
    void adicionar(int id, string titulo, string autor) {
        Livro novoLivro(id, titulo, autor);
        livros.push_back(novoLivro);
        cout << "Livro adicionado." << endl;
    }

    void listar() {
        if (livros.empty()) {
            cout << "Nenhum livro cadastrado." << endl;
            return;
        }

        cout << "Lista de livros cadastrados:" << endl;
        for (int i = 0; i < livros.size(); ++i) {
            livros[i].mostrarInfo();
        }
    }

    void excluir(int id) {
        for (int i = 0; i < livros.size(); ++i) {
            if (livros[i].getId() == id) {
                livros.erase(livros.begin() + i);  
                cout << "Livro com ID " << id << " excluído." << endl;
                return;
            }
        }
        cout << "Livro com ID " << id << " não encontrado." << endl;
    }

    void pesquisar(const string& titulo) {
        bool encontrado = false;
        for (int i = 0; i < livros.size(); ++i) {
            if (livros[i].pesquisarPorTitulo(titulo)) {
                livros[i].mostrarInfo();
                encontrado = true;
                break; 
            }
        }
        if (!encontrado) {
            cout << "Nenhum livro encontrado." << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "portuguese");
    Livro biblioteca(0, "", "");
    int opcao = 0;
    int id;
    string titulo, autor;

    while (opcao != 5) {
        cout << "Menu da Biblioteca:" << endl;
        cout << "1. Inserir livro" << endl;
        cout << "2. Listar livros" << endl;
        cout << "3. Excluir livro pelo ID" << endl;
        cout << "4. Pesquisar livro pelo título" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();
        switch (opcao) {
            case 1:
                cout << "Informe o ID do livro: ";
                cin >> id;
                cin.ignore();
                cout << "Informe o título do livro: ";
                getline(cin, titulo);
                cout << "Informe o autor do livro: ";
                getline(cin, autor);
                biblioteca.adicionar(id, titulo, autor);
                break;

            case 2:
                biblioteca.listar();
                break;

            case 3:
                cout << "Informe o ID do livro a ser excluído: ";
                cin >> id;
                biblioteca.excluir(id);
                break;

            case 4:
                cout << "Informe o título do livro a ser pesquisado: ";
                getline(cin, titulo);
                biblioteca.pesquisar(titulo);
                break;

            case 5:
                cout << "Saindo" << endl;
                break;

            default:
                cout << "Erro. Tente novamente." << endl;
                break;
        }
    }

    return 0;
}
