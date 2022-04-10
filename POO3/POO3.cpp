
#if 0
class MiString
{
    char* m_string; // dinámicamente asignaremos nuestro string aquí
    int m_tamanho; // tenemos que mantener la pista del tamaño del string
};



class IntArray
{
public:
    int m_array[10];
};

int main()
{
    IntArray array;
    array.m_array[16] = 2; // índice de array inválido, 
                           //sobrescribimos memoria que no nos pertenece
}



#include <iterator> // Para std::size()

class IntArray
{
private:
    int m_array[10]; // usuarios ya no pueden acceder directamente a este array

public:
    void setValor(int indice, int valor)
    {
        // Si el índice es inválido, no hace nada
        if (indice < 0 || indice >= std::size(m_array))
            return;

        m_array[indice] = valor;
    }
};




#include <iostream>

class Cualquiera
{
public:
    int m_valor1;
    int m_valor2;
    int m_valor3;
};

int main()
{
    Cualquiera cualquiera;
    cualquiera.m_valor1 = 5;
    std::cout << cualquiera.m_valor1 << '\n';
}



#include <iostream>

class Cualquiera
{
private:
    int m_valor1;
    int m_valor2;
    int m_valor3;

public:
    void setValor1(int valor) { m_valor1 = valor; }
    int getValor1() { return m_valor1; }
};

int main()
{
    Cualquiera cualquiera;
    cualquiera.setValor1(5);
    std::cout << cualquiera.getValor1() << '\n';
}



#include <iostream>

class Cualquiera
{
private:
    int m_valor[3]; // nota: hemos cambiado la implementación de esta clase

public:
    // Tenemos que actualizar cualquier función miembro para reflejar la nueva implementación
    void setValor1(int valor) { m_valor[0] = valor; }
    int getValor1() { return m_valor[0]; }
};

int main()
{
    // Pero nuestro programa aún funciona bien
    Cualquiera cualquiera;
    cualquiera.setValor1(5);
    std::cout << cualquiera.getValor1() << '\n';
}




class MiString
{
private:
    char* m_string; // dinámicamente asignamos nuestro string aquí
    int m_tamanho; // necesitamos mantener la pista del tamaño del string

public:
    int getTamanho() { return m_tamanho; } // accedemos a la función para obtener el valor de m_tamanho
};

#endif





class Fecha
{
private:
    int m_dia;
    int m_mes;
    int m_anho;

public:
    int getDia() { return m_dia; } // getter para dia
    void setDia(int dia) { m_dia = dia; } // setter para dia

    int getMes() { return m_mes; } // getter para mes
    void setMes(int mes) { m_mes = mes; } // setter para mes

    int getAnho() { return m_anho; } // getter para anho
    void setAnho(int anho) { m_anho = anho; } // setter para anho
};







#include <iostream>

class Foo
{
private:
    int m_valor{ 4 };

public:
     int& getValor() { return m_valor; } // devuelve una referencia no constante
};

int main()
{
    Foo f; // f.m_valor se inicializa con 4
    std::cout << f.getValor(); // imprime 4
    f.getValor() = 5;          // usa la referencia no-const para asignar valor 5 a m_valor
    std::cout << f.getValor(); // imprime 5

    return 0;
}



#if 0
#endif