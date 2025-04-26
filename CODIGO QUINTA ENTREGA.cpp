#include <stdio.h>
#include <iostream>
using namespace std;
struct perro
{
    //atributos
    string nombre;
    string raza;
    int edad;
    float puntaje;
    string linkfoto;
    //métodos
    void mostrarNombre();
    void asignarRaza();
    void asignarEdad();
    void asignarPuntaje();
    void mostrarLinkfoto();
};
    
void perro::mostrarNombre(){
    cout<<"El nombre del perro es: \n";
    cout<<nombre;
};

void perro::asignarRaza(){
    cout<<"Ingresa raza del perro: \n";
    cin>>raza;
};
   
void perro::asignarEdad(){
    cout<<"La edad del perro es: \n";
    cout<<edad;
};
void perro::asignarPuntaje(){
    cout<<"El puntaje obtenido es: \n";
    cout<<puntaje;
};
void perro::mostrarLinkfoto(){
    cout<<"El link de la foto es: \n";
    cout<<linkfoto;
}
struct dueño
{
    //atributos
    string nombre;
    int identificación;
    string telefono;
    string correo;
    //métodos
    void mostrarNombre();
    void ingresarIdentificación();
    void ingresarTelefono();
    void ingresarCorreo();
};

void dueño::mostrarNombre(){
    cout<<"El nombre del dueño es: \n";
    cout<<nombre;
};

void dueño::ingresarIdentificación(){
    cout<<"ingresar identificación: \n";
    cin>>identificación;
};
   
void dueño::ingresarTelefono(){
    cout<<"El telefono es: \n";
    cout<<telefono;
};
void dueño::ingresarCorreo(){
    cout<<"El correo es: \n";
    cout<<correo;
};
struct inscripcion
{
    //atributos
    int iddeinscripcion;
    string referenciaperro;
    string referenciadueño;
    string fechadeinscripcion;
    //métodos
    void asignarIddeinscripcion();
    void mostrarReferenciaperro();
    void mostrarReferenciadueño();
    void mostrarFechadeinscripcion();
};

void inscripcion::asignarIddeinscripcion(){
    cout<<"El id de inscripcion es: \n";
    cout<<iddeinscripcion;
};

void inscripcion::mostrarReferenciaperro(){
    cout<<"La referencia del perro es: \n";
    cin>>referenciaperro;
};
   
void inscripcion::mostrarReferenciadueño(){
    cout<<"La referencia del dueño es: \n";
    cout<<referenciadueño;
};
void inscripcion::mostrarFechadeinscripcion(){
    cout<<"la fecha de inscripcion es: \n";
    cout<<fechadeinscripcion;
};
struct raza
{
    //atributos
    string nombreraza;
    string Gruporaza;
    string paisraza;
    //métodos
    void mostrarNombreraza();
    void mostrarGruporaza();
    void mostrarpaisraza();
};

void raza::mostrarNombreraza(){
    cout<<"la raza del perro es: \n";
    cout<<nombreraza;
};

void raza::mostrarGruporaza(){
    cout<<"El grupo de la raza es: \n";
    cin>>Gruporaza;
};
   
void raza::mostrarpaisraza(){
    cout<<"El paiz de la raza es: \n";
    cout<<paisraza;
};
struct Exposición
{
    //atributos
    string nombredelaexposición;
    string fechaexposición;
    string ubicacióndelaexposición;
    int numerodeperros;
    //métodos
    void mostrarNombredelaexposición();
    void mostrarFechaexposición();
    void mostrarUbicacióndelaexposición();
    void mostrarNumerodeperros();
};

void Exposición::mostrarNombredelaexposición(){
    cout<<"El nombre de la exposición es: \n";
    cout<<nombredelaexposición;
};

void Exposición::mostrarFechaexposición(){
    cout<<"la fecha de la exposición: \n";
    cin>>fechaexposición;
}
   
void Exposición::mostrarUbicacióndelaexposición(){
    cout<<"La ubicacion de la exposición es: \n";
    cout<<ubicacióndelaexposición;
};
void Exposición::mostrarNumerodeperros(){
    cout<<"El numero de perros es: \n";
    cout<<numerodeperros;
};
struct juez
{
    //atributos
    string nombrejuez;
    int identificación;
    int experiencia;
    //métodos
    void mostrarNombrejuez();
    void mostrarIdentificación();
    void mostrarExperiencia();
};

void juez::mostrarNombrejuez(){
    cout<<"El nombre del juez es: \n";
    cout<<nombrejuez;
};

void juez::mostrarIdentificación(){
    cout<<"La identificación del juez es: \n";
    cin>>identificación;
};
   
void juez::mostrarExperiencia(){
    cout<<"La experiencia del juez es: \n";
    cout<<experiencia;
};
struct puntaje
{
    //atributos
    float valorpuntaje;
    string nombrejuez;
    string datosperro;
    //métodos
    void mostrarValorpuntaje();
    void mostrarNombrejuez();
    void mostrarDatosperro();
};

void puntaje::mostrarValorpuntaje(){
    cout<<"El puntaje obtenido es: \n";
    cout<<valorpuntaje;
};

void puntaje::mostrarNombrejuez(){
    cout<<"el nombre del juez es: \n";
    cin>>nombrejuez;
};
   
void puntaje::mostrarDatosperro(){
    cout<<"Los datos del perro son: \n";
    cout<<datosperro;
};

int  main()
/// en este bloque se aplico la primera estructura de perro
{
    cout<<"para crear la lista de perros, ingrese los siguientes datos en orden\n";
    cout<<"Nombre, Raza, Puntaje, Edad";
    int i; /// variable de posicion en la lista
    perro Bulldog, Poodle, Beagle, Pug, Bóxer, Pomerania, Afgano, Pastoaleman;
    perro listaperros[8];
    /// en este apartado se esta declarando la estrictura de la lista 
    for(i=0;i<8;i++)
    {

    cin>>listaperros[i].nombre;
    cin>>listaperros[i].raza;
    cin>>listaperros[i].puntaje;
    cin>>listaperros[i].edad;
    
    
    }
    
    
   
   

    cout<<"Bienvenido a PETLANDYA\n";
    cout<<"Selecciona una opcion"<<endl;
    int opcion;
   
do
{
    cout<<"\n1.lista, 2.informacion, 3.registrar, 4.buscar, 5.ganador, 6.perro mas viejo, 7.salir";
    cin>>opcion;
    switch (opcion){
    case 1:
    cout<<"mostrar lista de perros";
    
    break;
    case 2:
    cout<<"mostrar informacion de un perro en especifico";
    break;
    case 3:
    cout<<"registrar un nuevo perro";
    break;
    case 4:
    cout<<"localizar un perro por su nombre";
    break;
    case 5:
    cout<<"mostrar perro ganador";
    break;
    case 6:
    cout<<"perro mas viejo";
    break;
    case 7:"salir";
    break;

    default:
    {
    cout<<"intentalo de nuevo";
    }
    }
   
}while(opcion != 7);
    cout<<"Gracias por ingresar a PETLANDYA";
   
}    
