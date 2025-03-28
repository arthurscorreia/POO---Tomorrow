#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;
    string modelo;
    int ano;
    int velocidade;

    Veiculo(string marca, string modelo, int ano, int velocidade = 0)
        : marca(marca), modelo(modelo), ano(ano), velocidade(velocidade) {}

    void acelerar() {
        velocidade += 10;
        cout << modelo << " está acelerando. Velocidade atual: "  << velocidade << " km/h." << endl;
    }

    void frear() {
        if (velocidade > 0) {
            velocidade -= 10;
            cout << modelo << " está freando. Velocidade atual: "  << velocidade << " km/h." << endl;
        }
    }

    void exibirDados() {
        cout << "Marca: " << marca << ", " << "Modelo: " << modelo << ", ";
        cout << "Ano: " << ano << ", " << "Velocidade: " << velocidade << " km/h." << endl;
    }
};


class Carro : public Veiculo {
public:
    int numeroPortas;
    Carro(string marca, string modelo, int ano, int numeroPortas, int velocidade = 0)
        : Veiculo(marca, modelo, ano, velocidade), numeroPortas(numeroPortas) {}

    void ligarArCondicionado() {
        cout << modelo << " ligou o ar-condicionado." << endl;
    }

    void exibirDados() {
        Veiculo::exibirDados(); 
        cout << "Número de portas: " << numeroPortas << endl;
    }
};

class Moto : public Veiculo {
public:
    int cilindradas;
    Moto(string marca, string modelo, int ano, int cilindradas, int velocidade = 0)
        : Veiculo(marca, modelo, ano, velocidade), cilindradas(cilindradas) {}

    void empinar() {
        cout << modelo << " está empinando!" << endl;
    }

    void exibirDados() {
        Veiculo::exibirDados();
        cout << "Cilindradas: " << cilindradas << endl;
    }
};


int main() {
    setlocale(LC_ALL, "portuguese");
    Carro carro("Ford", "Mustang", 2020, 4);
    carro.exibirDados();
    carro.acelerar();
    carro.ligarArCondicionado();
    carro.frear();
    
    Moto moto("Honda", "CB600", 2018, 600);
    cout << endl;
    moto.exibirDados();
    moto.acelerar();
    moto.empinar();
    moto.frear();

    return 0;
}
