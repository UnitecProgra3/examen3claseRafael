#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <fstream>


using namespace std;

void ejercicio2(int a, int b, int c, int d);
void ejercicio3(string e, string f, string g, string h);
void ejercicio4(int i, int j, int k, int l);

void ejercicio1()
{
    vector<int> mi_vector;

    cout<<endl<<"Ejercicio 1"<<endl<<"___________"<<endl;

    mi_vector.push_back(0);
    mi_vector.push_back(1);
    mi_vector.push_back(1);
    mi_vector.push_back(2);
    mi_vector.push_back(3);
    mi_vector.push_back(5);
    mi_vector.push_back(8);
    mi_vector.push_back(13);
    mi_vector.push_back(21);
    mi_vector.push_back(34);

    int a,b,c,d;
    a=b=c=d=-1;

    //-Asignar los siguientes valores:
    //	a = mi_vector en la posicion 0
    //	b = mi_vector en la posicion 2
    //	c = mi_vector en la posicion 4
    //	d = mi_vector en la posicion 6

    //MODIFICAR
     a=mi_vector[0];
     b= mi_vector[2];
     c= mi_vector[4];
     d= mi_vector[6];
    //FIN MODIFICAR

    cout<<"Valor de mi_vector en la posicion 0: "<<a<<endl;
    cout<<"Valor de mi_vector en la posicion 2: "<<b<<endl;
    cout<<"Valor de mi_vector en la posicion 4: "<<c<<endl;
    cout<<"Valor de mi_vector en la posicion 6: "<<d<<endl;

    ejercicio2(a,b,c,d);
}


void ejercicio2(int a, int b, int c, int d)
{
    cout<<endl<<"Ejercicio 2"<<endl<<"___________"<<endl;

    list<string> mi_lista;
    mi_lista.push_back("la");
    mi_lista.push_back("amistad");
    mi_lista.push_back("felicidad");
    mi_lista.push_back("es");
    mi_lista.push_back("tenia");
    mi_lista.push_back("gato");
    mi_lista.push_back("fraternidad");
    mi_lista.push_back("un");
    mi_lista.push_back("magica");
    mi_lista.push_back("arbol");

    string e,f,g,h;
    e=f=g=h="";

    //-Asignar los siguientes valores:
    //	e = mi_lista en la posicion a
    //	f = mi_lista  en la posicion b
    //	g = mi_lista en la posicion c
    //	h = mi_lista en la posicion d

    //MODIFICAR
     list<string>::iterator mi_iterador;
    mi_iterador=mi_lista.begin();
    for (int i=0; i<mi_lista.size();i++){
        if (i==a){
        e=*mi_iterador;
        }else if(i==b){
        f=*mi_iterador;
        }else if (i==c){
        g=*mi_iterador;
        }else if (i==d){
        h=*mi_iterador;
        }

        mi_iterador++;
    }





    //FIN MODIFICAR

    cout<<"Valor de mi_lista en la posicion a: "<<e<<endl;
    cout<<"Valor de mi_lista en la posicion b: "<<f<<endl;
    cout<<"Valor de mi_lista en la posicion c: "<<g<<endl;
    cout<<"Valor de mi_lista en la posicion d: "<<h<<endl;

    ejercicio3(e,f,g,h);
}

void ejercicio3(string e,string f,string g,string h)
{
    cout<<endl<<"Ejercicio 3"<<endl<<"___________"<<endl;

    map<string,int> mi_mapa;
    mi_mapa["la"]=5;
    mi_mapa["amistad"]=0;
    mi_mapa["felicidad"]=1;
    mi_mapa["es"]=10;
    mi_mapa["tenia"]=18;
    mi_mapa["gato"]=14;
    mi_mapa["fraternidad"]=19;
    mi_mapa["un"]=6;
    mi_mapa["magica"]=15;
    mi_mapa["arbol"]=2;

    int i,j,k,l;
    i=j=k=l=-1;

    i = mi_mapa[e];
    j = mi_mapa[f];
    k = mi_mapa[g];
    l = mi_mapa[h];
     //-Asignar los siguientes valores:
    //	i = mi_mapa en la posicion e
    //	j = mi_mapa  en la posicion f
    //	k = mi_mapa en la posicion g
    //	l = mi_mapa en la posicion h

    //MODIFICAR


    //FIN MODIFICAR

    cout<<"Valor de mi_mapa en la posicion e: "<<i<<endl;
    cout<<"Valor de mi_mapa en la posicion f: "<<j<<endl;
    cout<<"Valor de mi_mapa en la posicion g: "<<k<<endl;
    cout<<"Valor de mi_mapa en la posicion h: "<<l<<endl;

    ejercicio4(i,j,k,l);
}

void ejercicio4(int i,int j,int k,int l)
{
    cout<<endl<<"Ejercicio 4"<<endl<<"___________"<<endl;
    ifstream in("archivo",ios::binary);

    int *m=new int;
    int *n=new int;
    int *o=new int;
    int *p=new int;

    //-Asignar los siguientes valores:
    //	m = el char* en el achivo en la posicion i
    //	n = el char* en el achivo en la posicion j
    //	o = el char* en el achivo en la posicion k
    //	p = el char* en el achivo en la posicion l

    //MODIFICAR
     in.seekg(i);
     in.read((char*)m,4);
     in.seekg(j);
     in.read((char*)n,4);
     in.seekg(k);
     in.read((char*)o,4);
    in.seekg(l);
     in.read((char*)p,4);
    //FIN MODIFICAR

    cout<<"Char* en el archivo en la posicion i: "<<*m<<endl;
    cout<<"Char* en el archivo en la posicion j: "<<*n<<endl;
    cout<<"Char* en el archivo en la posicion k: "<<*o<<endl;
    cout<<"Char* en el archivo en la posicion l: "<<*p<<endl;
}

int main()
{
    ejercicio1();

    return 0;
}

