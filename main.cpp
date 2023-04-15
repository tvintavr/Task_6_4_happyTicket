#include <iostream>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout<<"Введите номер билета: ";
    int ticket;
    int ticket2;
    std::cin>>ticket;
    ticket2=ticket;

    int digitsNum=1;

    while (ticket2/10>0) {
        ++digitsNum;
        ticket2/=10;
    }



    if (digitsNum%2==0) {
        int rightTicket=0;
        int leftTicket=0;
        rightTicket=ticket % (int) (std::pow(10,digitsNum/2));
        leftTicket=ticket / (int) (std::pow(10,digitsNum/2));

        int sumRightTicket=rightTicket%10;
        int sumLeftTicket=leftTicket%10;
        while (rightTicket/10>0) {
            rightTicket/=10;
            sumRightTicket+=rightTicket%10;
        }
        while (leftTicket/10>0) {
            leftTicket/=10;
            sumLeftTicket+=leftTicket%10;
        }
        if (sumLeftTicket==sumRightTicket) {
            std::cout<<"Оо, повезло, повезло!";
        } else {
            std::cout<<"Не повезло, не повезло..";
        }

    } else {
        std::cout<<"Не повезло, ещё и билет с нечётным количеством цифр...";
    }



}
