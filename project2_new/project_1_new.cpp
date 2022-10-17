#include <iostream>
using namespace std;
 
const string ID = "12345678";
int speed = 0;
//hành trình hộp số đang ở số nào
int checkGear = 0;

void ifNotInteger()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
    }
}
void nhapID(string id)
{
    do
    {
        // để xóa màn hình sau mỗi lần lặp
        system("cls");
        cout << "nhap ma so ca nhan: ";
        cin >> id;
    } while (!(id == ID));

}

void controlSpeed(int input1, int& vtoc)
{
    switch (input1)
    {
    case 1:
        vtoc += 5;
        break;
    case 2:
        cout << "GIAM TOC" << endl;
        vtoc -= 5;
        break;
    case 3:
        cout << "PHANH" << endl;
        vtoc = 0;
        break;
    case 4:
        cout << "TRO VE" << endl;
        break;

    default:
        cout << "NHAP SAI CU PHAP" << endl;
        break;
    }
}
void selectedMenu(int input)
{
    int userInput4;

    switch (input)
    {
    case 1:
        // kiểm tra tốc độ trước khi về số P
        if (speed <= 0)
        {
            cout << "DA VE SO P." << '\n';
            cout << "CHU Y DUNG PHANH TAY DE DAM BAO AN TOAN" << '\n';
        }
        else
        {
            cout << "HAY CHAC CHAN XE DA DUNG, VA VAN TOC LA 0 KM/H" << endl;
        }
        // break thoat khoi vong lap coi nhu la thoat khoi ham luon
        break;
    case 2:
        if (checkGear != 2 && speed != 0)
        {
            cout << "KIEM TRA LAI VAN TOC, XE VAN DANG CHAY" << endl;
            return;
        }
        if (speed <= 0)
        {
            speed = 7;
        }
        checkGear = 2;
        do
        {
            cout << "------ TOC DO HIEN TAI:" << speed << "km/h" << '\n';
            if (speed > 20)
            {
                cout << "TOC DO NGUY HIEM, BAN NEN GIAM TOC DO" << endl;
            }
            cout << "MOI LUA CHON: " << '\n';
            cout << "1: TANG TOC" << '\n';
            cout << "2: GIAM TOC" << '\n';
            cout << "3: PHANH" << '\n';
            cout << "4: TRO VE" << '\n';
            cin >> userInput4;
            ifNotInteger();
            system("cls");
            cout << "USE CHON: " << userInput4 << endl;
            controlSpeed(userInput4, speed);
           
        } while (userInput4 != 4);
        break;
    case 3:
        // kiểm tra tốc độ trước khi về số P
        if (speed <= 0)
        {
            cout << "DA VE SO N." << '\n';
            cout << "CHU Y DUNG PHANH TAY DE DAM BAO AN TOAN" << '\n';
        }
        else
        {
            cout << "HAY CHAC CHAN XE DA DUNG, VA VAN TOC LA 0 KM/H" << endl;
        }
        break;
    case 4:
        // kiểm tra tốc độ = 0, để được phép vào số R hoặc D
        if (checkGear != 4 && speed != 0)
        {
            cout << "KIEM TRA LAI VAN TOC, XE VAN DANG CHAY" << endl;
            return;
        }
        // khi vận tốc bằng 0 giá trị mặc định khi vào số bằng 7
        if (speed <= 0)
        {
            speed = 7;
        }

        checkGear = 4;
        do
        {
            cout << "------ TOC DO HIEN TAI:" << speed << "km/h" << '\n';
            if (speed > 60)
            {
                cout << "TOC DO NGUY HIEM, BAN NEN GIAM TOC DO" << endl;
            }
            cout << "MOI LUA CHON: " << '\n';
            cout << "1: TANG TOC" << '\n';
            cout << "2: GIAM TOC" << '\n';
            cout << "3: PHANH" << '\n';
            cout << "4: TRO VE" << '\n';
            cin >> userInput4;
            ifNotInteger();
            system("cls");
            cout << "USE CHON: " << userInput4 << endl;
            controlSpeed(userInput4, speed);
        } while (userInput4 != 4);
        break;
    case 5:
        cout << " XE DA TAT MAY!!!" << endl;
        break;
    default:
        cout << " KHONG CO DU LIEU" << endl;
        break;
    }
}
void selectGear(int input3)
{
    do
    {
        cout << "XIN CHAO 12345678" << '\n';
        cout << "XIN MOI LUA CHON: " << '\n';
        cout << "1. P" << '\n';
        cout << "2. R" << '\n';
        cout << "3. N" << '\n';
        cout << "4. D" << '\n';
        cout << "5. POWER OFF" << '\n';
        cin >> input3;
        ifNotInteger();
        system("cls");
        cout << "USER CHON: " << input3 << '\n';
        selectedMenu(input3);
    } while (input3 != 5);
}


int main() {
    //cout << "------------------------Project_1_New  ---------------------------" << endl;
    
    int userInput3 = 0;
    string id;
    nhapID(id);
    system("cls");

    selectGear(userInput3);
     

    system("pause");

    return 0;
}