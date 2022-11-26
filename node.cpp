#include<bits/stdc++.h>
#include "consolePro.cpp"
using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

// Hàm
node *GetNode(int dataIn);
void print(node *head);
int size(node *head);
void PushFront(node **head, int dataIn);
void PushBack(node **head, int dataIn);
void insert(node **head, int pos, int data);
bool isPrime(int n);
void deleteNode(node** head_ref, node* del);

// ************************************************************************************************************************

// Lấy giá trị node mới
node *GetNode(int dataIn){
    node *newNode = new node();
    newNode -> data = dataIn;
    newNode -> next = NULL;
    return newNode;
}

// Hàm in danh sách
void print(node *head){
    while(head ->next != NULL){
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << head -> data << "\n";
}

// Hàm trả về kích thước danh sách
int size(node *head){
    int cnt=0;
    while(head != NULL){
        cnt++;
        head = head -> next;
    }
    return cnt;
}

// Hàm thêm node vào đầu danh sách
void PushFront(node **head, int dataIn){
    node *newNode = GetNode(dataIn);
    newNode -> next = *head;
    *head = newNode;
}

// Hàm thêm node vào cuối danh sách
void PushBack(node **head, int dataIn){
    node *newNode = GetNode(dataIn);
    if((*head)==NULL){
        *head = newNode; return;
    }
    node *temp = *head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

// ===============================================================================================================


void insert(node **head, int pos, int data){
    int n = size(*head);
    if(pos < 1 || pos > n + 1){
        setColor(0,12); cout << "Sai dữ liệu!"; return;
    };
    if(pos == 1){ 
        PushFront(head, data); 
        setColor(0,3); cout << "Danh sách liên kết sau khi được thêm: "; print(*head);
        return;
    };
    node *temp = *head;
    for(int i=1; i<pos-1; i++){
        temp = temp -> next;
    }
    node *newNode = GetNode (data);
    newNode -> next =  temp -> next;
    temp -> next = newNode; 
    setColor(0,3); cout << "Danh sách liên kết sau khi được thêm: "; print(*head);
}


// Hàm kiểm tra số nguyên tố
bool isPrime(int n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
void deleteNode(node** head_ref, node* del)
{
    struct node* temp = *head_ref;
    if (*head_ref == NULL || del == NULL)
        return;
 
    // Nếu node cần xoá là node đầu danh sách
    if (*head_ref == del){
        *head_ref = del->next;
          return;
    }
    while (temp->next != del) {
        temp = temp->next;
    }
    temp->next = del->next;
    free(del);
 
    return;
}
 
// end node

