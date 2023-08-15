#include <iostream>
#include <cmath>
using namespace std;
double height,dist,TOF,Veloc; //Variable inputs for testing situation
double DragCoef = 0.47;
double Resolution = 0.001;
double Density = 1.225;
double Area = 0.0001131;
double Mass = (0.00716);

int main() {
	cout << "Input Distance: "; //Simple input for target distance
	cin >> dist;
	dist = round(dist/Resolution)*Resolution; //Basic rounding for precision
	cout << "Input Final Velocity: "; //Simple input for final velocity
	cin >> Veloc;
	double ctr = 0;
	double Temp = 0;
	while(Temp<dist){ //Reverses the iterative drag equation to calculate dropped velocity from Final velocity.
		Veloc += ((0.5 * Density * pow(Veloc,2) * Area * DragCoef) / Mass * Resolution);
		ctr += Resolution;
		Temp = Veloc * ctr;
	}
	cout << endl << "Initial Velocity: " << Veloc; //Outputs the initial velocity calculated.
}