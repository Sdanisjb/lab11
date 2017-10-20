#include <iostream>

using namespace std;


class Matrix{

public:
    //Miembros de la clase Matrix
    int**matriz;
    int filas;
    int columnas;

    //Metodo que crea la matriz
    void create(){
        matriz=new int*[filas];
        for(int i=0;i<filas;i++){
            matriz[i]= new int[columnas];
        }
    }

    //Metodo que agrega datos a la matriz
    void addData(){
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                int num;
                cin>>num;
                matriz[i][j]=num;
            }
        }
    }
};

class Calculator{

public:

    //Miembros de la Clase Calculadora
    Matrix matrizA;
    Matrix matrizB;
    Matrix matrizC;

    //Suma
    void add(){
        for(int i=0;i<matrizA.filas;i++){
            for(int j=0;j<matrizA.columnas;j++){

                matrizC.matriz[i][j]= matrizA.matriz[i][j] + matrizB.matriz[i][j];
            }
        }
    }

    //Resta
    void rest(){
        for(int i=0;i<matrizA.filas;i++){
            for(int j=0;j<matrizA.columnas;j++){

                matrizC.matriz[i][j]= matrizA.matriz[i][j] - matrizB.matriz[i][j];
            }
        }
    }

    //Promedio
    void prom(){
        for(int i=0;i<matrizA.filas;i++){
            for(int j=0;j<matrizA.columnas;j++){

                matrizC.matriz[i][j]= (matrizA.matriz[i][j] + matrizB.matriz[i][j])/2;
            }
        }
    }

    //Elemento Mayor
    void mayor(){
        for(int i=0;i<matrizA.filas;i++){
            for(int j=0;j<matrizA.columnas;j++){

                matrizC.matriz[i][j]= (matrizA.matriz[i][j]>=matrizB.matriz[i][j])? matrizA.matriz[i][j]:matrizB.matriz[i][j];
            }
        }

    }

    //Elemento Menor
    void menor(){
        for(int i=0;i<matrizA.filas;i++){
            for(int j=0;j<matrizA.columnas;j++){

                matrizC.matriz[i][j]= (matrizA.matriz[i][j]<=matrizB.matriz[i][j])? matrizA.matriz[i][j]:matrizB.matriz[i][j];
            }
        }

    }

    void print(){
        for(int i=0;i<matrizC.filas;i++){
            for(int j=0;j<matrizC.columnas;j++){
                cout<<matrizC.matriz[i][j]<<" ";
            }
            cout<<endl;
        }
    }


};


int main()
{
    int filas;
    int columnas;

    cout<<"Ingresa numero de Filas"<<endl;
    cin>>filas;

    cout<<"Ingresa numero de Columnas"<<endl;
    cin>>columnas;

    //Crea el objeto Calculadora
    Calculator calculadora;

    //Define las dimensiones de las matrices
    calculadora.matrizA.filas=filas;
    calculadora.matrizA.columnas=columnas;

    calculadora.matrizB.filas=filas;
    calculadora.matrizB.columnas=columnas;

    calculadora.matrizC.filas=filas;
    calculadora.matrizC.columnas=columnas;

    //Crea las matrices
    calculadora.matrizA.create();
    calculadora.matrizB.create();
    calculadora.matrizC.create();

    cout<<"Ingresa los valores de tu primera Matriz"<<endl;
    //ingresarValores(calculadora.matrizA);
    calculadora.matrizA.addData();

    cout<<"Ingresa los valores de tu segunda Matriz"<<endl;
    //ingresarValores(calculadora.matrizB);
    calculadora.matrizB.addData();


    //Hace todos los calculos posibles
    //y los imprime
    cout<<"Suma"<<endl;
    calculadora.add();
    calculadora.print();

    cout<<endl;

    cout<<"Resta"<<endl;
    calculadora.rest();
    calculadora.print();

    cout<<"Mayor"<<endl;
    calculadora.mayor();
    calculadora.print();

    cout<<"Menor"<<endl;
    calculadora.menor();
    calculadora.print();

    cout<<"Promedio"<<endl;
    calculadora.prom();
    calculadora.print();

    return 0;
}