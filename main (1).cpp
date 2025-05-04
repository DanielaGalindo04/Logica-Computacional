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
    perro listaperros[8];
    dueño datosdueño[8];
    inscripcion datosperroydueño[8];
    raza datosraza[8];
    Exposición datosexposición[8];
    juez datosjuez[8];
    puntaje puntajeperro[8];

    int opcion;
    do {
        cout << "1. Ingresar perros\n";
        cout << "2. Ingresar dueños\n";
        cout << "3. Ingresar inscripciones\n";
        cout << "4. Ingresar razas\n";
        cout << "5. Ingresar exposiciones\n";
        cout << "6. Ingresar jueces\n";
        cout << "7. Ingresar puntajes\n";
        cout << "8. Mostrar datos\n";
        cout << "9. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos del perro #" << i+1 << endl;
                    cin >> listaperros[i].nombre;
                    cin >> listaperros[i].Raza;
                    cin >> listaperros[i].puntaje;
                    cin >> listaperros[i].edad;
                }
                break;

            case 2:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos del dueño #" << i+1 << endl;
                    cin >> datosdueño[i].nombre;
                    cin >> datosdueño[i].identificación;
                    cin >> datosdueño[i].telefono;
                    cin >> datosdueño[i].correo;
                }
                break;

            case 3:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos de la inscripcion #" << i+1 << endl;
                    cin >> datosperroydueño[i].iddeinscripcion;
                    cin >> datosperroydueño[i].referenciaperro;
                    cin >> datosperroydueño[i].referenciadueño;
                    cin >> datosperroydueño[i].fechadeinscripcion;
                }
                break;

            case 4:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos de la raza #" << i+1 << endl;
                    cin >> datosraza[i].nombreraza;
                    cin >> datosraza[i].gruporaza;
                    cin >> datosraza[i].paisraza;
                }
                break;

            case 5:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos de la exposición #" << i+1 << endl;
                    cin >> datosexposición[i].nombredelaexposición;
                    cin >> datosexposición[i].fechaexposición;
                    cin >> datosexposición[i].ubicacióndelaexposición;
                    cin >> datosexposición[i].numerodeperros;
                }
                break;

            case 6:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos del juez #" << i+1 << endl;
                    cin >> datosjuez[i].nombrejuez;
                    cin >> datosjuez[i].identificación;
                    cin >> datosjuez[i].experiencia;
                }
                break;

            case 7:
                for (int i = 0; i < 8; i++) {
                    cout << "Ingresar datos del puntaje #" << i+1 << endl;
                    cin >> puntajeperro[i].valorpuntaje;
                    cin >> puntajeperro[i].nombrejuez;
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
