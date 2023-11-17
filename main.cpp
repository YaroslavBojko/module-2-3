#include <iostream>

int main()
{
    int shiftDuration = 480;
    int timeClient = 2;
    int timeCashier = 4;
    int numberClients = shiftDuration / (timeClient + timeCashier);

    std::cout << "This program will calculate how many customers the cashier will have time to serve per shift." << std::endl;
    std::cout << "---------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Enter shift duration in minutes: " << shiftDuration << std::endl;
    std::cout << "How many minutes does it take for a customer to place an order? " << timeClient << std::endl;
    std::cout << "How many minutes does it take for the cashier to collect the order? " << timeCashier << std::endl;
    std::cout << "---------------We count---------------" << std::endl;
    std::cout << "During a " << shiftDuration << "-minute shift, the cashier will have time to serve " << numberClients << " customers." << std::endl;


}
