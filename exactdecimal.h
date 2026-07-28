//exactdecimal.h
#include<iostream>
#include<string>

void CalculateFloat(bool ready, float a, float b) {
    //bool check
    if (ready == true) 
    {
        //converting the floats into integers
        int IntA = a * 100;
        int IntB = b * 100;
        //adding the integers
        int ResultInt = IntA + IntB;
        //printing the result
        std::cout << "0." << ResultInt << std::string(20, '0') << "\n";
    }
    else
    {
        std::cout << "Error, please, set ready = true on the main.cpp before calculating\n";
    }
}
