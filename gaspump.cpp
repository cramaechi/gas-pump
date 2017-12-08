/*-------------------------------------------------------------
This is the implementation for the class GasPump. The interface 
is in the file gaspump.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "gaspump.h"

using namespace std;

void GasPump::setCostPerGallon(double newCostPerGallon)
{
    if (newCostPerGallon > 0 && newCostPerGallon <= 3.50)
        costPerGallon = newCostPerGallon;
    else
    {
        cout<<"Invalid cost: Aborting program.\n";
        exit(1);
    }

    //Reset the amount dispensed on the charged amount to zero before reuse.
    dispensedFuel = 0;
    chargedAmount = 0;
}

void GasPump::setDispensedFuel(double newDispensedFuel)
{
    if (newDispensedFuel > 0 && newDispensedFuel <= 18)
        dispensedFuel = newDispensedFuel;
    else 
    {
        cout<<"Invalid fuel dispensed: Aborting program.\n";
        exit(1);
    }
}

void GasPump::setChargedAmount(double newChargedAmount)
{
    if (newChargedAmount > 0 && newChargedAmount <= 40)
        chargedAmount = newChargedAmount;
    else
    {
        cout<<"Invalid amont charged to purchaser: Aborting program.\n";
        exit(1);
    }
}


double GasPump::getCostPerGallon()
{
    return costPerGallon;
}

double GasPump::getFuelDispensed()
{
    return dispensedFuel;
}

double GasPump::getChargedAmount()
{
    return chargedAmount;
}

void GasPump::dispenseFuel()
{
    chargedAmount = costPerGallon*(++dispensedFuel);
}

void GasPump::input()
{
    dispensedFuel = 0;
    chargedAmount = 0;

    srand(time(NULL));
    double scale = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
    costPerGallon = 1.0 + scale * (5.0 - 1.0);

    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);

    cout<<"\nToday's cost per gallon is $"<<costPerGallon<<endl;
    cout<<endl;
    cout<<"*Hold down the Return button to start fueling and press x to stop*\n";

    char ans;
    cin.get(ans);

    clock_t  t;
    do
    {
        cout<<"Fueling...";
        dispenseFuel();    
        cin.get(ans);
    }while (ans == '\n');
    cout<<endl;
}

void GasPump::output()
{
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"Fuel dispensed:"<<setw(2)<<""<<dispensedFuel<<" gallons"<<endl;
    cout<<"Amount charged:"<<setw(3)<<"$"<<chargedAmount<<endl;
    cout<<"Cost per gallon:"<<setw(2)<<"$"<<costPerGallon<<"\n\n";
}

bool GasPump::stop()
{
    return (dispensedFuel >= 18);
}
