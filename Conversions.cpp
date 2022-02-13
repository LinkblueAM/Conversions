// tester2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Declaring constants to be used to calculate things later on
    double radius = 0;
    double meters = 0;
    const double  PI = 3.1415926595358;
    const double FEET = 3.280839895;
    const double FURLONG = 0.0049709695;
    const double SPEED_LIGHT = 299792458;


    // Printing out place to enter the radius as well as provide input to user
    std::cout << "CIRCLE AREA" << std::endl;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    // formula to calculate area as well as print out the area depending on the radius 
    double area = PI * radius * radius;
    std::cout << "a circle with radius =  " << radius << "   has an area = " << area << std::endl;

    //empty line to seperate the circle area and distance printouts
    std::cout << "" << std::endl;

    //Printing out the distance and providing input for user to enter meters
    std::cout << "----DISTANCE--- " << std::endl;
    std::cout << "Enter distance in meters: ";
    std::cin >> meters;


    double feet_convert = meters * FEET;
    // floor_feet gets rid of the decimal 
    int floor_feet = feet_convert;

    // subtract feet_convert and floor_feet to get decimal in order to convert to inch
    double inch_convert = ((feet_convert - floor_feet) * 12);

    //Printout statment gives the converted meters to feet and inches
    std::cout << meters << " meters = " << floor_feet << "' " << inch_convert << "\"" << std::endl;

    // Converting meters into furlong by declaring its equation when given meters
    double convert_furlong = meters * FURLONG;
    std::cout << meters << " meters  = " << convert_furlong << " furlong" << std::endl;

    // Converting meters into the time it takes for light to travel 
    double convert_speed_light = meters / SPEED_LIGHT;
    std::cout << "It takes " << convert_speed_light << " for light to travel " << meters << " m in a vacuum" << std::endl;




    return 0;
}