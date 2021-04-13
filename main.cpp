//Student Name: Mario Karamuca

//Teacher: Dr. Tyson McMillan

//Date: 4/13/21

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include "Input_Validation_Extended.h"
//input validation could be used, but not needed as teacher provided code
#include <array>


using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

Dallas, Day 1: 81

Dallas, Day 2: 70

Dallas, Day 3: 67

Dallas, Day 4: 66

Dallas, Day 5: 65

Dallas, Day 6: 67

Dallas, Day 7: 72

Tirana, Day 1: 55

Tirana, Day 2: 60

Tirana, Day 3: 64

Tirana, Day 4: 62

Tirana, Day 5: 63

Tirana, Day 6: 59

Tirana, Day 7: 59

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array
    string City_Two = "Dallas";
    string City_One = "Tirana";

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {
            if(i == 1){
              cout << City_One << ", Day " << j + 1 << " = " << temperature[i][j] << "°" << endl;
            }
            else{
              cout << City_Two << ", Day " << j + 1 << " = " << temperature[i][j] << "°" << endl;
            }
        }

    }

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a one dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

    int cityOne [] = {81, 70, 67, 66, 65, 67, 72};
    int cityTwo [] = {55, 60, 37, 64, 62, 63, 59};
    cout << endl << endl;
    


    for(int i = 0; i < sizeof(cityOne) / sizeof(cityOne[0]); i++){
      temperature[0][i] = cityOne[i];
      temperature[1][i] = cityTwo[i];
      cout << "City One, Day " << i + 1 << ": " <<temperature [0][i] << "°" <<endl;
      cout << "City Two, Day " << i + 1 << ": " << temperature [1][i] << "°" <<endl;  
    }

  //seperate for loop can be done to print out all of city one then all of city 2 if needed

    return 0;

}

//Source