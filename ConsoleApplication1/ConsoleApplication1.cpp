#include <iostream> 
using namespace std;
//1) ЗАДАНИЕ - придумать 3 ситуации с агрегированием
/*
Дерево-листик, банка-кола, ящик-ручка
*/


//2) ЗАДАНИЕ -  написать код реализующий АГРЕГИРОВАНИЕ 

// Кола
class Petal
{
    string color; // У колы есть цвет
public:
    Petal(string _color) {
        color = _color;
    }

    string getColor() {
        return color;
    }
};

// Появилась банка и только потом пявилачь кола
class Can // Первый тип
{
public:
    Cola* cola;// Реализация АГРЕГИРОВАНИЯ

    void GrowPetal(Cola* _cola)
    {
        can = _cola;
        cout << "Сделали колу нового цвета - " << _cola->getColor() << endl;
    }

    void PlugPetal()
    {
        cola = nullptr;
        cout << "Колу разлили";
    }
};

int main()
{
    setlocale(0, "");

    Can* can = new Can;

    Cola* cola = new Cola("Лфйм");

    can->GrowCola(cola);

    can->PlugCola();

    delete cola;
}