#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Student Information
    int studentID = 260422808;

    cout << "Student Name: HASEEB UR REHMAN" << endl;
    cout << "Student ID  : BC260422808" << endl;

    // Extract Required Digits
    int d1 = (studentID / 10000000) % 10;
    int d2 = (studentID / 100000) % 10;
    int d3 = (studentID / 10000) % 10;
    int d4 = (studentID / 1000) % 10;
    int d5 = (studentID / 10) % 10;

    cout << endl;
    cout << "Extracted digits: "<< d1 << ", "<< d2 << ", "<< d3 << ", "<< d4 << ", "<< d5 << endl;

    // Assign Tickets
    int network = d1;
    int lab = d2;
    int lms = d3;
    int account = d4;
    int hardware = d5;

    // Calculate Resolution Time
    int networkTime = network * 20;
    int labTime = lab * 20;
    int lmsTime = lms * 20;
    int accountTime = account * 20;
    int hardwareTime = hardware * 20;

    // Workload Counters
    int light = 0;
    int moderate = 0;
    int heavy = 0;

    cout << endl;
    cout << "----- University IT Helpdesk WorkLoad Report -----" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << left<< setw(23) << "Unit"<< setw(16) << "Total Tickets"<< setw(23) << "Resolution Time" << "Status" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    // Network Support
    cout << left << setw(23) << "Network Support:" << setw(16) << network << setw(23) << networkTime;

    if (network >= 7)
    {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (network >= 4)
    {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else
    {
        cout << "LIGHT" << endl;
        light++;
    }

    // Computer Lab Support
    cout << left << setw(23) << "Computer Lab Support:"<< setw(16) << lab<< setw(23) << labTime;

    if (lab >= 7)
    {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (lab >= 4)
    {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else
    {
        cout << "LIGHT" << endl;
        light++;
    }

    // LMS Support
    cout << left << setw(23) << "LMS Support:"<< setw(16) << lms<< setw(23) << lmsTime;

    if (lms >= 7)
    {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (lms >= 4)
    {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else
    {
        cout << "LIGHT" << endl;
        light++;
    }

    // Account Support
    cout << left << setw(23) << "Account Support:"<< setw(16) << account<< setw(23) << accountTime;

    if (account >= 7)
    {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (account >= 4)
    {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else
    {
        cout << "LIGHT" << endl;
        light++;
    }

    // Hardware Support
    cout << left << setw(23) << "Hardware Support:"<< setw(16) << hardware << setw(23) << hardwareTime;

    if (hardware >= 7)
    {
        cout << "HEAVY" << endl;
        heavy++;
    }
    else if (hardware >= 4)
    {
        cout << "MODERATE" << endl;
        moderate++;
    }
    else
    {
        cout << "LIGHT" << endl;
        light++;
    }

    // Workload Summary
    cout << endl;
    cout << "===== SUMMARY =====" << endl;
    cout << "LIGHT desks   : " << light << endl;
    cout << "MODERATE desks: " << moderate << endl;
    cout << "HEAVY desks   : " << heavy << endl;

    return 0;
}

