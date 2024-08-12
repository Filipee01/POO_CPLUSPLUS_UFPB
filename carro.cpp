#include <iostream>
#include <string>

class Conta {
    std::string numero_da_conta;
    double saldo;
    std::string tipo;
public:
    Conta(std::string num, double sal, std::string tip): numero_da_conta(num), saldo(sal), tipo(tip){}

    void depositar(double valor) {
        saldo += valor;
        std::cout << "Deposito de " << valor << " realizado. Novo saldo" << saldo << "\n";
    }

    void sacar(double valor) {
        if(saldo >= valor){
            saldo -= valor;
            std::cout << "Saque de " << valor << " realizado. Novo Saldo: " << saldo << "\n";
        }else {
                std::cout << "Saldo insuficiente.\n";
        }
    } 

    double getSaldo() const {
        return saldo;
    }

    std::string getNumeroConta() {
        return numero_da_conta;
    }

};

class Transacao{
    Conta& conta_origem;
    Conta& conta_destino;
    double valor;

public:
    Transacao(Conta& origem, Conta& destino, double val):conta_origem(origem), conta_destino(destino), valor(val){}

    void executar() {
        if (conta_origem.getSaldo() >= valor) {
            conta_origem.sacar(valor);
            conta_destino.depositar(valor);
            std::cout << "Transacao de " << valor << " realizada.\n";
        } else {
            std::cout << "Saldo insuficiente na conta de origem.\n";
        }
    }

};

int main(void) {
    Conta conta1 ("12345", 1000.0, "corrente");
    Conta conta2("67890", 500.0, "poupanca");

    Transacao transacao(conta1, conta2, 200.0);
    transacao.executar();

// finish

    return 0;
}