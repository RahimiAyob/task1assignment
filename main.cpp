#include <iostream> //include the input and output library


int main() { //main method
    char packagetype; //declare char packagetype variable
    double basiccharge, callcharge, smscharge, totalcharge, calltime; //declare double of basiccharge, smscharge, totalcharge and calltime variable
    int sms; //declare int sms count variable
    std::cout <<"Enter package type (A or B): "; //statement to tell user to put package type
    std::cin >> packagetype; //packagetype input
    if (packagetype != 'A' && packagetype != 'B'){ //check if user puts other than A and B packagetype
        std::cout << "Please enter a valid package type"; //display to the user than the input is not valid
        return 1; //stop the program
    }

    std::cout << "Enter call time: ";
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
