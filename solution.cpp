/******************************************************************************
Program for finding patio length and total length with light sag
*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //initializing variable
    
    double opposite;
    double perpendicular;
    double hyp;
    
    //gather given lengths
    
    cout << "Enter patio lengths in feet ";
    cin >> opposite;
    cin >> perpendicular;
    
    //calculate hypotenuse with given lengths
    
    hyp = sqrt(opposite * opposite + perpendicular * perpendicular);
    cout << "Total length calculated = " << opposite + perpendicular + perpendicular + hyp + hyp << " feet." << endl;
    
    //calculate lengths with sag
    
    opposite *= 1.07;
    perpendicular *= 1.07;
    hyp *= 1.07;
    
    //print out new lengths and total lengths
    
    cout << "The length of the run opposite the house including sag = " << opposite << " feet." << endl;
    cout << "The length of the two perpendicular runs including sag = " << perpendicular << " feet each." << endl;
    cout << "The length of the two diagonal runs including sag = " << hyp << " feet each." << endl;
    cout << "The total length of the strands needed including sag = "
    << opposite + perpendicular + perpendicular + hyp + hyp << " feet." << endl;
    return 0;
}
