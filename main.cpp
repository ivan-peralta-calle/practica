#include <iostream>
using namespace std;
bool EsVocal(char caracter);
void Combinar(int cantidad);
int CalcularMCM(int A, int B);
int MCD(int A, int B);
int MaxPrimo(int n);
bool Primo(int num);
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
        int diasmes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
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
        if(dia<1 || dia>diasmes[mes - 1]){
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            return false;
        }
        if((dia>=1 && dia<=diasmes[mes - 1])){
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
            return false;
        }
    }
        break;
    case 4:
    {cout << "ejecutando el problema 4..."<< endl;
        int tiempo1;
        cout<<"ingrese la primer hora:";
        cin>>tiempo1;
        if(tiempo1>=2400 || tiempo1%100>=60){
            cout<<"es un tiempo invalido"<<endl;
        }
        else{
            int tiempo2;
            cout<<"ingrese la segunda hora:";
            cin>>tiempo2;
            if(tiempo2>=2400 || tiempo2%100>=60){
                cout<<"es un tiempo invalido"<<endl;
            }
        else{
            int horas=tiempo1/100+tiempo2/100;
            int minutos=tiempo1%100+tiempo2%100;
            if(minutos>=60){
                horas += minutos/60;
                minutos%=60;
            }
        int total=horas*100+minutos;
        if(total>=2400 || total%100>=60)
            cout<<"la suma de los tiempos es invalida"<<endl;
            else{
                cout<<"la hora es "<<total<<endl;
                }
            }
        }

    }
        break;
    case 5:
    {cout << "ejecutando el problema 5..."<< endl;
        int filas;
        cout<<"ingrese un numero impar para el patron: ";
        cin>>filas;
        if (filas%2 == 0){
            cout<<"el numero ingresado no es impar. Por favor, ingrese un numero impar."<<endl;
            return 1;
        }
        for(int i=1; i<=filas; i+=2){

            for(int j=(filas-i)/2; j>0; j--){
                cout << " ";
            }

            for(int k=0; k<i; k++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=filas-2; i>0; i-=2){

            for(int j=(filas-i)/2; j>0; j--){
                cout<<" ";
            }

            for(int k=0; k<i; k++){
                cout<<"*";
            }
            cout<<endl;
        }

        return 0;

    }
        break;
    case 6:
    {cout << "ejecutando el problema 6..."<< endl;

    }
        break;
    case 7:
    {cout << "ejecutando el problema 7..."<< endl;
        int n;
        cout<<"ingrese un numero: ";
        cin>>n;

        int a=1, b=1, sumpar=0;

        while(true){
            int siguiente = a+b;
            if(siguiente >= n)
                break;

            if(siguiente %2==0){
                sumpar += siguiente;
            }

            a = b;
            b = siguiente;
        }

        cout<<"el resultado de la suma es: "<<sumpar<<endl;

        return 0;
    }
        break;
    case 8:
    {cout << "ejecutando el problema 8..."<< endl;

    }
        break;
    case 9:
    {cout << "ejecutando el problema 9..."<< endl;
        int N;
        cout<<"ingrese un numero entero: "<<endl;
        cin>>N;

        int sumtotal=0;

        while(N>0){
            int digito =N%10;
            int potencia =1;

            for(int i=0; i<digito; i++){
                potencia *= digito;
            }

            sumtotal += potencia;
            N /= 10;
        }

        cout<<"El resultado de la suma es: "<<sumtotal<<endl;

        return 0;

    }
        break;
    case 10:
    {cout << "ejecutando el problema 10..."<< endl;

    }
        break;
    case 11:
    {cout << "ejecutando el problema 11..."<< endl;
        int numero;

        cout<<"ingrese un numero: ";
        cin>>numero;

        int mcm = 1;
        for(int i=2; i<=numero; ++i){
            mcm = CalcularMCM(mcm, i);
        }
        cout<<"el minimo comun multiplo es: "<<mcm<<endl;

        return 0;

    }
        break;
    case 12:
    {cout << "ejecutando el problema 12..."<< endl;
        int n;
        cout<<"ingrese un numero: ";
        cin>>n;

        int mayorPrimo = MaxPrimo(n);
        cout<<"el mayor factor primo de "<<n<<" es: "<<mayorPrimo<<endl;

        return 0;
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
int MCD(int A, int B) {
    int C;
    while (B != 0) {
        C = B;
        B = A % B;
        A = C;
    }
    return A;
}

int CalcularMCM(int A, int B) {
    return A * B / MCD(A, B);
}
int MaxPrimo(int n){
    int maxprimo=0;
    while(n % 2==0){
        maxprimo=2;
        n /= 2;
    }
    for(int i=3; i*i<=n; i += 2){
        if(Primo(i)){
            while(n % i == 0){
                maxprimo=i;
                n /= i;
            }
        }
    }
    if(n>2){
        maxprimo=n;
    }
    return maxprimo;
}
bool Primo(int num){
    if(num<=1)
        return false;
    for(int i=2; i*i<=num; i++){
        if(num % i==0)
            return false;
    }
    return true;
}

