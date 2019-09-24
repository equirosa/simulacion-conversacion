#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class Persona{
private:
    std::string nombre, nacionalidad;
    int edad;
public:
    Persona(std::string nombre, std::string nacionalidad, int edad);
    Persona();
    std::string saludar(Persona);
    std::string devolverSaludo(std::string saludo);
};

#endif // PERSONA_H
