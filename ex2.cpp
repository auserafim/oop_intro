#include <iostream>
using namespace std;



class Livro {
    private:
        string titulo;
        string autor;
        int anoPublicacao;
        int numPaginas;

    public:

        //construtores
        Livro(string name , string aut, int ano, int nump) : titulo(name), autor(aut), anoPublicacao(ano), numPaginas(nump) {};


        //metodos seletores
        void setNome(string tit) {
            titulo = tit;
        }

        void setAutor(string aut){
            autor = aut;
        }

        void setAnoPublicacao(int data) {
            anoPublicacao = data;
        }

        void setPaginas(int pags) {
            numPaginas = pags;
        }


    //metodos modificadores



    string getTitulo() { return titulo;}
    string getAutor() { return autor;}
    int getAnoPublicacao(){ return anoPublicacao;}
    int getNumPaginas() { return numPaginas;}



    void mostrarDados() {

        cout << "Titulo : " << titulo << endl;
        cout << "Autor : " << autor << endl;
        cout << "Ano de Publicacao : " << anoPublicacao << endl;
        cout << "Número de Páginas : " << numPaginas << endl;
    }




};



int main () {
    Livro l2("How was batman created" , " Peter Parker " , 2024 , 120);

    l2.mostrarDados();

    cout << l2.getAutor() << endl;
    // l1.setAutor("Aurelio");
    // l1.setPaginas(1000);
    //l1.mostrarDados () ; 
return 0;
}