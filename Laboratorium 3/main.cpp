#include <iostream>
#include "matrix.h"
//#include "sqlite3.h"
//using namespace std;

int main()
{
    std::string path = "C:\\Users\\zuza2\\Desktop\\Plik.txt";

    std::cout<<"\tProgram o macierzach "<<std::endl<<
    "1. Przy korzystaniu z funkcji set i get nalezy podac numer elemntu tak jakby pierwszy element to byl 1"<<std::endl<<std::endl;




    Matrix m1(3,4);
    Matrix m2(3);
    Matrix m3(5);
    Matrix m4(3);
    m1.set (1,1,34.5);
    m1.set (1,2,34.5);
    m1.set (2,3,34.5);
    m2.add (m1);
    m1.print();
    m2.print();

    m3.substract (m2);
    m2.print();
    m3.print();

    m2.multiply(m4);
    m2.print();
    m1.print();
    m3.print();


    //std::string nazwa = "Plik.txt";
    //m3.store(nazwa, path);



    //Matrix m5(path);
    //m5.print();
    //œcie¿ka do wklejenia przez u¿ytkownika
    std::cout<<std::endl<<m1.get(1,1)<<std::endl;
    system("PAUSE");
}
