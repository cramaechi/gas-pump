# Gas Pump Machine
A program that uses a class called GasPump to model the behavior of a pump at an automobile service station.

### Synopsis
The following is a list of things a gas pump might be expected to do.

**a**. A display of the amount dispensed.<br />
**b**. A display of the amount charged for the amount dispensed.<br />
**c**. A display of the cost per gallon that is used.<br />
**d**. Before use, the gas pump must reset the amount dispensed and amount charged to zero.<br />
**e**. Once started, a gas pump continues to dispense fuel, keep track of the amount dispensed, and compute the charge<br />
   &nbsp;&nbsp;&nbsp;&nbsp;for the amount dispensed until stopped.<br />
**g**. A stop dispensing control mechanism is needed.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/gas-pump.git
   ```
    or [download as ZIP](https://github.com/cramaechi/gas-pump/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd gas-pump
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./gas_pump
```

Sample Output:
```
Today's cost per gallon is $4.34                                                                                      
                                                                                                                      
*Hold down the Return button to start fueling and press x to stop*                                                    
                                                                                                                      
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...                                                                                                            
Fueling...x                                                                                                           
                                                                                                                      
Fuel dispensed:  15.00 gallons                                                                                        
Amount charged:  $65.13                                                                                               
Cost per gallon: $4.34 
```
