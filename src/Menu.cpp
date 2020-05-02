//
// Created by Usuario on 27/04/2020.
//

#include "Menu.h"
#include <iomanip>

void limpiar() {
    cout << "\033[2J\033[0;0H";
}

void Menu::imprimir(){
    limpiar();
    u.imprimir_user();
    cout<<"Menu"<<endl;
    cout<<"----"<<endl<<endl;
    cout<<"1.Crear nueva orden"<<endl;
    cout<<"2.Ver Ordenes"<<endl<<endl;
    cout<<"0. Salir"<<endl;
}

void Menu::set_user(User& _u){
    u = _u;
}


void Menu::seleccionar_orden(){
    string nombre;
    int p, q;
    cout<<"Nombre del producto:"<<endl; cin>>nombre;
    cout<<"Precio del producto:"<<endl; cin>>p;
    cout<<"Cantidad:"<<endl; cin>>q;
    vector<Orden*>::iterator it = ordenes.end()-1;
    (*it)->agregar_producto(new producto(nombre, p, q));
    cout<<endl;
    cout<<"1. Agregar otro producto"<<endl;
    cout<<"0. Salir"<<endl;
}

void Menu::crear_orden(){
    int clave;
    limpiar();
    ordenes.push_back(new Orden());
    cout<<endl<<"1. Agregar producto";
    cout<<endl<<"0. Salir"<<endl;
    do {
        cin >> clave;
        if(clave==1)
            seleccionar_orden();
    } while (clave != 0);
    auto it = ordenes.end()-1;
    volver();
}


void Menu::ver_ordenes(){
    limpiar();
    int c;
    imprimir_ordenes();
    do {
        cin >> c;
    } while (opcion != 0);

}


void Menu::ejecutar() {
    limpiar();
    string nombre, apellido, contrasena, username;
    cout<<"Ingrese su Nombre:"; cin>>nombre;
    cout<<"Ingrese su Apellido:"; cin>>apellido;
    cout<<"Ingrese su Contraseña:"; cin>>contrasena;
    cout<<"Ingrese su username:"; cin>>username;
    User u(nombre, apellido, contrasena, username);
    set_user(u);
    volver();
}

void Menu::seleccionar_menu(){
    if (opcion==1)
        crear_orden();
    else if(opcion==2)
        ver_ordenes();
}

void Menu::imprimir_ordenes(){
    vector<Orden*>::iterator it=ordenes.begin();
    int n=1;
    int clave, vel;
    string v;
    while(it!=ordenes.end()){
        if ((*it)->get_productos().size()<4){v="Bicicleta"; vel=(*it)->get_b().get_velocidad();}
        else {v="Camion"; vel=(*it)->get_c().get_velocidad();}
        cout<<"Orden ";
        cout<<n<<" - Vehiculo: ";
        cout<<v<<"("<<vel<<" Km/h) - Estado:";
        (*it)->get_est().get_estado();
        cout<<(*it)->get_est().get_estado();
        cout<<endl;
        cout<<"Productos"<<setw(15)<<setprecision(5)<<fixed;
        cout<<"Precio(c/u)"<<setw(10)<<setprecision(5)<<fixed;
        cout<<"Cantidad"<<setw(15)<<setprecision(5)<<fixed;
        cout<<"Total"<<endl;
        for(auto x:(*it)->get_productos()){
            int t=x->get_precio()*x->get_q();
            cout<<x->get_nombre()<<setw(15)<<setprecision(10)<<fixed;
            cout<<x->get_precio()<<setw(15)<<setprecision(10)<<fixed;
            cout<<x->get_q()<<setw(15)<<setprecision(10)<<fixed;
            cout<<t<<endl;
        }
        cout<<endl;
        it++;n++;
    }
    cout<<endl<<"0. Salir"<<endl;cin>>clave;
    if(clave==0)
        volver();
}

void Menu::volver(){
    do {
        imprimir();
        cin >> opcion;
        seleccionar_menu();
    } while (opcion != 0);
    limpiar();
    cout << "Fin del programa..."<<endl;
}

vector<Orden*> Menu::get_ordenes(){
    return ordenes;
}