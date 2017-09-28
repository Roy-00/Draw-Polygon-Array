//Brandon Roy 3/20/17
#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


class Polygon
{
    public:
        Polygon();
        Polygon(int length, int width);
        ~Polygon();

        int get_length();
        int get_width();
        //int get_MAX_POLYGONS();

        void set_length(int length);
        void set_width(int width);
        //void set_MAX_POLYGONS(int MAX_POLYGONS);

        void input_data();
        //void input_MAX_POLYGONS();
        int calculate_area();
        int calculate_perimeter();
        void display_members();
        void draw();

    private:
        int length, width;
        int MAX_POLYGONS;
};

#endif // POLYGON_H
