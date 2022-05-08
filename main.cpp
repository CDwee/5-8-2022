// Started at 1:47 5-8-2022

// Section 11
// Function Overloading
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
    }
    
void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}

int main() {
    print(100);     // int
    print('A');     // character is always promoted to int should print 65 ASCLL ('A')
    
    print(123.5);   // double
    print(123.3F);  // Float is promoted to double
    
    print("C-style string");    // C-style string is converted to a C++ string

    string s {"C++ string"};
    print(s);   // C++ string
    
    print("C-style string", s);   // First argument is converted to a C++ string
    
    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    cout << endl;
    return 0;
}

/////////////////////////////
// Coding Exercise
#include <iostream>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPE BELOW THIS LINE----

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);

//----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void modify_grocery_list() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    

    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7, 11);

    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

void print_grocery_list(int apples, int oranges, int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                     //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}



///////////////////////////////
// Coding Exercise
#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

int find_area(int);
double find_area(double, double);


//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void area_calc() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    int square_area = find_area(2);
    double rectangle_area = find_area(4.5, 2.3);
    
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----


int find_area(int side_length) {
    return side_length * side_length;
}

double find_area(double length, double width) {
    return length * width;
}

// Ended at 3:45 5-8-2022
