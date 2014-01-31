//
//  main.cpp
//  KendriCalc
//
//  Created by AJ Schrier on 1/30/14.
//  Copyright (c) 2014 AJ Schrier. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



// Structs

struct Pool
{
    double width, length, depth;
};

struct Liquor
{
    string name;
    double cost;
};



// Functions


double PoolSize(double w, double l, double d)
{
    return w*l*d;
};

double PoolGallons(double size)
{
    return size*7.4805;
};

void Linebreak()
{
    cout << endl << "+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl << endl;
};

double LiquorGallonCost(double cost)
{
    return cost*5.04721671;
};



// Main


int main(int argc, const char * argv[])
{
    Pool p;
    Liquor l;
    
    cout << "Enter the width of the pool (in feet): ";
    cin >> p.width;
    
    cout << "Enter the length of the pool (in feet): ";
    cin >> p.length;
    
    cout << "Enter the depth of the pool (in feet): ";
    cin >> p.depth;
    
    double poolsize = PoolSize(p.width, p.length, p.depth);
    double poolgallons = PoolGallons(PoolSize(p.width, p.length, p.depth));
    
    cout << endl << "The capacity of the pool is " << poolsize << " cubic feet." << endl;
    cout << "The pool will hold " << poolgallons << " gallons of water." << endl;
    
    Linebreak();
    
    cout << "Enter the name of the liquor to fill the pool (no spaces): ";
    cin >> l.name;
    
    cout << "Enter the cost of one 750ml bottle of " << l.name << " : ";
    cin >> l.cost;
    
    double liquorgalloncost = LiquorGallonCost(l.cost);
    
    long double totalcost = poolgallons * liquorgalloncost;
    
    cout << "The cost of one gallon of " << l.name << " is " << liquorgalloncost << "." << endl;
    cout << "The cost to fill the swimming pool with " << l.name << " is " << totalcost
    << "." << endl;
    
    Linebreak();
    
    
}

