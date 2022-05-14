#include<cassert>
//#include<iostream>
//#include<iomanip>
#include<string>
using namespace std::literals;

int main()
{
	assert(2==1+1);
    /*
	Tipo de dato Bool
    Verdadero o  falso.
    */
	assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);
    assert(true or true and false);
    assert(false != true and true or false);
    assert(true == true);
    assert(false != (5 + 5.5 == 10));
    /*
    Tipo de dato Double
    Números Reales
    No es recomendable usar la comparación mediante igualdad con un tipo Double
    */
    assert(2.0==1.0+1.0);
    assert(0.1==1.0/10.0);
    assert(1==1.0);
    assert(2.0==1+1.0);
    assert(2==1+1.0);
    assert(0.0 - 1.0 == -1.0); //el resto de la izq es binario mientras que el de la derecha es de negación
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); no es preciso
    assert(13.5 >= 6.7);
    assert(4.5 == 1.5 * 3.0);
    assert(6.8 == 17 / 2.5);
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1); //f = float
    assert(0.9 != 0.3 + 0.3 + 0.3);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';

    /*
    Tipo de dato Int
    Números enteros
    */
    assert(0 == -1 + 1);
    assert(6 != 7 - 2);
    assert(5 >= -5);
    assert(-10 <= 9);
    assert(9 == 3 * 3);
    assert(-5 == 15 / -3);
    assert(1 == 11 % 2);
    /*
    Tipo de dato Unsigne
    Números naturales
    */
   assert(0u == 0u);
   assert(0u == 15u % 3u);
   assert(5u == 3u + 2u);
   assert(9999 == 9998 + 1);
   assert(1400 <= 1500);
   assert(8000 >= 1000);
   
    /*
    //Tipo de dato String
    Compuesto, expresa carateres
    Diferencia con CHAR, se expresa entre comillas
    */
    assert("pacheco"s=="pa"s+"checo"s);
    assert("pacheco"s.length()==7); //length("pacheco") función miembro
    assert("A"s == "A"s );
    assert("aaa"s >= "aa"s);
    assert("1" <= "2");
    assert("AA"s < "AB"s);
    assert('A'== 65);
    assert("carpa" == "carpa");

{
    char s []= "hola";
    char t []= "hola";
    assert(s != t);
}

}