#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int opcion, precio, anio, kilometros;
string marca, modelo, text;

void ShowCars();

int main(){
    fstream archivo("Vehiculos.txt", ios::out | ios::in |ios::app);
    
    cout << "¡Bienvenido a concesionaria Fatcar!" << endl
        << "Si desea ver los vehiculos a la venta presione 1." << endl
        << "Si desea publicar un nuevo vehiculo presione 2." << endl;
    cin >> opcion;
    
    switch(opcion)
    {
        case 1: 
            ShowCars();
            break;

        case 2: 
            cout << "Marca del vehiculo:" << endl;
            cin >> marca;
            cout << "Modelo del vehiculo:" << endl;
            cin >> modelo;
            cout << "Año del vehiculo:" << endl;
            cin >> anio;
            cout << "Kilometros:" << endl;
            cin >> kilometros;
            cout << "Precio en usd:" << endl;
            cin >> precio;
            cout << "!Gracias por confiar en nosotros¡" << endl;
            archivo << "Marca: "<< marca << " Modelo: " << modelo << " Año: " << anio << " Kilometros: " << kilometros << " Precio: " << precio <<endl;
            break;
    }
    return 0;
}

void ShowCars(){
    ifstream arc ("Vehiculos.txt");
    while(!arc.eof()){
        string line;
        getline(arc, line);
        cout << line << endl;
    }
}