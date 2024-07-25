#include <iostream>
using namespace std;


class Produto {
    private:
        string nome;
        float preco;
        int qtd;

    public:
        //construtor  


        Produto(string name , float price, int quantity) : nome(name), preco(price), qtd(quantity) {};


        // Produto(string name, float price, int quantity){
        //     nome = name;
        //     preco = price;
        //     quantity = qtd;
        // }
        //metodos seletores
        void setNome(string name) { // set eh para definir o valor do atributo
            nome = name;
        }

        void setPreco(float pr) {
            preco = pr;
        }

        void setQtd(int quan) {
            qtd = quan;
        }

        //metodos modificadores

        string getNome() {  // get eh para retornar o valor que voce quer para o atributo
             return nome;
        }
        float getPreco() {
             return preco;
        }           
        int getQtd() {
             return qtd;
        }


        void adicionarEstoque(int valor) {
            qtd += valor;

        }

        void removerEstoque(int valor) {
            qtd -= valor;
        }

        void mostrarDados() {
            cout << "O produto " << nome << " tem: " << qtd << " Unidades" << " e custa: R$" << preco << endl;
        }
               
};

int main() {


    Produto p1("Agua", 32.5, 20);

    p1.adicionarEstoque(5);
    
    p1.mostrarDados();

    p1.removerEstoque(10);

    p1.mostrarDados();

    //cout << p1.getNome() << p1.getPreco() << p1.emEstoque() << endl;




}