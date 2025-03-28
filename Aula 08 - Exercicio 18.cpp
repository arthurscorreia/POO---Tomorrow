#include <iostream>
using namespace std;

class Motor {
public:
    void funcionar() {
        cout << "Motor est� funcionando." << endl;
    }
};

class Veiculo {
public:
    Motor motor;

    bool ligado;

    Veiculo() {
        ligado = false;
    }

    void ligar() {
        ligado = true;
        cout << "Motor ligado." << endl;
    }

    void desligar() {
        ligado = false;
        cout << "Motor desligado." << endl;
    }
};

class Carro : public Veiculo {
public:
    Veiculo veiculo;
    void acelerar() {
        motor.funcionar();
        cout << "O carro est� acelerando." << endl;
    }
    void desacelerar() {
        cout << "O carro est� desacelerando." << endl;
    }
    void parar() {
        cout << "O carro est� parado." << endl;
        veiculo.desligar();
    }
};

int main() {
    setlocale(LC_ALL, "portuguese");
    Carro meucarro;
    meucarro.ligar(); 
    meucarro.acelerar();
    meucarro.desacelerar();
    meucarro.parar();

    return 0;
}
