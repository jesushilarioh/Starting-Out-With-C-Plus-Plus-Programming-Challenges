/********************************************************************
*
*	19. Spectral Analysis
*
*       If a scientist knows the wavelength of an electromagnetic wave,
*       he or she can determine what type of radiation it is. Write a
*       program that asks for the wavelength of an electromagnetic wave
*       in meters and then displays what that wave is according to the
*       chart below. (For example, a wave with a wavelength of 1E-10
*       meters would be an X-ray.)
*
* 	Jesus Hilario Hernandez
* 	February 20, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    double wavelength;
    // Ask for wavelength (in meters)
    cout << "/nEnter wavelength (in meters): ";
    cin >> wavelength;

    // Display the type of wave according to chart
    if (wavelength >= 1E-2)
        cout << "Radio Waves" << endl;
    else if (wavelength <= 1E-2 && wavelength >= 1E-3)
        cout << "Microwaves" << endl;
    else if (wavelength <= 1E-3 && wavelength >= 7E-7)
        cout << "Infrared" << endl;
    else if (wavelength <= 7E-7 && wavelength >= 4E-7)
        cout << "Visible Light" << endl;
    else if (wavelength <= 4E-7 && wavelength >= 1E-8)
        cout << "Ultraviolet" << endl;
    else if (wavelength <= 1E-8 && wavelength >= 1E-11)
        cout << "X Rays" << endl;
    else if (wavelength <= 1E-11)
        cout << "Gamma Rays" << endl;

    // Format line break
    cout << endl;
    // Terminate program
    return 0;
}
