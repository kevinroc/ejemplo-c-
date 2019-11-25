*Un vendedor desea calcular su comisiÃ³n total sobre la venta de varios
artÃ­culos. Al vendedor le corresponde el 5% de su comisiÃ³n sobre artÃ­culos
cuyo precio es menor de $100 y el 7.5 % de comisiÃ³n sobre aquellos artÃ­culos
cuyo precio es de $100 o mÃ¡s. Suponga que el vendedor hizo N ventas*/
#include <iostream>
#include <string.h>


using namespace std;
int main () {
    int venta;
    double precio,comicion,total=0.0;
    cout<<"ingrese la cantidad de articulos vendidos : ";
    cin>>venta;
    for(int i = 0 ;i<venta;i++){
        cout<<"articulo "<<i+1<<" precio"<<endl;
        cin>>precio;    
        if(precio<100){
            comicion=precio*0.05;
        }else{
            comicion=precio*0.075;
        }
        total+=comicion;
    }
    
    cout<<"tu comion en total es : "<<total;


    return 0;
}