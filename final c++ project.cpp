#include <iostream>
using namespace std;

int main() {
    int code, option;
    
  // NTC logo
	  cout << "****************" << endl;
  cout << "***************************" << endl;
  cout << "**********************************" << endl;
  cout << "********************************" << endl;
   cout << "****************************************" << endl;
     cout << "**********************************************" << endl;
      cout << "**********************************************" << endl;
       cout << "**********************************************" << endl;
         cout << "**********************************************" << endl;
           cout << "**********************************************" << endl;
             cout << "**********************************************" << endl;
              cout << "****************** hello welcome to esewa****************************" << endl;
               cout << "****************** hello welcome to esewa****************************" << endl;
                cout << "******************hello welcome to esewa******" << endl;
                  cout << "*************** hello welcome to esewa*******************************" << endl;
                 cout << "**********************************************" << endl;
                cout << "*************** hello welcome to esewa*******************************" << endl;
              cout << "**********************************************" << endl;
            cout << "**********************************************" << endl;
          cout << "**********************************************" << endl;
        cout << "**********************************************" << endl;
      cout << "**********************************************" << endl;
    cout << "**********************************************" << endl;
   cout << "**********  hello welcome to esewa  **********" << endl;
 cout << "********************* Sewa *********************" << endl;
   cout << "**********************************************" << endl;
    
    cout << endl;
    cout << "Enter code *1415# to access further: ";
    cin >> code;
    
    if (code == 1415) {
        cout << endl;
        cout << "Choose an option:" << endl;
        cout << "1. Spring" << endl;
        cout << "2. Unlimited Data" << endl;
        cout << "3. International Call Offer" << endl;
        cout << "4. Exit" << endl;
        cout << "Option: ";
        cin >> option;
        
        if (option == 1) {
            char subOption;
            cout << endl;
            cout << "Choose a sub-option:" << endl;
            cout << "a. All Time Data (Rs. 23)" << endl;
            cout << "b. Night Data (Rs. 50)" << endl;
            cout << "c. Voice Pack (Rs. 30)" << endl;
            cout << "Option: ";
            cin >> subOption;
            
            switch (subOption) {
                case 'a':
                    cout << endl;
                    cout << "Your all time data pack has been activated. Enjoy the data. NTC !" << endl;
                    break;
                case 'b':
                    cout << endl;
                    cout << "Your night data pack has been activated. Enjoy the data!" << endl;
                    break;
                case 'c':
                    cout << endl;
                    cout << "Your voice pack has been activated. Enjoy the data!" << endl;
                    break;
                default:
                    cout << endl;
                    cout << "Invalid sub-option selected. Please try again." << endl;
                    break;
            }
        } else if (option == 2) {
            char subOption;
            cout << endl;
            cout << "Choose a sub-option:" << endl;
            cout << "a. Night Unlimited (Rs. 70)" << endl;
            cout << "b. Day Unlimited (Rs. 150)" << endl;
            cout << "Option: ";
            cin >> subOption;
            
            switch (subOption) {
                case 'a':
                    cout << endl;
                    cout << "Your night unlimited data pack has been activated. Enjoy the data!" << endl;
                    break;
                case 'b':
                    cout << endl;
                    cout << "Your day unlimited data pack has been activated. Enjoy the data!" << endl;
                    break;
                default:
                    cout << endl;
                    cout << "Invalid sub-option selected. Please try again." << endl;
                    break;
            }
        } else if (option == 3) {
            cout << endl;
            cout << "Your international call offer has been activated for Rs. 50 for 2 hours. Enjoy!" << endl;
        } else if (option == 4) {
            cout << endl;
            cout << "Thank you for using NTC Internet Sewa!" << endl;
            return 0;
        } else {
            cout << endl;
            cout << "Invalid option selected. Please try again." << endl;
        }
    } else {
        cout << endl;
        cout << "Invalid code entered. Please try again." << endl;
    }
    
    return 0;
}

