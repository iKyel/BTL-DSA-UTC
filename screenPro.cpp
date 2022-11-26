#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include "consolePro.cpp"
using namespace std;


void WelcomeScreen();
void selectMethodMenu();
void ManyThanksMenu();

/******************************************************/


void WelcomeScreen(){
    // Màn hình welcome
    cout  << "+-------------------------------------------------------+" << endl
          << "|     Bài tập lớn môn Cấu Trúc Dữ Liệu Và Giải Thuật    |" << endl
          << "+-------------------------------------------------------+" << endl
          << "|                                                       |" << endl
          << "|      Bài 8: Quản lí dãy số bằng danh sách liên kết    |" << endl
          << "|                                                       |" << endl
          << "|                  Sinh viên thực hiện:                 |" << endl
          << "|                      Đỗ Xuân Kiên                     |" << endl 
          << "|                                                       |" << endl
          << "+-------------------------------------------------------+" << endl
          << endl << endl;
}

void selectMethodMenu() {
        // Menu
        setColor(0,12);
        cout  << "+------------------------------------------------------------------------------------------------------+" << endl;
        cout  << "|                             Danh Sách Liên Kết Quản Lí Dãy Số                                        |" << endl;
        cout  << "+------------------------------------------------------------------------------------------------------+" << endl;
        setColor(0,15);
        cout  << "|                                                                                                      |" << endl;
        cout  << "|         0. Tạo danh sách số, quá trình nhập sẽ dừng lại khi nhập dấu “#”.                            |" << endl;
        cout  << "|         1. Thêm một phần tử vào danh sách                                                            |" << endl;
        cout  << "|         2. Đếm xem trong dãy có bao nhiêu số có giá trị = k?                                         |" << endl;
        cout  << "|         3. Kiểm tra xem trong danh sách có 3 số chẵn dương đứng cạnh nhau hay không?                 |" << endl;
        cout  << "|         4. Sắp xếp danh sách theo thứ tự tăng dần.                                                   |" << endl; 
        cout  << "|         5. Xóa tất cả các số nguyên tố trong danh sách.                                              |" << endl;
        cout  << "|         6. Xóa tất cả các phần tử có giá trị trùng nhau trong danh sách, chỉ giữ lại 1 số.           |" << endl;
        cout  << "|         7. Thoát                                                                                     |" << endl;
        cout  << "|                                                                                                      |" << endl;
        cout  << "+------------------------------------------------------------------------------------------------------+" << endl;
        cout  << endl;
}

void ManyThanksMenu(){
   cout << "+-------------------------------------------------------+" << endl;
   cout << "+                                                       +" << endl;
      setColor(0,9);
   cout << "|          Cảm ơn bạn đã sử dụng chương trình!          |"  << endl;
   cout << "|                                                       |"  << endl;
   cout << "|                      --OwO--                          |" << endl;
   cout << "|                                                       |"  << endl;
        setColor(0,15);
   cout << "+                                                       +" << endl;
   cout << "+-------------------------------------------------------+" << endl;
}