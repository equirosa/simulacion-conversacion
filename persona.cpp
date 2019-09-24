#include "persona.h"
#include <string>

Persona::Persona(){} //Constructor por default.

Persona::Persona(std::string nombre, std::string nacionalidad, int edad)
{
    this->nombre=nombre;
    this->nacionalidad=nacionalidad;
    this->edad=edad;
}

Persona::saludar(Persona persona)
{
    persona.devolverSaludo(nombre);

    return "Hola! Soy " << this->nombre << "\n ¿y tú?";
}
