#include <iostream>
#include <vector>

using namespace std;

class Personaje
{
public:
    string tipo;

    Personaje()
    {
        tipo = "Personaje";
    }

    virtual void atacar() = 0;
};

class Guerrero : public Personaje
{
public:

    Guerrero()
    {
        tipo = "Guerrero";
    }

    void atacar()
    {
        cout<<"WRAAAH!"<<endl;
    }
};

class Mago : public Personaje
{
public:

    Mago()
    {
        tipo = "Mago";
    }

    void atacar()
    {
        cout<<"Prrrin!"<<endl;
    }
};

int main()
{
    vector<Personaje*> personajes;
    personajes.push_back(new Mago());
    personajes.push_back(new Guerrero());
    personajes.push_back(new Mago());


    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->atacar();
    }

    return 0;
}