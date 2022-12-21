#include "SmartPhone.h"
#include <iostream>
#include "PhoneStore1.h"
#include "PhoneStore2.h"
#include <stdexcept>
using namespace std;

int main() {
    cout << "Creating SmartPhone description..." << endl;
    cout << "\t SmartPhone: id = 345, Serial # = Iphone11, Power source = battery" << endl;
    SmartPhone smartphone(345, 22000, "64GB", "Iphone11", "battery");

    cout << "Print out a base class object, electronic..." << endl;
    smartphone.print();
    smartphone.setSerialNum("11");
    smartphone.setID(345);
    smartphone.setPrice(22000);
    smartphone.setInternal("64GB");
    smartphone.setPowerSource("DC");
    cout << "SmartPhone: " << endl;
    cout << "\tID:     " << smartphone.getId() << endl;
    cout << "\tPrice:  " << smartphone.getPrice() << endl;
    cout << "\tInternal:" << smartphone.getInternal() << endl;
    cout << "\tSer #:  " << smartphone.getSerialNum() << endl;
    cout << "\tPwrSrc: " << smartphone.getPowerSource() << endl;

    cout << "Telephone numbers" << endl;

    string numbers[3] = { "0969801346", "0965300084", "0978431631" };

    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    {
        phone b1 = phone("Iphone", "11", 22000);
        phone b2 = phone("Iphone", "Xr", 12000);
        phone b3 = phone("Iphone", "13", 34000);

        phonestore PhoneStore = phonestore("PhoneStore");
        PhoneStore += b1;
        PhoneStore += b2;
        PhoneStore += b3;

       cout << "Phones in shop: \n";
       cout << PhoneStore;
        PhoneStore.showTopByPrice();


        return 0;
    }
}