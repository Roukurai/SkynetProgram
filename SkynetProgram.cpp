#include <iostream>
#include <string>

extern int robotID;
extern int fechaDia;
extern int fechaMes;
extern int fechaA;
class terminatorOrden{
public:
    int robotID;
    std::string robotModelo;
    int robotCantidad;
    std::string fechaOrden;
    std::string fechaEntrega;


};

int main (){
    robotID=0;
    while (true){
        std::cout << "Ingrese el dia de hoy" << std::endl;
        std::cin >> fechaDia;
        std::cout << "Ingrese el mes de hoy" << std::endl;
        std::cin >> fechaMes;
        std::cout << "Ingrese el año de hoy" << std::endl;
        std::cin >> fechaA;
        std::cout<< "¿Que accion desea realizar?" << std::endl;
        std::cout << "1. Agregar orden" << std::endl;
        std::cout << "2. Mostrar ordenes registradas." << std::endl;
        std::cout << "0. Salir." << std::endl;

        int accion;
        std::cin >> accion;
        if (accion == 1){
            std::cout << "Ingrese Modelo" << std::endl;
            std::string ingModelo;
            std::cin >>ingModelo;
            std::cout << "Ingrese cuantas unidades" << std::endl;
            int ingCantidad;
            std::cin >> ingCantidad;
            crearOrden(ingModelo,ingCantidad);
        }else if (accion == 2){
                
        }else if (accion == 0){
            return 0;
        }else{
            std::cout << "Opcion no encontrada" << std::endl;
        };


    };

};

int crearOrden(std::string modelo,int cantidad){
    std::string entrega;
    terminatorOrden orden;
    orden.robotID=robotID;
    robotID+=1;
    orden.fechaOrden= std::to_string(fechaDia) + "/" + std::to_string(fechaMes) + "/"+ std::to_string(fechaA);
    orden.fechaEntrega=entrega;
    int meses;
    int a;
    int dias;
    a = cantidad % 365;
    if (dias > 0){fechaA = fechaA + a;};
    meses = cantidad % 30;
    if (dias > 0){fechaMes = fechaMes + meses;};
    dias = cantidad % 1;
    if (dias > 0){fechaA = fechaDia + dias;};
    orden.robotCantidad=cantidad;
    orden.robotModelo=modelo;
    return 0;
};