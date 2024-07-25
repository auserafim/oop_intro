#include <iostream>

using namespace std;

class Carro{
    private:
        string marca;
        string modelo;
        int ano;
        float quilometragem;
    public:
        Carro(string marc, string model, int an, float km) : marca(marc), modelo(model), ano(an), quilometragem(km){}

        void SetMarca(string marc){
            marca = marc;
        }

        void SetModelo(string model){
            modelo = model;
        }

        void SetAno(int year){
            ano = year;
        }

        void SetQuilometragem (float km){
            quilometragem = km;
        }

        string GetMarca(){return marca;}
        string GetModelo(){return modelo;}
        int GetAno(){return ano;}
        float GetQuilometragem(){return quilometragem;}

        void MostrarDados(){
            cout << " Marca: " << marca << ", Modelo: " << modelo << ", Ano: "<< ano << ", Quilometragem: " << quilometragem << "\n ";

        }

        void dirigir (float km){
            quilometragem = quilometragem + km;
        }

};

int main () {
Carro car1 (" Toyota ", " Corolla ", 2020 , 15000) ;
car1 . MostrarDados () ; // Marca : Toyota , Modelo : Corolla , Ano : 2020 ,Quilometragem : 15000
car1 . dirigir (500) ;
car1 . MostrarDados () ; // Marca : Toyota , Modelo : Corolla , Ano : 2020 ,Quilometragem : 15500
return 0;
}