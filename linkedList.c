#include<stdio.h>
#include<stdlib.h>

struct nodeSLL{
    int data;
    struct nodeSLL *next;
};

struct nodeSLL *headSLL = NULL;

//################################################################

struct nodeCLL{
    int data;
    struct nodeCLL *next;
};

struct nodeCLL *headCLL = NULL;

//################################################################

struct nodeDLL{
    struct nodeDLL *prev;
    int data;
    struct nodeDLL *next;
};

struct nodeDLL *headDLL = NULL;

//################################################################

void insertAtBegSLL(){
    struct nodeSLL *newNode = (struct nodeSLL *)malloc(sizeof(struct nodeSLL));
    printf("Enter the element to insert at beg = ");
    scanf("%d", &newNode->data);
    
    if(headSLL == NULL){
        headSLL = newNode;
        newNode->next = NULL;
    }else{
        newNode->next = headSLL;
        headSLL = newNode;
    }
}

void insertAtEndSLL(){
    struct nodeSLL *newNode = (struct nodeSLL *)malloc(sizeof(struct nodeSLL));
    printf("Enter the element to insert at end = ");
    scanf("%d", &newNode->data);
    
    if(headSLL == NULL){
        headSLL = newNode;
        newNode->next = NULL;
    }else{
        struct nodeSLL *temp = headSLL;
        while(temp->next != NULL){
            temp = temp->next;
        }
        newNode->next = NULL;
        temp->next = newNode;
    }
}

void insertAfterKeySLL(){
    struct nodeSLL *newNode = (struct nodeSLL *)malloc(sizeof(struct nodeSLL));
    printf("Enter the element to insert in middle = ");
    scanf("%d", &newNode->data);
    
    int key;
    printf("Enter the key element = ");
    scanf("%d", &key);
    
    struct nodeSLL *temp = headSLL;
    
    if(temp == NULL){
        printf("No node exists");
    }else{
        int flag = 0;
        while(temp->next != NULL){
            if(temp->data == key){
                flag=1;
                break;
            }
            temp = temp->next;
        }
        if(flag == 0){
            printf("Element not found");
        }else{
            
        }
    }
}

void deleteFromBegSLL(){
    
}

void deleteFromEndSLL(){
    
}

void deleteAfterKeySLL(){
    
}

void displaySLL(){
    struct nodeSLL *temp = headSLL;
    if(temp == NULL){
        printf("No node exist...");
    }else{
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
    }
}

//################################################################

void insertAtBegDLL(){
    
}

void insertAtEndDLL(){
    
}

void insertAfterKeyDLL(){
    
}

void deleteFromBegDLL(){
    
}

void deleteFromEndDLL(){
    
}

void deleteAfterKeyDLL(){
    
}

void displayDLL(){
    
}

//################################################################

void insertAtBegCLL(){
    
}

void insertAtEndCLL(){
    
}

void insertAfterKeyCLL(){
    
}

void deleteFromBegCLL(){
    
}

void deleteFromEndCLL(){
    
}

void deleteAfterKeyCLL(){
    
}

void displayCLL(){
    
}

//################################################################

void SinglyLinkedList(){
    int ch;
    do{
        printf("\n\nSINGLE LINKED LIST MENU\n");
        printf("\n1. Insertion at Beginning");
        printf("\n2. Insertion at End");
        printf("\n3. Insertion after a given key element");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Delete after a given key element");
        printf("\n7. Display all elements");
        printf("\n0. Back");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertAtBegSLL();
                break;
            case 2: insertAtEndSLL();
                break;
            case 3: insertAfterKeySLL();
                break;
            case 4: deleteFromBegSLL();
                break;
            case 5: deleteFromEndSLL();
                break;
            case 6: deleteAfterKeySLL();
                break;
            case 7: displaySLL();
                break;
            case 0:
                break;
            default: printf("\nWrong choice entered...");
        }
    }while(ch != 0);
}

//################################################################

void DoublyLinkedList(){
    int ch;
    do{
        printf("\n\nDOUBLYLINKED LIST MENU\n");
        printf("\n1. Insertion at Beginning");
        printf("\n2. Insertion at End");
        printf("\n3. Insertion after a given key element");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Delete after a given key element");
        printf("\n7. Display all elements");
        printf("\n0. Back");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertAtBegDLL();
                break;
            case 2: insertAtEndDLL();
                break;
            case 3: insertAfterKeyDLL();
                break;
            case 4: deleteFromBegDLL();
                break;
            case 5: deleteFromEndDLL();
                break;
            case 6: deleteAfterKeyDLL();
                break;
            case 7: displayDLL();
                break;
            case 0:
                break;
            default: printf("\nWrong choice entered...");
        }
    }while(ch != 0);
}

//################################################################

void CircularLinkedList(){
    int ch;
    do{
        printf("\n\nCIRCULAR LINKED LIST MENU\n");
        printf("\n1. Insertion at Beginning");
        printf("\n2. Insertion at End");
        printf("\n3. Insertion after a given key element");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Delete after a given key element");
        printf("\n7. Display all elements");
        printf("\n0. Back");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertAtBegCLL();
                break;
            case 2: insertAtEndCLL();
                break;
            case 3: insertAfterKeyCLL();
                break;
            case 4: deleteFromBegCLL();
                break;
            case 5: deleteFromEndCLL();
                break;
            case 6: deleteAfterKeyCLL();
                break;
            case 7: displayCLL();
                break;
            case 0:
                break;
            default: printf("\nWrong choice entered...");
        }
    }while(ch != 0);
}

//################################################################

int main(){
    int ch;
    do{
        printf("\n\nMENU\n");
        printf("\n1. Singly Linked List");
        printf("\n2. Doubly Linked List");
        printf("\n3. Circular Linked List");
        printf("\n0. Exit");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: SinglyLinkedList();
                break;
            case 2: DoublyLinkedList();
                break;
            case 3: CircularLinkedList();
                break;
            case 0: exit(0);
                break;
            default: printf("\nWrong choice entered...");
        }
    }while(ch != 0);
    
    return 0;
}
