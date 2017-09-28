//Brandon Roy 3/20/17
#include "Polygon.h"

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

Polygon::Polygon(){
    length = 0;
    width = 0;
    cout << "Default Constructor has been activated." << endl;
}
Polygon::Polygon(int length, int width){
    this->length = length;
    this->width = width;
}
Polygon::~Polygon(){
    cout << "Destructor has been activated. You are terminated." << endl;
}
//***************************************************************************************************************
int Polygon::get_length(){
    return length;
}
int Polygon::get_width(){
    return width;
}
/*int Polygon::get_MAX_POLYGONS(){
    return MAX_POLYGONS;
}*/
//***************************************************************************************************************
void Polygon::set_length(int length){
    this->length = length;
}
void Polygon::set_width(int width){
    this->width = width;
}
/*void Polygon::set_MAX_POLYGONS(int MAX_POLYGONS){
    this->MAX_POLYGONS = MAX_POLYGONS;
}*/
//***************************************************************************************************************
void Polygon::input_data(){
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}
/*void Polygon::input_MAX_POLYGONS(){
    cout << "Enter maximum number of polygons you wish to enter: ";
    cin >> MAX_POLYGONS;
}*/
int Polygon::calculate_area(){
    return length * width;
}
int Polygon::calculate_perimeter(){
    return ((2 * width) + (2 * length));
}
void Polygon::display_members(){
    cout << "Displaying Pertinent data members: " << endl;
    cout << "Length: " << get_length() << endl;
    cout << "Width: " << get_width() << endl;
    cout << "Area: " << calculate_area() << endl;
    cout << "Perimeter: " << calculate_perimeter() << endl;
}
void Polygon::draw(){
    cout << endl;
    string draw_arr[get_length()][get_width()];

    for (int i = 0; i < get_width(); i++){
        for (int j = 0; j < get_length(); j++){
            draw_arr[j][i] = "*";
        }
    }

    for (int i = 0; i < get_width(); i++){
        for (int j = 0; j < get_length(); j++){
            cout << draw_arr[j][i];
        }
        cout << endl;
    }
    cout << endl;
}
