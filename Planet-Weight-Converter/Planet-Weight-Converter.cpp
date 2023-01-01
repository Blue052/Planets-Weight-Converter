

#include <iostream>

int main()
{
    double Earth_weight = 0.0;
    int Planet_number = 0;
    
    std::cout << "Please input a earth weight ";
    std::cin >> Earth_weight; 

    std::cout << "Please pick a number corresponding to the given planet(or star/dwarf planet/etc...) you would like to convert a weight to:\n 1: Mars, 2: Jupiter, 3: Saturn, 4: Venus, 5:";
    std::cin >> Planet_number;

    switch (Planet_number) {
    case 1: std::cout << "Weight on Mars is " << Earth_weight * 0.38;
        break;
    case 2: std::cout << "Weight on Jupiter is " << Earth_weight * 2.53;
        break;
    case 3: std::cout << "Weight on Saturn is " << Earth_weight * 1.08;
        break;
    case 4: std::cout << "Weight on Venus is " << Earth_weight * 0.91;
        break;
    } 


}


 
