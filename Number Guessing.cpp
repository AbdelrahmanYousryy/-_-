//******************************************************************//
// Title : Simple Number Guessing Application Using Binary Algorithm//
// Author: Abdelrahman Yousry                                       //
// Date : 29/9/2024                                                 //
//******************************************************************//

#include <iostream>
#include <string>

using namespace std;
int main(void) {

  cout << "Please Think of a number between 1 and 1000" << endl;
  cout << "Press Any key to start guessing" << endl;

  cin.get();

  while (1) {
    static int guessed_number = 500;
    static int upper_bound = 1000;
    static int lower_bound = 1;

    cout << "The Guessed Number is " << guessed_number << endl;

    cout << "Please Pick an Option:" << endl;
    cout << "1 - Guessed Number is Correct" << endl;
    cout << "2 - Guessed Number is Higher" << endl;
    cout << "3 - Guessed Number is Lower" << endl;
    int option;
    cin >> option;
    if (option == 1) {
      cout << "Thank You!" << endl;
      break;
    } else if (option == 2) {
      upper_bound = guessed_number;
    } else {
      lower_bound = guessed_number;
    }
    guessed_number = (upper_bound + lower_bound) / 2;
  }

  return 0;
}