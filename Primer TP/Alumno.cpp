//
// Created by Selene on 02/05/2023.
//

#include "Alumno.h"
#include "Materia.h"

Alumno::Alumno(unsigned int dni, string nombre, string apellido, string mail, int edad, string carrera):
        Persona(dni, nombre,apellido, mail), m_edad{edad}, m_carrera{carrera}, M1{0,0,""},
        M2{0,0,""}, M3{0,0,""}, alumno{0,0,""} {}

void Alumno::setedad(int edad) {
    m_edad=edad;
}

void Alumno::setcarrera(string carrera) {
    m_carrera=carrera;
}

int Alumno::getedad() {
    return m_edad;
}

string Alumno::getcarrera() {
    return m_carrera;
}

void Alumno::InscipcionMateria(Materia m1) {
    if(M1.getcodigo() == 0){
        M1 = m1;
        cout<<"El alumno "<<this->getnombre()<<" esta inscripto correctamente en la materia "<<M1.getnombre()<<endl;
        return;
    }else if(M2.getcodigo() == 0){
        M2 = m1;
        cout<<"El alumno "<<this->getnombre()<<" esta inscripto correctamente en la materia "<<M2.getnombre()<<endl;
        return;
    }else if(M3.getcodigo() == 0){
        M3 = m1;
        cout<<"El alumno "<<this->getnombre()<<" esta inscripto correctamente en la materia "<<M3.getnombre()<<endl;
        return;
    }else{
        cout << "El alumno ya tiene asignadas 3 materias" << endl;
        return;
    }
}

void Alumno::CargaNota() {
    float a_nota;
    int a_codigo_m;
    string a_materia;

    cout<<"Ingrese la nota de la materia"<<endl;
    cin>>a_nota;
    alumno.setnota(a_nota);
    cout<<"Ingrese el codigo de la materia"<<endl;
    cin>>a_codigo_m;
    alumno.setcodigo(a_codigo_m);
    cout<<"Ingrese el nombre de la materia que quiere inscribir al alumno"<<endl;
    cin>>a_materia;
    alumno.setnombre(a_materia);


}

Alumno::Alumno() : Persona(0,"","",""),m_edad{0}, m_carrera{""}, M1{0,0,""},
M2{0,0,""}, M3{0,0,""}, alumno(0,0,"") {}
