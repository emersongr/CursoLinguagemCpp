#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "portuguese");
    cout << "------------------------------" << endl;
    cout << "    ESCOLA SANTA PACIÊNCIA    " << endl;
    cout << "------------------------------" << endl;
    cout << "Quantos alunos tem na turma? ";
    int nalunos;
    cin >> nalunos;
    cout << "------------------------------" << endl;
    int cont;
    cont = 1;
    char aluno;
    float nota;
    float mnota;
    char maluno;
    while (cont<=nalunos) {
        cout << "Aluno " << cont << ": ";
        cin >> aluno;
        cout << "Nota do aluno: ";
        cin >> nota;
        cout << endl;
        cout << "------------------------------" << endl;
        cont=cont+1;
        if (nota>mnota) {
            mnota=nota;
            maluno=aluno;
        }
    }
    cout << "O melhor aproveitamento foi de " << maluno << " com a nota " << mnota << endl;
    return 0;
}
