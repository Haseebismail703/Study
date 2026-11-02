#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Step 1: Student Information
    cout << "Student Name: HASEEB UR REHMAN" << endl;
    cout << "Student ID  : BC260422808" << endl << endl;

    cout << "===== COMMUNITY WATER REFILL DEPOT - DAILY REPORT =====\n\n";

    // Step 2: Constants and Variables
    const int studentID = 260422808;
    const int totalOrders = 5;

    const int rate5L = 70;
    const int rate19L = 180;

    int totalContainers = 0;
    double totalOriginal = 0;
    double totalDiscount = 0;
    double totalFinal = 0;

    int place = 10000;

    // Display Table Headers
    cout << left << setw(6) << "Order" 
         << setw(10) << "Quantity" 
         << setw(22) << "Package Type" 
         << setw(15) << "Original(Rs.)" 
         << setw(10) << "Discount" 
         << setw(10) << "Final(Rs.)" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // Step 3: Process Five Transactions
    for (int i = 1; i <= totalOrders; i++)
    {
        // Extract ID digit using / and %
        int digit = (studentID / place) % 10;
        place = place / 10;

        // Calculate quantity
        int quantity = digit * 10;

        int rate;
        string packageType;

        // Select package type
        if (i <= 3)
        {
            rate = rate5L;
            packageType = "5-Litre Container";
        }
        else
        {
            rate = rate19L;
            packageType = "19-Litre Container";
        }

        // Calculate original charge
        double originalCharge = quantity * rate;

        // Calculate discount
        double discount = 0;

        if (quantity >= 50)
        {
            discount = originalCharge * 10 / 100;
        }

        // Calculate final charge
        double finalCharge = originalCharge - discount;

        // Display transaction row
        cout << left << setw(6) << i
             << setw(10) << quantity
             << setw(22) << packageType
             << setw(15) << originalCharge
             << setw(10) << discount
             << setw(10) << finalCharge << endl;

        // Update daily totals
        totalContainers += quantity;
        totalOriginal += originalCharge;
        totalDiscount += discount;
        totalFinal += finalCharge;
    }

    cout << "-------------------------------------------------------------------------" << endl;

    // Step 4: Sales Status
    string status;

    if (totalFinal < 15000)
    {
        status = "LOW SALES";
    }
    else if (totalFinal < 30000)
    {
        status = "NORMAL SALES";
    }
    else
    {
        status = "HIGH SALES";
    }

    // Step 5: Daily Summary
    cout << "\n===== DAILY SUMMARY =====\n";
    cout << setw(28) << left << "Total Containers Supplied" << ": " << totalContainers << endl;
    cout << setw(28) << left << "Total Original Charges" << ": Rs. " << totalOriginal << endl;
    cout << setw(28) << left << "Total Discount" << ": Rs. " << totalDiscount << endl;
    cout << setw(28) << left << "Final Amount Collected" << ": Rs. " << totalFinal << endl;
    cout << setw(28) << left << "Sales Status" << ": " << status << endl;

    return 0;
}
