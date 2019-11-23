//
//  main.cpp
//  Circumference
//
//  Created by Sean Morrow on 11/22/19.
//  Copyright © 2019 Sean Morrow. All rights reserved.
//
#include <string>
#include <iostream>
using namespace std;

double inputRadius (){  // inputs the radius of the circle
   double radius;
   bool num = false;
   bool notNeg = false;
   cout << "This program calculates the circumference of a cirscle" << endl;
   cout << "Please enter the radius of the circle desired"<< endl;
   cin >> radius;
   while (!num || !notNeg){
    // Check that input is numeric, prompt for number if not
      if (cin.fail()){
         cin.clear();
         cin.ignore(999,'\n');
         cout << "Please only enter numbers "<<endl;
         cout << "Please enter the radius of the circle desired"<< endl;
         
         cin >> radius;
      }
      else{
         num = true;
      }
    // Check that input is non-negative, prompt for non-negative number if not
      if (radius < 0){
         cout << " Please enter a non-negative number "<< endl;
         cout <<"Please enter the radius of the circle desired"<< endl;
         cin >> radius;
      }
      else {
         notNeg = true;
      }
   }
   return radius;
}

double calcCircumference(double r, double PI){   // calculates the circumference of the circle
   double c;
   c = 2 * PI * r;
   return c;
}

void displayResults(double r, double c){  // displays the input radius and the circumference
   cout << "The circumference of a circle of radius "<< r << " is "<< c << endl;
   return;
}

int main() {
   double radius;
   double circumference;
   const double PI = 3.14159265;
   
   radius = inputRadius () ;
   circumference = calcCircumference(radius, PI);
   displayResults( radius, circumference);
   
   return 0;
}
