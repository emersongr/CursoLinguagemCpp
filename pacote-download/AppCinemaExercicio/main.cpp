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
    //Cabe�alho do programa
    int inicio = 16;
    float preco = 20;
    cout << endl;
    cout <<"===================== CINEMA =====================" << endl;
    cout <<"HOR�RIO DO FILME: "<< inicio <<"h - PRE�O DO INGRESSO: R$" << preco << endl;
    cout <<"--------------------------------------------------"<< endl;
    cout <<"Hora atual: " << h << endl;
    return 0;
}
