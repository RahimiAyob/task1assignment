#include <iostream>

int main() {
    char type;
    double basiccharge, callcharge, smscharge, totalcharge, calltime;
    int sms;
    std::cout <<"Enter package type (A or B): ";
    std::cin >> type;
    std::cout << "Enter call time: ";
    std::cin >> calltime;
    std::cout << "Enter how many sms: ";
    std::cin >> sms;
    switch (type){
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
        default:
            std::cout << "Please insert a valid package type";
    }
    totalcharge = basiccharge + callcharge + smscharge;
    std::cout<< "Basic charge: RM" << basiccharge << std::endl;
    std::cout << "Call charges: RM" << callcharge;
    std::cout << "SMS charges: RM" <<smscharge;
    std::cout << "Total charge: RM" << totalcharge;
    return 0;
}
