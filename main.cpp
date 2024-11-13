#include <iostream>


int main() {
    char type;
    double basiccharge, callcharge, smscharge, totalcharge, calltime;
    int sms;
    std::cout <<"Enter package type (A or B): ";
    std::cin >> type;
    if (type != 'A' && type != 'B' || std::cin.fail()){
        std::cout << "Please enter a valid package type";
        return 1;
    }

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
        case NULL:
            return 1;
        default:
            std::cout << "Please insert a valid package type";
            return 1;
    }
    totalcharge = basiccharge + callcharge + smscharge;
    system("clear");
    std::cout<< "Basic charges: RM" << basiccharge << std::endl;
    std::cout << "Call charges: RM" << callcharge << std::endl;
    std::cout << "SMS charges: RM" <<smscharge << std::endl;
    std::cout << "Total charge: RM" << totalcharge;
    return 0;
}
