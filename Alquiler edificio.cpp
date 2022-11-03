#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class departamento
{
    public: 
        int precio;
        string propietario;
        int num_habit;
        int num_banos;
        int m2;
        int num_depa;
        
        void show_data ()
        {
            cout << "Nombre del propietario: " << propietario << endl;
            cout << "Numero de departamento: " << num_depa << endl;
            cout << "Precio del departamento en dolares: " << precio << endl;
            cout << "Metros cuadrados de construccion: " << m2 << endl;
            cout << "Cantidad de habitaciones: " << num_habit << endl;
            cout << "Cantidad de baños: " << num_banos << endl;
        };
        
        departamento(int pr, string prop, int numH, int numB, int numD, int m2)
        {
            this -> precio = pr;
            this -> propietario = prop;
            this -> num_habit = numH;
            this -> num_banos = numB;
            this -> num_depa = numD;
            this -> m2 = m2;
        };
};

vector <departamento> arr;

int piso, ingreso, pr, m2, num_H, num_B, num_D;    
string nombre,apellido; 
void bienvenida_usuario();
fstream archivo("Departamentos.txt", ios::out | ios::in |ios::app);

int main()
{
    cout << "¡Bienvenido!" << endl;
    cout << "Ingrese 1 si quiere ver los departamentos disponibles." << endl;
    cout << "Ingrese 2 si usted quiere publicar un departamento." << endl;
    do{
        if(ingreso > 2) cout << "Por favor, ingrese un numero valido: " << endl;
        cin >> ingreso;
        
        switch (ingreso)
        {
            case 1: cout << "---------------------------------------------" << endl;
                    cout << "Departamentos disponibles: " << endl;
                    
            break;
            
            case 2: cout << "---------------------------------------------" << endl;
                    cout << "A continuación, ingrese los datos de su departamento: " << endl;
                    cout << "Numero de departamento: ";
                    cin >> num_D;
                    cout << "Precio en dolares: ";
                    cin >> pr;
                    cout << "Nombre y apellido del propietario: ";
                    cin >> nombre >> apellido;
                    cout << "Cantidad de habitaciones: ";
                    cin >> num_H;
                    cout << "Cantidad de baños: ";
                    cin >> num_B;
                    cout << "Metros cuadrados del inmueble: ";
                    cin >> m2;
                    arr.push_back(departamento(pr, (nombre+" "+apellido), num_H, num_B, num_D, m2));
                    archivo << "Numero de departamento:" << num_D << " Precio:"<< pr << " Nombre y apellido:" << (nombre+" "+apellido) << " Cantidad de habitaciones:" << num_H << " Cantidad de baños:" << num_B << " Metros cuadrados:" << m2 <<endl;
            break;
        }
    }while (ingreso > 2);
    
    return 0;
}