/*----------------------------------------------------------
Description: This is the header file gaspump.h. This is the 
interface for the class GasPump. Values of this type model
the behvavior of gas pumps at automobile service stations.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
---------------------------------------------------------*/

class GasPump
{
public:
	void setCostPerGallon(double newCostPerGallon);
	//Precondition: newCostPerGallon > 0 && <= 3.50
	//Postcondition: The variable costPerGallon has been set to
	//value of newCostPerGallon. Both variables fuelDispensed and 
	//amountCharges are set to 0.
    
	void setDispensedFuel(double newDispensedFuel);
	//Precondition: newFuel > 0 && <= 18
	//Postcondition: The member variable fuel has been set to the 
	//value of newFuel.

	void setChargedAmount(double newChargedAmount);
	//Precondition: newChargedAmount > 0 && newChargedAmount <= 40.
	//Postcondition: The variable chargedAmount has been set to 
	//the value of the arguement newChargedAmount.

	double getCostPerGallon();
	//Postcondition: Returns the value of the variable costPerGallon.

	double getFuelDispensed();
	//Postcondition: Returns the value of the variable dispensedFuel.

	double getChargedAmount();
	//Postcondition: Returns the value of the variable chargedAmount.

	void dispenseFuel();
	//Postcondition: Increments the value of the variable dispensedFuel by 1.

	void input();
	//Reads in data from the keyboard.

	void output();
    //Outputs gaspump information.

	bool stop();
	//Postcondition: Returns true if the fuel limit has been reached. Returns
    //false, otherwise.

private:
	double dispensedFuel; //fuel is in gallons.
	double chargedAmount;
	double costPerGallon;
};
