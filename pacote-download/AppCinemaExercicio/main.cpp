#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    //Pegar a hora atual
    time_t t;
    struct tm *hora;
    time (&t);
    hora = localtime(&t);
    int h = hora->tm_hour;
    //Cabeçalho do programa
    int inicio = 16;
    float preco = 20;
    cout << endl;
    cout <<"===================== CINEMA =====================" << endl;
    cout <<"HORÁRIO DO FILME: "<< inicio <<"h - PREÇO DO INGRESSO: R$" << preco << endl;
    cout <<"--------------------------------------------------"<< endl;
    cout <<"Hora atual: " << h << endl;
    return 0;
}
