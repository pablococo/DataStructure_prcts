//
//  LinkedRead.cpp
//  DataStructure_prcts
//
//  Created by Pablo coco on 2015. 7. 3..
//  Copyright (c) 2015년 Pablo coco. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct _node{
    int data;
    struct _node * next;
}Node;

int main(void){
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;
    
    Node * newNode = NULL;
    int readData;
    
    while (1) {
        printf("자연수 입력 : ");
        scanf("%d", &readData);
        if (readData < 1) {
            break;
        }
        
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;
        
        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;
        tail = newNode;
    }
    printf("\n");
    
    
    //output, print
    printf("입력받은 데이터의 전체출력! \n");
    if (head == NULL) {
        printf("변수 없음.\n");
    }else{
        cur = head;
        printf("%d ", cur->data);
        
        while (cur->next != NULL) {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");
    
    //unlock memory
    if (head == NULL) {
        return 0;
    }else{
        Node * delNode = head;
        Node * delNextNode = head->next;
        
        printf("%d을(를) 삭제합니다. \n", head->data);
        free(delNode);
        
        while (delNextNode != NULL) {
            delNode = delNextNode;
            delNextNode = delNextNode->next;
            
            printf("%d을(를) 삭제합니다. \n", delNode->data);
            free(delNode);
        }
    }
    return 0;
}