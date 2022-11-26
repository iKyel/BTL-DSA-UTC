#include<bits/stdc++.h>
#include "consolePro.cpp"
#include "node.cpp"

using namespace std;

class ListFunction{
    node *head = NULL;
    public:
        void CreateList();
        void printList();
        void AddNumber();
        void InputK();
        void CheckThreeNumbers();
        void SortGreater();
        void DeletePrimeNumber();
        void DeleteDuplicateNumber();
};

// Phương pháp tạo danh sách liên kết
void ListFunction::CreateList(){
    cout << "Vui lòng nhập danh sách liên kết! (Kết thúc khi nhập '#')" << endl;
    int i=1;
    while(1){     
        string elem; cout << "Nhập node thứ " << i << " : "; cin >> elem;
        if(elem == "#") break;
        int x = atoi(elem.c_str());
        PushBack(&head,x);
        i++;
    }
    cout << endl;
}

// Phương pháp in danh sách liên kết
void ListFunction::printList(){
    return print(head);
}


// Phương pháp thêm 1 phần tử vào vị trí do người dùng chọn
void ListFunction::AddNumber(){
    int pos; int data;
    setColor(0,15);
    cout << endl << "====================================================";
    setColor(0,8); cout << endl <<  "Vị trí thêm vào pos = "; cin >> pos;
    cout << "Giá trị cần thêm vào data = "; cin >> data;
    setColor(0,15);
    cout << "====================================================" << endl;
    insert(&head, pos, data);
}

// Phương pháp Nhập vào một số k (k≠0), đếm xem trong dãy có bao nhiêu số có giá trị = k?
void ListFunction::InputK(){
    int k; 
    node* temp = head;
    setColor(0,15);
    cout << endl << "=======================================";
    setColor(0,8);
    cout << endl << "Nhập số k = "; cin >> k;
    setColor(0,15);
    cout  << "=======================================" << endl;
    int cnt=0;
    while(temp != NULL){
        if(temp -> data == k) cnt++;
        temp = temp -> next;
    }
    setColor(0,3);
    cout << "Số phần tử bằng k là " << cnt;
}

// Phương pháp Kiểm tra xem trong danh sách có 3 số chẵn dương đứng cạnh nhau hay không?
// Nếu có hãy in ra vị trí của các số này.
void ListFunction::CheckThreeNumbers(){
    int cnt=0;
    if(size(head)<3){
        setColor(0,12); cout << "Danh sách liên kết không đủ 3 số!" << endl; return;
    } 
    setColor(0,15);
    node *temp = head;
    while(temp->next->next != NULL){
        if(temp->data %2 ==0 && temp->next->data %2 ==0 && temp->next->next->data %2 ==0){
            cnt++;
        }
        temp = temp->next;
    }
    if(cnt==0){
        setColor(0,12); cout << endl << "Không có bộ ba thoả mãn!" << endl; return;
    }
   else {
        node *temp2 = head;
        setColor(0,3);
        cout << "Vị trí của bộ ba số thoả mãn là: " << endl;
        int i=1;
        while(temp2->next->next != NULL){
        if(temp2->data %2 ==0 && temp2->next->data %2 ==0 && temp2->next->next->data %2 ==0){
            cout << i << " " << i+1 << " " << i+2 << endl; 
            }
        temp2 = temp2->next;
        i++;
        }
        return;
    }
}

// Phương pháp sắp xếp dãy theo thứ tự tăng dần
void ListFunction::SortGreater(){
    if(head == NULL){
        setColor(0,12); cout << "Không thể sắp xếp dãy!" << endl; return;
    }
    node *temp = head;
    node *temp2  = head;
    while(temp != NULL){
        temp2 = temp->next;
        while(temp2 != NULL){
            if(temp->data > temp2->data){
                swap(temp->data, temp2->data);
            }
            temp2 = temp2->next;
        }
        temp = temp -> next;
    }
    setColor(0,3); cout << endl << "Danh sách sau khi sắp xếp tăng dần là: "; printList();
;}

// Phương pháp xoá toàn bộ sô nguyên tố
void ListFunction::DeletePrimeNumber(){
    node* ptr = head;
    node* next;
    while (ptr != NULL) {
        next = ptr->next;
        if (isPrime(ptr->data))
            deleteNode(&head, ptr);
        ptr = next;
    }
    setColor(0,3); cout << endl << "Danh sách sau khi xoá số nguyên tố là: "; printList();
}

// Phương pháp xoá số trùng nhau, chỉ giữ lại 1 số
void ListFunction::DeleteDuplicateNumber(){
    node *ptr1, *ptr2, *dup;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete dup;
            }
            else 
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    setColor(0,3); cout << endl << "Danh sách liên kết sau khi xoá các số trùng nhau là: "; printList();
}

// end code
