
#include <iostream>
#include "Login.h"
#include <chrono>
#include <thread>
#include "Md5.h"
int main() {

    std::cout << "\n\tIngrese los datos del administrador principal: " << std::endl;
    std::string user_admin; 
    std::string password_admin; 
    std::cout << std::endl;
	std::cout<<"Crear usuario: ";
	cin>>user_admin;
	std::cout<<"Contrasenia: ";
	password_admin=Utils::Validation::read_string("Ingrese la contrasenia: ", Utils::InputType::PASSWORD);
    Utils::Generator::generate_admins(user_admin, password_admin);
	std::cout << "\n\n\tAdministrador creado con exito\n" << std::endl;
       
    
    
    return 0;
}