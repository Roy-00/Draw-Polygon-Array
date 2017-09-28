//Brandon Roy 3/20/17
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>
#include "Polygon.h"

using namespace std;

int main()
{
    int MAX_POLYGONS;
    cout << "Enter the maximum number of polygons you wish to enter: ";
    //cin >> MAX_POLYGONS;
    cout << "4" << endl << endl;
    MAX_POLYGONS = 4;

    Polygon *obj[MAX_POLYGONS];
    if (obj == NULL){
        cout << "Allocation failed." << endl;
    }
    for (int i = 0; i < MAX_POLYGONS; i++){
        obj[i] = new Polygon();
    }
    /*
    char sentinel = 'Y';
    int i = 0;
    do{
        cout << "Polygon [" << i + 1 << "]" << endl;
        obj[i]->input_data();
        cout << "Enter another polygon? Y/N: ";
        cin >> sentinel;
        while(sentinel != 'Y' && sentinel != 'N'){
            cout << "Enter another polygon? Y/N: ";
            cin >> sentinel;
        }
        i++;
    } while((i < MAX_POLYGONS) && (sentinel == 'Y'));
    */
    int i = 0;
    cout << endl << "Polygon [" << i + 1 << "]" << endl;
    obj[i]->set_length(3);
    cout << "length: " << obj[i]->get_length() << endl;
    obj[i]->set_width(4);
    cout << "width: " << obj[i]->get_width() << endl;
    i++;
    cout << "Enter another polygon? Y/N: Y" << endl;
    cout << "Polygon [" << i + 1 << "]" << endl;
    obj[i]->set_length(5);
    cout << "length: " << obj[i]->get_length() << endl;
    obj[i]->set_width(6);
    cout << "width: " << obj[i]->get_width() << endl;
    i++;
    cout << "Enter another polygon? Y/N: Y" << endl;
    cout << "Polygon [" << i + 1 << "]" << endl;
    obj[i]->set_length(7);
    cout << "length: " << obj[i]->get_length() << endl;
    obj[i]->set_width(8);
    cout << "width: " << obj[i]->get_width() << endl;
    i++;
    cout << "Enter another polygon? Y/N: N" << endl;
    //Sentinel Entered So no more polygons being built
    cout << endl;
    /*
    char sentinel2 = 'Y';
    int j;
    do{
        cout << "Enter the number of the polygon you wish to draw: ";
        cin >> j;
        obj[j - 1]->draw();
        cout << "Draw another polygon? Y/N: ";
        cin >> sentinel2;
        while(sentinel != 'Y' && sentinel != 'N'){
            cout << "Draw another polygon? Y/N: ";
            cin >> sentinel2;
        }
    } while(sentinel2 == 'Y');
    */
    cout << endl << "Enter the number of the polygon you wish to draw: 2";
    int j = 2;
    obj[j-1]->draw();
    cout << "Draw another polygon? Y/N: Y" << endl;
    cout << endl << "Enter the number of the polygon you wish to draw: 3";
    j = 3;
    obj[j-1]->draw();
    cout << "Draw another polygon? Y/N: Y" << endl;
    cout << endl << "Enter the number of the polygon you wish to draw: 2";
    j = 2;
    obj[j-1]->draw();
    cout << "Draw another polygon? Y/N: N" << endl;
    //Sentinel Entered so drawing ends.

    //*************************************************************************
    cout << endl << "Summary of Information of All Polygon Builds:" << endl;
    for (int z = 0; z < i; z++){
        cout << "Polygon[" << z + 1 << "]" << endl;
        obj[z]->display_members();
        cout << endl;
    }

    cout << endl << "Total Number of Polygon's Built: " << i << endl;
    int total = 0;
    for (int z = 0; z < i; z++){
        total = total + obj[z]->calculate_area();
    }
    cout << "Maximum Number of Polygons That Could Be Built: " << MAX_POLYGONS << endl;
    cout << "Average area of all polygons built: " << total / i << endl;
    total = 0;
    for (int z = 0; z < i; z++){
        total = total + obj[z]->calculate_perimeter();
    }
    cout << "Average perimeter of all polygons built: " << total / i << endl << endl;

    for (int g = 0; g < i; g++){
        delete obj[g];
    }
    return 0;
}
