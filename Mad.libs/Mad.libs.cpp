// Mad.libs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

int main()
{
    std::string name[] = { "Hieu","Jessie","Toan" ,"Tiffany","Micheal","Tom","Yang","Minh","Tanh","Love" };
    std::string location[] = { "Mexico","France","Spain","VietNam","Houston","Louisiana","Thailand","England","Japan","Korea" };
    std::string subject[] = { "taco" ,"tiramisu" ,"apple empanada" ,"pho noodle" ,"steak's rib" ,"crawfish" ,"pad Thai noodle" ,"fish and chip" ,"sushi" ,"kimchi" };
    for (int i = 0; i <= 9; i++) {
        std::cout << name[i] << " went to the " << location[i] << " to get a " << subject[i] << ".\n";
    }
    std::cout << "\n";
    std::cout << "Give me a proper noun: ";
    std::string noun;
    std::cin >> noun;
    std::cout << "Give me a place: ";
    std::string place;
    std::cin >> place;
    std::cout << "Give me a thing: ";
    std::string thing;
    std::cin >> thing;
   
    std::cout << noun << " went to the " << place << " to get a " << thing << ".\n";
      
 
}


