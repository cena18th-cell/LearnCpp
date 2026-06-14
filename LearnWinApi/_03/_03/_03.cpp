#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    
    bool LastAS = false;
    bool LastQW = false;
    bool LastQWE = false;
    while (1)
    {
        bool currenta = (GetAsyncKeyState('A') && 0x8000) != 0;
        bool currents = (GetAsyncKeyState('S') && 0x8000) != 0;
        bool currentComboAS = currenta && currents;

        bool currentq = (GetAsyncKeyState('Q') && 0x8000) != 0;
        bool currentw = (GetAsyncKeyState('W') && 0x8000) != 0;
        bool currentComboQW = currentq && currentw;

        
        bool currente = (GetAsyncKeyState('E') && 0x8000) != 0;
        bool currentComboQWE = currentq && currentw && currente;

        if (currentComboAS&& !LastAS)
        {
            cout << "A + S" << endl;
        }

        LastAS = currentComboAS;

        if (currentComboQW && !LastQW)
        {
            cout << "Q + W" << endl;
        }

        LastQW = currentComboQW;

        

        if (currentComboQWE && !LastQWE)
        {
            cout << "Triple Combo" << endl;
        }

        LastQWE = currentComboQWE;
    }

    return 0;
}

