#include <string>
using namespace std;

template <class T>
class Nodo
{
public:
    T info;
    int veces;
    Nodo *sig;
    Nodo() { sig=NULL; veces = 1; }
    Nodo (T dato) { info = dato; sig = NULL; veces = 1; }
};

class Lista
{
    public:
        Lista () { inicio = NULL; }
        ~Lista()
    {
        Nodo<string> *aux = inicio;
        while (aux!=NULL)
        {
            inicio = aux->sig;
            delete aux;
            aux = inicio;
        }
    }
        void AgregaInicio (string);
        bool Existe(string, Nodo<string>*&aux );
        int Cantidad();
       void TablaHash(Lista arr[]);
       bool vacia();
       void llenaTabla(string arr[],int &pos);
	   string getInicio() { return inicio->info; }
    private:
        Nodo<string> *inicio;
};

void Lista::llenaTabla(string arr[], int &pos)
{
    Nodo<string>* aux = inicio;
    while (aux!=NULL)
    {
        if (pos<10)
            {arr[pos] = aux->info;
            pos++;}
        aux = aux->sig;
    }
}

bool Lista::vacia()
{
    return (inicio==NULL);
}

void Lista::TablaHash(Lista arr[])
{
    Nodo<string> * aux = inicio;
    int pos;
    while (aux!=NULL)
    {
        pos = aux->veces;
        arr[pos].AgregaInicio(aux->info);
        aux = aux->sig;
    }
}


int Lista::Cantidad()
{
    int x=0;
    Nodo<string>*aux = inicio;
    while (aux!=NULL)
    {
        x++;
        aux = aux->sig;
    }
    return x;
}

bool Lista::Existe(string compara, Nodo<string>* &aux)
{
    //Nodo<string>* aux = inicio;
    while (aux!=NULL)
    {
        if (aux->info==compara)
            return true;
        aux = aux->sig;
    }
    return false;
}

void Lista::AgregaInicio (string dato)
{
    Nodo<string>* aux = inicio;
    if (Existe(dato,aux))
        aux->veces++;
    else
        {
        Nodo<string>* nuevo = new Nodo<string>(dato);
        if (inicio==NULL)
            inicio = nuevo;
        else
            {
                nuevo->sig = inicio;
                inicio = nuevo;
            }
        }
}



