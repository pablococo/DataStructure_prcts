//
//  BSearchRecur.cpp
//  DataStructure_prcts
//
//  Created by Pablo coco on 2015. 6. 25..
//  Copyright (c) 2015년 Pablo coco. All rights reserved.
//

#include <iostream>
using namespace std;

int BSearchRecur(int ar[], int first, int last, int target){
    int mid;
    if (first > last) {
        return -1;
    }
    mid = (first+last) / 2;
    if (ar[mid] == target) {
        return mid;
    }else if (target < ar[mid])
        return BSearchRecur(ar, first, mid-1, target);
    else
        return BSearchRecur(ar, mid+1, last, target);
}

int main(void){
    int arr[] = {1, 3, 5, 7, 9};
    int idx;
    
    idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if (idx == -1) {
        cout<<"탐색 실패"<<endl;
    }
    else
        cout<<"타겟 저장 인덱스: "<<idx<<endl;
    idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 4);
    if (idx == -1) {
        cout<<"탐색 실패"<<endl;
    }else
        cout<<"타겟 저장 인덱스: "<<idx<<endl;
    return 0;
}


