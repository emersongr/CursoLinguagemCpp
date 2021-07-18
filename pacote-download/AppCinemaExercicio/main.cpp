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
    cout <<"Hora atual: " << h << "h" << endl;
    //Entrada de dados
    float din;
    cout << "Quanto de dinheiro você tem? R$";
    cin >> din;
    //Verificação
    if (h<inicio && din>=preco) {
        cout << "Você consegue comprar o ingresso. Seja bem-vindo(a)!" << endl;
        system("pause");
    char b[10]={0,0,0,0,0,0,0,0,0,0};
    char r;
    int cad;
    int i;
    do{
        system("cls");
        cout << "Vamos reservar os acentos:" << endl;
        cout << "--------------------------" << endl;
        for(i=1; i<10; i++){
        if(b[i]==0){
            cout << "[B" << i << "]";
        }else{
            cout << "[--]";
        }
    }
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Reservar a cadeira: B";
    cin >> cad;
        if(b[cad]==0){
            b[cad]=1;
            cout << "Cadeira B" << cad << " reservada" << endl;
        }else{
            cout << "Erro: Lugar reservado!";
        }
        cout << endl;
        cout << "Quer reservar outro? [s/n] ";
        cin >> r;
        if (r=='n') {
            cout << "Obrigado. Volte sempre!";
        }
    }while (r=='s');
   } else {
      cout << "Infelizmente não é possivel comprar o ingresso! Volte outro dia!" << endl;
   }
}
