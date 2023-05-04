//
// Created by Selene on 02/05/2023.
//

#ifndef PRIMER_TP_MATERIA_H
#define PRIMER_TP_MATERIA_H
#include <iostream>
using namespace std;


class Materia {
private:
    float m_nota;
    int m_codigo;
    string m_nombre;
public:
    Materia();
    Materia(float nota, int codigo, string nombre);
    void setnota(float);
    void setcodigo(int);
    void setnombre(string);
    float getnota();
    int getcodigo();
    string getnombre();
};


#endif //PRIMER_TP_MATERIA_H
