#include <iostream>
using namespace std;

int main() {
    string city;

    // รับข้อมูลเมือง
    cout << "ป้อนชื่อเมือง: ";
    cin >> city;

    // แสดงผลภาค
    if (city == "กรุงเทพ" || city == "นนทบุรี" || city == "สมุทรปราการ" || city == "ปทุมธานี") {
        cout << city << " อยู่ในภาค กลาง" << endl;
    }
    else if (city == "เชียงใหม่" || city == "เชียงราย" || city == "ลำปาง" || city == "แม่ฮ่องสอน") {
        cout << city << " อยู่ในภาค เหนือ" << endl;
    }
    else if (city == "ขอนแก่น" || city == "อุดรธานี" || city == "หนองคาย" || city == "เลย") {
        cout << city << " อยู่ในภาค อีสาน" << endl;
    }
    else if (city == "สงขลา" || city == "พัทลุง" || city == "ตรัง" || city == "นครศรีธรรมราช") {
        cout << city << " อยู่ในภาค ใต้" << endl;
    }
    else {
        cout << "ไม่พบข้อมูลเมือง " << city << endl;
    }

    return 0;
}
