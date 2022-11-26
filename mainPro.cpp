/*
Name: Đỗ Xuân Kiên - IT5_K62_UTC
Work: BTL CTDL&GT
Date: 11/2022
*/

#include<bits/stdc++.h>
#include "consolePro.cpp"
#include "screenPro.cpp"
#include "method.cpp"
using namespace std;

// set function
void Clr_Cont(){
    cout << endl << endl;
    pause();
    clrscr();
}

// **********************************************************************************************************************************************

int main(){
    // Màn hình khởi động
    setUnicode();
    setColor(0, 14);
    clrscr();
    WelcomeScreen();
    pause();
    clrscr();  
    
    // Main Program
    ListFunction x;
    while(1){
        selectMethodMenu();
        start_pro:;
        int selection; 
        setColor(0, 13);
        cout << "Nhập lựa chọn: "; cin >> selection;
        setColor(0,15);
        if(selection==0){
            reSelec0:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Tạo danh sách số, quá trình nhập sẽ dừng lại khi nhập dấu '#'!" << endl << endl;
            setColor(0,15);
            x.CreateList();
            setColor(0,3); cout << "Danh sách liên kết vừa nhập là: ";
            x.printList();
            setColor(0,15); string reSelec; cout << endl <<endl << "Bạn có muốn nhập lại không? (Y/N): "; 
            reType0:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec0;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType0;
            }
        }
        else if(selection==1){
            reSelec1:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Thêm một phần tử vào danh sách!" << endl << endl;
            setColor(0,15);
            cout << "Danh sách liên kết hiện có là: "; x.printList();
            x.AddNumber();
            setColor(0,15); string reSelec; cout << endl <<endl << "Bạn có muốn nhập lại không? (Y/N): "; 
            reType1:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec1;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType1;
            }
        }
        else if(selection==2){
            reSelec2:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Đếm xem trong dãy có bao nhiêu số có giá trị = k!" << endl << endl;
            setColor(0,15);
            cout << "Danh sách liên kết hiện có là: "; x.printList();
            x.InputK();
            setColor(0,15); string reSelec; cout << endl <<endl << "Bạn có muốn kiểm tra lại không? (Y/N): "; 
            reType2:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec2;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType2;
            }
        }
        else if(selection==3){
            reSelec3:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Kiểm tra xem trong danh sách có 3 số chẵn dương đứng cạnh nhau hay không!" << endl << endl;
            setColor(0,15);
            cout << "Danh sách liên kết hiện có là: "; x.printList();
            setColor(0,3);
            x.CheckThreeNumbers();
            setColor(0,15); string reSelec; cout << endl <<endl << "Bạn có muốn kiểm tra lại không? (Y/N): "; 
            reType3:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec3;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType3;
            }
        }
        else if(selection==4){
            reSelec4:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Sắp xếp danh sách theo thứ tự tăng dần!" << endl << endl;
            setColor(0,15);
            cout << "Danh sách liên kết hiện có là: "; x.printList();
            x.SortGreater(); 
            setColor(0,15); string reSelec; cout << endl <<endl << "Bạn có muốn kiểm tra lại không? (Y/N): "; 
            reType4:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec4;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType4;
            }
        }
        else if(selection==5){
            reSelec5:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Xóa tất cả các số nguyên tố trong danh sách!" << endl << endl;
            setColor(0,15);
            cout << "Danh sách liên kết hiện có là: "; x.printList();
            x.DeletePrimeNumber(); 
            setColor(0,15); string reSelec; cout << endl << endl  << "Bạn có muốn nhập lại không? (Y/N): "; 
            reType5:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec5;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType5;
            }
        }
        else if(selection==6){
            reSelec6:;
            clrscr();
            setColor(0,1); cout << "Bạn đã chọn: Xóa tất cả các phần tử có giá trị trùng nhau trong danh sách, chỉ giữ lại 1 số!" << endl << endl;
            setColor(0,15);            
            cout << "Danh sách liên kết hiện có là: "; x.printList();
            x.DeleteDuplicateNumber(); 
            setColor(0,15); string reSelec; cout << endl <<endl << "Bạn có muốn nhập lại không? (Y/N): "; 
            reType6:;
            cin >> reSelec;
            if(reSelec=="Y") goto reSelec6;
            else if(reSelec=="N") Clr_Cont();
            else {
                cout << endl << "Vui lòng nhập đúng! (Y/N): ";
                goto reType6;
            }
        }
        else if(selection==7){
            break;
        }
        else{
            
            setColor(0,12); cout << "Lựa chọn không phù hợp! Vui lòng chọn lại!" << endl;
            goto start_pro;
        }
    }

    // Màn hình kết thúc
    clrscr();
    ManyThanksMenu();
    return 0;
}

// end code

