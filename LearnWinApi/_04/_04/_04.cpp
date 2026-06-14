#include <iostream>
#include <Windows.h>
using namespace std;

struct KeyMap
{
    int fromKey;
    string toText;
    bool last = false;
};

int main()
{
    KeyMap maps[] = {
        {'A', "B"},
        {'C', "D"},
        {'F', "Enter"},
        {'Q', "1"},
        {'W', "2"}
    };

    int mapCount = sizeof(maps) / sizeof(maps[0]);

    while (1) {
        bool escDown = (GetAsyncKeyState(VK_ESCAPE) & 0x8000) != 0;
        if (escDown) {
            cout << "Program exit." << endl;
            break;
        }

        for (int i = 0; i < mapCount; i++) {
            bool currentState = (GetAsyncKeyState(maps[i].fromKey) & 0x8000) != 0;

            if (currentState && !maps[i].last) {
                cout << maps[i].toText << endl;
            }

            maps[i].last = currentState;
        }

        Sleep(10);
    }

    return 0;
}
