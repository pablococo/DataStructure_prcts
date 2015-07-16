////
////  DLinkedList.cpp
////  DataStructure_prcts
////
////  Created by Pablo coco on 2015. 7. 6..
////  Copyright (c) 2015년 Pablo coco. All rights reserved.
////
//
//#include "DLinkedList.h"
//#include <iostream>
//
//
//void ListInit(List * plist){
//    plist->head = (Node*)malloc(sizeof(Node)); //Create Dummy Node
//    plist->head->next = NULL;
//    plist->comp = NULL;
//    plist->numOfData = 0;
//}
//
//void FInsert(List * plist, LData data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = data;
//    
//    newNode->next = plist->head->next;
//    plist->head->next = newNode;
//    
//    (plist->numOfData)++;
//}
//
//int LFirst(List * plist, LData * pdata){
//    if(plist->head->next == NULL)
//        return FALSE;
//    
//    plist->before = plist->head;
//    plist->cur = plist->head->next;
//    
//    *pdata = plist->cur->data;
//    return TRUE;
//}
//
//void SInsert(List * plist, LData data){
//    
//}
//
//void LInsert(List * plist, LData data){
//    if (plist->comp == NULL)
//        FInsert(plist, data);
//    else
//        SInsert(plist, data);
//}
//
//
//
