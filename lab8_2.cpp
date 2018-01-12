#include <iostream>

using namespace std;

int main () {

        char name[] = {"Saovalap"};
        int nameLength = 0;
        cout << name <<endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char Saovalap[8];
        for (nameLength = 0; nameLength <7; nameLength++) {
            Saovalap[nameLength] = name [6-nameLength]+1;
        }
        Saovalap[8] = '\0';

        cout << Saovalap << endl;

        return 0;
}
