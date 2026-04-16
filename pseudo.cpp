//Include necessary headers
#include <map>
#include <list>
#include <string> 
using namespace std;


//define function to simulate company changes over time
    //Parameters: map of different companies, number of intervals

void change(map<string, int>&, int);

//define main
int main(){
    //Initialize a map to store company info, each with a value 
    //that contains an array of three lists for stock price, free 
    //cash flow, and price to earnings ratio.
    map<string, int> m;
    

    //Open external file to read in data about companies to populate map
        //error handle

    //Read data from file to populate map
    //Close file.

    //Begin time based sim for company changes over time period.
        //going for 20 time intervals
            //iterate through each company in map
                //simulate changes for each company
                    //Randomly decide if stock price, cash flow, or price
                    //ratio fulctuates
                        //read in new value if deciding to fluctuate
                    //Print the changes
                
                //Simulate the more complex changes that occur as a result
                //random events that impact company

                //show passage of time.

    //End main func
    return 0;
}