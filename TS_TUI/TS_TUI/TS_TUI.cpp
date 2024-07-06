//Include Libraries and Headers to interact with printers
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <winspool.h>
using namespace std;

void main(int argc, char* argv[])
{
    cout << argc;
    int i = 0;
    while (i < argc) {
        cout << argv[i] << endl;
        i++;
    }

    cout << "Spooler For Printing En Masse \n";

    system("pwsh -ExecutionPolicy \"Unrestricted\" -command \".\\printer.ps1\""); // Shows list of printers using powershell
}

/* Detect and show printers
 --printers
 system("pwsh -ExecutionPolicy \"Unrestricted\" -command \".\\printer.ps1\"");
*/

/* Select Printers From list
 --printer "", "", ""...
*/

/* Specify Printer Configuration
 --config
*/

/* Show Help
 --help
*/

/* Specify Images Directory
--images ".\path\to\dir\"
*/

/* Printer Request Options
tspool --print *\Megumin
*/

// multithreading
// create terminal application to request parrelel print queues
// for multiple unique documents
// figure out how to use the win32 print api to 
// do a basic print job
// deadline  7/5/24 [friday, july 5 2024]

/*
https://www.youtube.com/@TobynJacobs
https://www.reddit.com/user/MeanForce1 
https://www.twitch.tv/tobynjacobs
https://instagram.com/
https://discord.com/invite/AVvwfG7XDM
wtp7NFXms3

https://twitter.com/TobynJacobs
*/























// TS_TUI.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
