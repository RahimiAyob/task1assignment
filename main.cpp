//This program is to calculate total charge of telephone company
#include <iostream> //import input and output library

int main() {
    char packagetype;
    double basiccharge, callcharge, smscharge, totalcharge, calltime;
    int sms;
    std::cout <<"Enter package type (A or B): ";
    std::cin >> packagetype;
    if (packagetype != 'A' && packagetype != 'B'){ //check if user puts other than A and B packagetype
        std::cout << "Please enter a valid package type";
        return 0; //stop the program
    }
    std::cout << "Enter call time(minutes): ";
    std::cin >> calltime;
    std::cout << "Enter how many sms: ";
    std::cin >> sms;
    switch (packagetype){
        case 'A':
            basiccharge = 100;
            if (calltime < 200)
                callcharge = 0;
            else
                callcharge = (calltime - 200) * 0.1;
            if (sms < 20)
                smscharge = 0;
            else
               smscharge = (sms - 20) * 0.15;
            break;
        case 'B':
            basiccharge = 125;
            if (calltime < 250)
                callcharge = 0;
            else
                callcharge = (calltime - 200) * 0.1;
            if (sms < 30)
                smscharge = 0;
            else
                smscharge = (sms - 20) * 0.15;
            break;
    }
    totalcharge = basiccharge + callcharge + smscharge;
    std::cout<< "\nBasic charges: RM" << basiccharge << std::endl;
    std::cout << "Call charges: RM" << callcharge << std::endl;
    std::cout << "SMS charges: RM" <<smscharge << std::endl;
    std::cout << "Total charge: RM" << totalcharge;
    return 0;
}