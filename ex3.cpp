#include <iostream>
using namespace std;

class ContaBancaria {

    private:
        int numeroConta;
        float saldo;
        string titular;
    public:   
        //construtores 
        ContaBancaria(int nc , float s, string tt) : numeroConta(nc), saldo(s), titular(tt){};

        void setNc(int nc) {

            numeroConta = nc;

        }

        void setSaldo(float s) {

            saldo = s;

        }

        void setTt(string tt) {

            titular = tt;

        }

        
        

    int getNc() { return numeroConta;}
    float getSaldo() { return saldo;}
    string getTitular(){ return titular;}



    void mostrarDados() {

        cout << "Número da conta  : " << numeroConta << endl;
        cout << "Saldo : " << saldo << endl;
        cout << "Títular: " << titular << endl;
    }



    void depositar(float dep) {
        saldo += dep;
    }

    void sacar(float sac) {
        saldo -= sac;
    }

};



int main () {
    ContaBancaria c1( 2 , 1000.0 , " Joao Silva " ) ;
    c1.mostrarDados () ; 
    c1.depositar (500) ;
    c1.sacar (300) ;
    c1.mostrarDados () ; 
return 0;
}