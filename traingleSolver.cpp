//Triangle solver by Noah G, 2011
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
place:
cin.clear();
cout << "TRIANGLE SOLVER - by NG" << endl;
cout << "(press enter to continue)" << endl;
int goTS;
char startTS [239];
cin.getline (startTS,239);
cout << "Press 1 for SSS, 2 for SAS, or 3 for ASA, + enter: ";
cin >> goTS;
switch (goTS){
    //SSS
    case 1:
    cout << "SSS" << endl;
    float SSSsA,SSSsB,SSSsC;
    cout << "Side A? ";
    cin >> SSSsA;
    cout << "Side B? ";
    cin >> SSSsB;
    cout << "Side C? ";
    cin >> SSSsC;
    float SSSaA, SSSaB, SSSaC, SSSaAd, SSSaBd;
    //Angle A
    SSSaA = pow(SSSsB,2) + pow(SSSsC,2) - pow(SSSsA,2);
    SSSaAd = 2 * SSSsB * SSSsC;
    SSSaA = SSSaA / SSSaAd;
    SSSaA = acos(SSSaA);
    SSSaA = SSSaA * (180 / 3.14159265358979);
    //Angle B
    SSSaB = pow(SSSsC,2) + pow(SSSsA,2) - pow(SSSsB,2);
    SSSaBd = 2 * SSSsC * SSSsA;
    SSSaB = SSSaB / SSSaBd;
    SSSaB = acos(SSSaB);
    SSSaB = SSSaB * (180 / 3.14159265358979);
    //Angle C
    SSSaC = 180 - (SSSaA + SSSaB);
    //Area
    float SSSArea, SSSAreaS;
    SSSAreaS = (SSSsA + SSSsB + SSSsC) / 2;
    SSSArea = SSSAreaS*(SSSAreaS-SSSsA)*(SSSAreaS-SSSsB)*(SSSAreaS-SSSsC);
    SSSArea = sqrt(SSSArea);
	//Output
    cout << "Angle A = "; cout << SSSaA; cout << " degrees" << endl;
    cout << "Angle B = "; cout << SSSaB; cout << " degrees" << endl;
    cout << "Angle C = "; cout << SSSaC; cout << " degrees" << endl;
    cout << "Total Area = "; cout << SSSArea; cout << " square units" << endl;
    //Quit function
    int x;
    cout << "(press any key + enter to quit)" << endl;
    cin >> x;
    return 0;
    break;
    //SAS
    case 2:
    cout << "SAS" << endl;
    float SASs1, SASs2, SASs3, SASa1, SASa2, SASa3;
    cout << "Side 1: ";
    cin >> SASs1;
    cout << "Angle (degrees): ";
    cin >> SASa1;
    SASa1 = SASa1 * (3.14159265358979 / 180);
    cout << "Side 2: ";
    cin >> SASs2;
    //Side 3
    SASs3 = pow(SASs1,2) + pow(SASs2,2);
    SASs3 = SASs3 - 2*SASs1*SASs2*cos(SASa1);
    SASs3 = sqrt(SASs3);
    //Angle Opposite side 1
    SASa2 = ( SASs1*sin(SASa1) ) / SASs3;
    SASa2 = asin( SASa2 );
    SASa2 = SASa2 * (180 / 3.14159265358979);
    //Angle Opposite Side 2
    SASa3 = 180 - (SASa1 * (180 / 3.14159265358979));
    SASa3 = SASa3 - SASa2;
    //Area
    float SASArea, SASAreaS;
    SASAreaS = (SASs1 + SASs2 + SASs3) / 2;
    SASArea = SASAreaS*(SASAreaS-SASs1)*(SASAreaS-SASs2)*(SASAreaS-SASs3);
    SASArea = sqrt(SASArea);
    //Output
    cout << "Side 3 = "; cout << SASs3 << endl;
    cout << "Angle Opposite Side 1 = "; cout << SASa2; cout << " degrees" << endl;
    cout << "Angle Opposite Side 2 = "; cout << SASa3; cout << " degrees" << endl;
    cout << "Total Area = "; cout << SASArea; cout << " square units" << endl;
    //Quit function
    int y;
    cout << "(press any key + enter to quit)" << endl;
    cin >> y;
    return 0;
    break;
    //ASA
    case 3:
    cout << "ASA" << endl;
    float ASAa1, ASAa2, ASAa3, ASAs1, ASAs2, ASAs3;
    cout << "Angle 1 (degrees): ";
    cin >> ASAa1;
    ASAa1 = ASAa1*(3.14159265358979 / 180);
    cout << "Side: ";
    cin >> ASAs3;
    cout << "Angle 2: ";
    cin >> ASAa2;
    ASAa2 = ASAa2*(3.14159265358979 / 180);
    //Angle 3
    ASAa3 = 180 - ((ASAa1*(180 / 3.14159265358979)) + (ASAa2*(180 / 3.14159265358979)));
    ASAa3 = ASAa3*(3.14159265358979 / 180);
    //Side opp Ang 1
    ASAs1 = sin(ASAa1);
    ASAs1 = ( ASAs1*ASAs3 ) / sin(ASAa3);
    //Side opposite angle 2
    ASAs2 = sin(ASAa2);
    ASAs2 = ( ASAs2*ASAs3 ) / sin(ASAa3);
    //Area
    float ASAArea, ASAAreaS;
    ASAAreaS = (ASAs1 + ASAs2 + ASAs3) / 2;
    ASAArea = ASAAreaS*(ASAAreaS-ASAs1)*(ASAAreaS-ASAs2)*(ASAAreaS-ASAs3);
    ASAArea = sqrt(ASAArea);
    //Output
    cout << "Angle 3 = "; cout << ASAa3*(180 / 3.14159265358979); cout << " degrees" << endl;
    cout << "Side Opposite Angle 1 = "; cout << ASAs1 << endl;
    cout << "Side Opposite Angle 2 = "; cout << ASAs2 << endl;
    cout << "Total Area = "; cout << ASAArea; cout << " square units" << endl;
    //Quit function
    int z;
    cout << "(press any key + enter to quit)" << endl;
    cin >> z;
    return 0;
    break;
	//Wrong input
    default: cout << "Error: Wrong input type " << endl;
	goto place;
    break;}
return 0;}