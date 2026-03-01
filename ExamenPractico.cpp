#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Variables para almacenar los datos
    std::string nombreCliente;
    double precioProducto;
    int cantidadComprada;

    // Solicitar datos al usuario
    std::cout << "Ingrese el nombre del cliente: ";
    std::getline(std::cin, nombreCliente);
    
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precioProducto;
    
    std::cout << "Ingrese la cantidad comprada: ";
    std::cin >> cantidadComprada;

    // Calcular subtotal, IVA y total
    double subtotal = precioProducto * cantidadComprada;
    double iva = subtotal * 0.12;
    double total = subtotal + iva;

    // Mostrar resultados con formato
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nombre del cliente: " << nombreCliente << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "IVA (12%): $" << iva << std::endl;
    std::cout << "Total a pagar: $" << total << std::endl;

    // Imprimir nombre del estudiante
    std::cout << "Desarrollado por: Rodrigo Adrian Barrios Monterroso" << std::endl;

    return 0;
}