//exactdecimal.h
#include<iostream>
#include<string>

void CalculateFloat(bool ready, float a, float b) {
    //security check
    if (ready == true) 
    {
        int IntA = a * 100;
        int IntB = b * 100;
        int ResultInt = IntA + IntB;
        std::cout << "0." << ResultInt << std::string(20, '0') << "\n";
    }
    else
    {
        std::cout << "Error, please, set ready = true on the main.cpp before calculating\n";
    }
}