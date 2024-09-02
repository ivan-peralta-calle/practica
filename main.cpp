#include <iostream>
using namespace std;
bool EsVocal(char caracter);
void Combinar(int cantidad);
int main()
{
    int opcion=1;
    cout << "Bienvenido a la practica 1" << endl;
    cout << "" << endl;
    while(opcion!=0)
    {
    cout << "seleccione una opcion: " << endl;
    cout << "1: " << endl;
    cout << "2: " << endl;
    cout << "3: " << endl;
    cout << "4: " << endl;
    cout << "5: " << endl;
    cout << "6: " << endl;
    cout << "7: " << endl;
    cout << "8: " << endl;
    cout << "9: " << endl;
    cout << "10: " << endl;
    cout << "11: " << endl;
    cout << "12: " << endl;
    cout << "13: " << endl;
    cout << "14: " << endl;
    cout << "15: " << endl;
    cout << "16: " << endl;
    cout << "17: " << endl;
    cin>>opcion;
    switch (opcion) {
    case 1:
    {cout << "ejecutando el problema 1..."<< endl;
        char caracter;
        cout<<"ingrese un caracter"<<endl;
        cin>>caracter;
        if((caracter>=65 && caracter<=90) ||(caracter>=97 && caracter<=122))
        {
            if(EsVocal(caracter))
                cout<<caracter<<" es una vocal"<<endl;
            else
                cout<<caracter<<" es una consonante"<<endl;

        }else
            cout<<caracter <<" No es una letra"<<endl;
    }
        break;
    case 2:
    {cout << "ejecutando el problema 2..."<< endl;
        int cantidad;
        cout<<"ingrese la cantidad para la minima combinacion"<<endl;
        cin>>cantidad;
        Combinar(cantidad);
        cantidad%=100;
        if(cantidad>0 && cantidad<50){
            cout<<"faltante: "<<cantidad<<endl;
        }else{
            cout<<"faltante: 0"<<endl;
        }
    }
        break;
    case 3:
    {cout << "ejecutando el problema 3..."<< endl;
        int dias_por_mes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int mes;
        cout<<"ingrese un mes"<<endl;
        cin>>mes;
        int dia;
        cout<<"ingrese el dia del mes"<<endl;
        cin>>dia;
        if(mes<1 || mes>12){
            cout<<mes<<" es un mes invalido"<<endl;
            return false;
        }
        if(mes==2 && dia==29){
            cout<<dia<<"/"<<mes<<" es valida en biniestro"<<endl;
            return false;
        }
        if(dia < 1 || dia > dias_por_mes[mes - 1]){
            cout<<dia<<"/"<<mes<< " es una fecha invalida."<<endl;
            return false;
        }
        if((dia >= 1 && dia <= dias_por_mes[mes - 1])){
            cout<<dia<<"/"<<mes<< " es una fecha valida."<<endl;
            return false;
        }
    }
        break;
    case 4:
    {cout << "ejecutando el problema 4..."<< endl;

    }
        break;
    case 5:
    {cout << "ejecutando el problema 5..."<< endl;

    }
        break;
    case 6:
    {cout << "ejecutando el problema 6..."<< endl;

    }
        break;
    case 7:
    {cout << "ejecutando el problema 7..."<< endl;

    }
        break;
    case 8:
    {cout << "ejecutando el problema 8..."<< endl;

    }
        break;
    case 9:
    {cout << "ejecutando el problema 9..."<< endl;

    }
        break;
    case 10:
    {cout << "ejecutando el problema 10..."<< endl;

    }
        break;
    case 11:
    {cout << "ejecutando el problema 11..."<< endl;

    }
        break;
    case 12:
    {cout << "ejecutando el problema 12..."<< endl;

    }
        break;
    case 13:
    {cout << "ejecutando el problema 13..."<< endl;

    }
        break;
    case 14:
    {cout << "ejecutando el problema 14..."<< endl;

    }
        break;
    case 15:
    {cout << "ejecutando el problema 15..."<< endl;

    }
        break;
    case 16:
    {cout << "ejecutando el problema 16..."<< endl;

    }
        break;
    case 17:
    {cout << "ejecutando el problema 17..."<< endl;

    }
        break;
    default:
        if(opcion!=0)
            cout << "opcion no valida."<< endl;
        break;
    }

    return 0;
    }
}

bool EsVocal(char caracter){
    if(caracter>=97)
        caracter-=32;

    if(caracter=='A'|| caracter=='E'|| caracter=='I'
        || caracter=='O'||caracter=='U')
        return true;
    else
        return false;
}
void Combinar(int cantidad){
    int dinero[]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int numdinero[10]={0};
    for(int i=0; i<10; ++i){
        if (cantidad >= dinero[i]){
            numdinero[i]= cantidad/dinero[i];
            cantidad = cantidad % dinero[i];
        }
    }
    for (int i = 0; i < 10; ++i){
        cout<<dinero[i]<<":"<<numdinero[i]<<endl;
    }
}
