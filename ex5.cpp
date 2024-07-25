#include <iostream>
#include <string> // Include <string> for std::string
using namespace std;

class Aluno {
private:
    string nome;
    int matricula;
    float nota;
    string curso;

public:
    Aluno(string nm, int mat, float nt, string cc) : nome(nm), matricula(mat), nota(nt), curso(cc) {}

    void setNome(string nm) {
        nome = nm;
    }

    void setMatricula(int mat) {
        matricula = mat;
    }

    void setNota(float nt) {
        nota = nt;
    }

    void setCurso(string cc) {
        curso = cc;
    }

    string getNome()  {
        return nome;
    }

    int getMatricula()  {
        return matricula;
    }

    float getNota()  {
        return nota;
    }

    string getCurso()  {
        return curso;
    }

    float calcularMedia()  {
        return nota;
    }

    bool verificarAprovacao()  {
        return (nota >= 5.0);
    }

    void mostrarDados()  {
        cout << "Aluno: " << nome << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Nota: " << nota << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {
    Aluno a1("Maria Silva", 202345, 7.5, "Engenharia");



    a1.setNota(4);

    a1.mostrarDados();
    cout << "Media: " << a1.calcularMedia() << endl;
    cout << "Aprovado: " << (a1.verificarAprovacao() ? "Sim" : "Não") << endl;

    return 0;
}
