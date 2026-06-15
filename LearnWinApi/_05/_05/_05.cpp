#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    Sleep(3000);

    INPUT inputs[4] = {};

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = 'A';

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = 'A';
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = 'B';

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = 'B';
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    SendInput(4, inputs, sizeof(INPUT));

    return 0;
}
