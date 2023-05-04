#include <iostream>
#include "Persona.h"
#include "Docente.h"
#include "Alumno.h"
#include "Materia.h"

void SistemadeGestion(){
    cout<<"*****Sistema de Gestion*****"<<endl;
    cout<<"Sleccione una opcion: "<<endl;
    cout<<""<<endl;
    cout<<"1.Alta"<<endl; //*
    cout<<"2.Inscribir a materias"<<endl;
    cout<<"3.Anotar titular"<<endl;//*
    cout<<"4.Cargar nota"<<endl;//*
    cout<<"5.Modificar datos"<<endl;
    cout<<"6.Salir"<<endl;
}

int main() {

    Docente d1;
    Alumno a1;
    Materia m;
    int respuesta, a_edad, d_codigo_m, a_codigo_m, a_nota;
    unsigned int _dni;
    string _nombre, _apellido, _mail, d_titulo, a_carrera, a_materia, d_materia;
    char r, r1;

    cout<<"Por favor ingrese 'A' en caso de ser alumno o 'D' en caso de ser docente"<<endl;
    cin>>r;

    do {
        respuesta = 0;
        SistemadeGestion();
        cin>>respuesta;
        switch(respuesta) {
            case 1:
               if(r == 'A') {
                   cout << "Ingrese el nombre del alumno" << endl;
                   cin >> _nombre;
                   cout << "Ingrese el apellido del alumno" << endl;
                   cin >> _apellido;
                   cout << "Ingrese el dni del alumno" << endl;
                   cin >> _dni;
                   cout << "Ingrese el mail del alumno" << endl;
                   cin >> _mail;
                   cout << "Ingrese la edad del alumno" << endl;
                   cin >> a_edad;
                   cout << "Ingrese la carrera del alumno" << endl;
                   cin >> a_carrera;

                   a1.setnombre(_nombre);
                   a1.setapellido(_apellido);
                   a1.setdni(_dni);
                   a1.setmail(_mail);
                   a1.setedad(a_edad);
                   a1.setcarrera(a_carrera);

               }

               else if(r == 'D'){
                   cout<<"Ingrese el nombre del profesor"<<endl;
                   cin>>_nombre;
                   cout<<"Ingrese el apellido del profesor"<<endl;
                   cin>>_apellido;
                   cout<<"Ingrese el dni del profesor"<<endl;
                   cin>>_dni;
                   cout<<"Ingrese el mail del profesor"<<endl;
                   cin>>_mail;
                   cout<<"Ingrese el titulo del profesor"<<endl;
                   cin>>d_titulo;

                   d1.setnombre(_nombre);
                   d1.setapellido(_apellido);
                   d1.setdni(_dni);
                   d1.setmail(_mail);
                   d1.settitulo(d_titulo);
               }
               break;

            case 2:
                cout<<"Ingrese la nota de la materia"<<endl;
                cin>>a_nota;
                m.setnota(a_nota);
                cout<<"Ingrese el codigo de la materia"<<endl;
                cin>>a_codigo_m;
                m.setcodigo(a_codigo_m);
                cout<<"Ingrese el nombre de la materia que quiere inscribir al alumno"<<endl;
                cin>>a_materia;
                m.setnombre(a_materia);

                a1.InscipcionMateria(m);
                break;

            case 3:
                cout<<"Ingrese el codigo de la materia"<<endl;
                cin>>d_codigo_m;
                m.setcodigo(d_codigo_m);
                cout<<"Ingrese el nombre de la materia que quiere dar de alta al profesor"<<endl;
                cin>>d_materia;
                m.setnombre(d_materia);

                d1.AnotarMateria(m);
                break;

            case 4:

                a1.CargaNota();
                break;

            case 5:
                char cambio;
                if(r == 'A'){
                    cout << "Que dato del alumno desea editar? ingrese el caracter entre parentesis" << endl;
                    cout << " DNI(d) \n Nombre(n) \n Apellido (a) \n Mail (m) \n Edad (e) \n Carrera (c)" << endl;
                    cin >> cambio;
                    if(cambio == 'd'){
                        unsigned int ndni;
                        cout << "Ingrese nuevo dni " << endl;
                        cin >> ndni;
                        a1.setdni(ndni);
                    }else if(cambio == 'n'){
                        string nnombre;
                        cout << "Ingrese nuevo nombre " << endl;
                        cin >> nnombre;
                        a1.setnombre(nnombre);
                        }else if(cambio == 'a'){
                        string napellido;
                        cout << "Ingrese nuevo apellido " << endl;
                        cin >> napellido;
                        a1.setapellido(napellido);
                    }else if(cambio == 'm'){
                        string nmail;
                        cout << "Ingrese nuevo mail " << endl;
                        cin >> nmail;
                        a1.setmail(nmail);
                    }else if(cambio == 'e'){
                        int nedad;
                        cout << "Ingrese nueva edad " << endl;
                        cin >> nedad;
                        a1.setedad(nedad);
                    }else if(cambio == 'c'){
                        string ncarrera;
                        cout << "Ingrese nueva carrera " << endl;
                        cin >> ncarrera;
                        a1.setcarrera(ncarrera);
                    }
                }else if(r == 'D'){
                    cout << "Que dato del docente desea editar? ingrese el caracter entre parentesis" << endl;
                    cout << " DNI(d) \n Nombre(n) \n Apellido (a) \n Mail (m) \n Titulo (t)" << endl;
                    cin >> cambio;
                    if(cambio == 'd'){
                        unsigned int ndni;
                        cout << "Ingrese nuevo dni " << endl;
                        cin >> ndni;
                        d1.setdni(ndni);
                    }else if(cambio == 'n'){
                        string nnombre;
                        cout << "Ingrese nuevo nombre " << endl;
                        cin >> nnombre;
                        d1.setnombre(nnombre);
                    }else if(cambio == 'a'){
                        string napellido;
                        cout << "Ingrese nuevo apellido " << endl;
                        cin >> napellido;
                        d1.setapellido(napellido);
                    }else if(cambio == 'm'){
                        string nmail;
                        cout << "Ingrese nuevo mail " << endl;
                        cin >> nmail;
                        d1.setmail(nmail);
                    }else if(cambio == 't'){
                        string ntitulo;
                        cout << "Ingrese nuevo titulo " << endl;
                        cin >> ntitulo;
                        d1.settitulo(ntitulo);
                    }
                }
            default:
                    respuesta = 7;
        }

    } while(respuesta == 7 || (respuesta >=1 && respuesta <= 5));








   /* Alumno alumno1(42519955,"selene","saad","selenesaad77@gmail.com",23, "bioinformatica");
    Docente docente1(44608362,"Maximo","Barbero","mbarbero48@gmail.com","Ingeniero");
    Materia matematica(10, 1, "Matematica");
    Materia lengua(10,2,"Lengua");
    Materia geografia(10,3,"Geografia");
    Materia historia(10,4,"Historia");

    docente1.AnotarMateria(matematica);
    docente1.AnotarMateria(lengua);
    docente1.AnotarMateria(geografia);

    docente1.ConsultarMateria();
    Materia progrmacion(0,1236,"prog");
    Materia bioinf(0,1237,"bioinformatica");

    alumno1.InscipcionMateria(progrmacion);
    alumno1.InscipcionMateria(bioinf);*/






    return 0;
    }