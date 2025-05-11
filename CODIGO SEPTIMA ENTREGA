#include <iostream>
using namespace std;


struct perro {
    string nombre;
    string Raza;
    int edad;
    float puntaje;
    string linkfoto;

    void mostrarNombre();
    void asignarRaza();
    void asignarEdad();
    void asignarPuntaje();
    void mostrarLinkfoto();
};

void perro::mostrarNombre() {
    cout << "El nombre del perro es: \n";
    cout << nombre;
}

void perro::asignarRaza() {
    cout << "Ingresa raza del perro: \n";
    cin >> Raza;
}

void perro::asignarEdad() {
    cout << "La edad del perro es: \n";
    cin >> edad;
}

void perro::asignarPuntaje() {
    cout << "El puntaje obtenido es: \n";
    cin >> puntaje;
}

void perro::mostrarLinkfoto() {
    cout << "El link de la foto es: \n";
    cout << linkfoto;
}

struct dueño {
    string nombre;
    int identificación;
    string telefono;
    string correo;

    void mostrarNombre();
    void ingresarIdentificación();
    void ingresarTelefono();
    void ingresarCorreo();
};

void dueño::mostrarNombre() {
    cout << "El nombre del dueño es: \n";
    cout << nombre;
}

void dueño::ingresarIdentificación() {
    cout << "Ingresar identificación: \n";
    cin >> identificación;
}

void dueño::ingresarTelefono() {
    cout << "El telefono es: \n";
    cin >> telefono;
}

void dueño::ingresarCorreo() {
    cout << "El correo es: \n";
    cin >> correo;
}

struct inscripcion {
    int iddeinscripcion;
    string referenciaperro;
    string referenciadueño;
    string fechadeinscripcion;

    void asignarIddeinscripcion();
    void mostrarReferenciaperro();
    void mostrarReferenciadueño();
    void mostrarFechadeinscripcion();
};

void inscripcion::asignarIddeinscripcion() {
    cout << "El id de inscripcion es: \n";
    cin >> iddeinscripcion;
}

void inscripcion::mostrarReferenciaperro() {
    cout << "La referencia del perro es: \n";
    cin >> referenciaperro;
}

void inscripcion::mostrarReferenciadueño() {
    cout << "La referencia del dueño es: \n";
    cin >> referenciadueño;
}

void inscripcion::mostrarFechadeinscripcion() {
    cout << "La fecha de inscripcion es: \n";
    cin >> fechadeinscripcion;
}

struct raza {
    string nombreraza;
    string gruporaza;
    string paisraza;

    void mostrarNombreraza();
    void mostrarGruporaza();
    void mostrarpaisraza();
};

void raza::mostrarNombreraza() {
    cout << "La raza del perro es: \n";
    cout << nombreraza;
}

void raza::mostrarGruporaza() {
    cout << "El grupo de la raza es: \n";
    cin >> gruporaza;
}

void raza::mostrarpaisraza() {
    cout << "El pais de la raza es: \n";
    cin >> paisraza;
}

struct Exposición {
    string nombredelaexposición;
    string fechaexposición;
    string ubicacióndelaexposición;
    int numerodeperros;

    void mostrarNombredelaexposición();
    void mostrarFechaexposición();
    void mostrarUbicacióndelaexposición();
    void mostrarNumerodeperros();
};

void Exposición::mostrarNombredelaexposición() {
    cout << "El nombre de la exposición es: \n";
    cin >> nombredelaexposición;
}

void Exposición::mostrarFechaexposición() {
    cout << "La fecha de la exposición es: \n";
    cin >> fechaexposición;
}

void Exposición::mostrarUbicacióndelaexposición() {
    cout << "La ubicacion de la exposición es: \n";
    cin >> ubicacióndelaexposición;
}

void Exposición::mostrarNumerodeperros() {
    cout << "El numero de perros es: \n";
    cin >> numerodeperros;
}

struct juez {
    string nombrejuez;
    int identificación;
    int experiencia;

    void mostrarNombrejuez();
    void mostrarIdentificación();
    void mostrarExperiencia();
};

void juez::mostrarNombrejuez() {
    cout << "El nombre del juez es: \n";
    cin >> nombrejuez;
}

void juez::mostrarIdentificación() {
    cout << "La identificación del juez es: \n";
    cin >> identificación;
}

void juez::mostrarExperiencia() {
    cout << "La experiencia del juez es: \n";
    cin >> experiencia;
}

struct puntaje {
    float valorpuntaje;
    string nombrejuez;
    string datosperro;

    void mostrarValorpuntaje();
    void mostrarNombrejuez();
    void mostrarDatosperro();
};

void puntaje::mostrarValorpuntaje() {
    cout << "El puntaje obtenido es: \n";
    cin >> valorpuntaje;
}

void puntaje::mostrarNombrejuez() {
    cout << "El nombre del juez es: \n";
    cin >> nombrejuez;
}

void puntaje::mostrarDatosperro() {
    cout << "Los datos del perro son: \n";
    cin >> datosperro;
}

int main() {
    
    int x;
    
    cout << "\n===== Bienvenido a PETLANDYA =====\n";
    
            cout<<"cuantos perros quieres ingresar";
            cin>>x;
    perro listaperros[x];
    dueño datosdueño[x];
    inscripcion datosperroydueño[x];
    raza datosraza[x];
    Exposición datosexposición[1];
    juez datosjuez[3];
    puntaje puntajeperro[x];

    int opcion;
    do {
        
        cout << "1. Ingresar perros\n";
        cout << "2. Ingresar dueños\n";
        cout << "3. Ingresar inscripciones\n";
        cout << "4. Ingresar razas\n";
        cout << "5. Ingresar exposiciones\n";
        cout << "6. Ingresar jueces\n";
        cout << "7. Ingresar puntajes\n";
        cout << "8. Mostrar datos (no implementado)\n";
        cout << "9. Salir\n";
        cout << "===================================\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpia buffer

        switch (opcion) {
            
            
    
            case 1:
                for (int i = 0; i < x; i++) {
                    cout << "Ingresar datos del perro #" << i+1 << endl;
                    cout<<"Nombre del perro"<< endl;
                    cin >> listaperros[i].nombre;
                    cout<<"Raza del perro"<<endl;
                    cin >> listaperros[i].Raza;
                    cout<<"Puntaje del perro"<<endl;
                    cin >> listaperros[i].puntaje;
                    cout<<"Edad del perro"<<endl;
                    cin >> listaperros[i].edad;
                    
                }
                break;

            case 2:
                for (int i = 0; i < x; i++) {
                    cout << "Ingresar datos del dueño #" << i+1 << endl;
                    cout<<"Nombre"<<endl;
                    cin >> datosdueño[i].nombre;
                    cout<<"Identificacion del dueño"<<endl;
                    cin >> datosdueño[i].identificación;
                    cout<<"Telefono"<<endl;
                    cin >> datosdueño[i].telefono;
                    cout<<"Correo del dueño"<<endl;
                    cin >> datosdueño[i].correo;
                }
                break;

            case 3:
                for (int i = 0; i < x; i++) {
                    cout << "Ingresar datos de la inscripcion #" << i+1 << endl;
                    cout<<"Id de la inscripcion"<<endl;
                    cin >> datosperroydueño[i].iddeinscripcion;
                    cout<<"Referencia del perro"<<endl;
                    cin >> datosperroydueño[i].referenciaperro;
                    cout<<"Referencia del dueño"<<endl;
                    cin >> datosperroydueño[i].referenciadueño;
                    cout<<"Fecha de la inscripcion"<<endl;
                    cin >> datosperroydueño[i].fechadeinscripcion;
                }
                break;

            case 4:
                for (int i = 0; i < x; i++) {
                    cout << "Ingresar datos de la raza #" << i+1 << endl;
                    cout<<"Nombre de la raza"<<endl;
                    cin >> datosraza[i].nombreraza;
                    cout<<"Grupo de la raza"<<endl;
                    cin >> datosraza[i].gruporaza;
                    cout<<"Pais de la raza"<<endl;
                    cin >> datosraza[i].paisraza;
                }
                break;

            case 5:
                for (int i = 0; i < 1; i++) {
                    cout << "Ingresar datos de la exposición #" << i+1 << endl;
                    cout<<"Nombre de la exposición"<<endl;
                    cin >> datosexposición[i].nombredelaexposición;
                    cout<<"Fecha de la exposicón"<<endl;
                    cin >> datosexposición[i].fechaexposición;
                    cout<<"Ubicacón de la exposición"<<endl;
                    cin >> datosexposición[i].ubicacióndelaexposición;
                    cout<<"Numero de perros"<<endl;
                    cin >> datosexposición[i].numerodeperros;
                }
                break;

            case 6:
                for (int i = 0; i < 3; i++) {
                    cout << "Ingresar datos del juez #" << i+1 << endl;
                    cout<<"Nombre del juez"<<endl;
                    cin >> datosjuez[i].nombrejuez;
                    cout<<"Identificación del juez"<<endl;
                    cin >> datosjuez[i].identificación;
                    cout<<"Años de experiencia"<<endl;
                    cin >> datosjuez[i].experiencia;
                }
                break;

            case 7:
                for (int i = 0; i < x; i++) {
                    cout << "Ingresar datos del puntaje #" << i+1 << endl;
                    cout<<"Valor del puntaje"<<endl;
                    cin >> puntajeperro[i].valorpuntaje;
                    cout<<"Nombre del juez"<<endl;
                    cin >> puntajeperro[i].nombrejuez;
                    cout<<"Datos del perro"<<endl;
                    cin >> puntajeperro[i].datosperro;
                }
                break;

            case 8:
                cout << "Mostrar datos de los perros, dueños, inscripciones, razas, exposiciones, jueces y puntajes\n";
                break;

            case 9:
                cout << "Gracias por usar PETLANDYA\n";
                break;

            default:
                cout << "Opción inválida, intente nuevamente.\n";
                break;
        }
    } while (opcion != 9);

    return 0;
}
