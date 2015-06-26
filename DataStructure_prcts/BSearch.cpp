////
////  BSearch.cpp
////  DataStructure_prcts
////
////  Created by Pablo coco on 2015. 6. 25..
////  Copyright (c) 2015년 Pablo coco. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//
////int BSSearch(int ar[], int len, int target){
////    int first = 0;
////    int last = len -1;
////    int mid;
////    
////    while (first <= last) {
////        mid = (first + last) / 2;
////        if (target == ar[mid]) {
////            return mid;
////        }
////        else{
////            if (target < ar[mid]) {
////                last = mid - 1;
////            }else
////                first = mid + 1;
////        }
////    }
////    return -1;
////}
//
////int BSearch(int ar[], int len, int target){
////    int first = 0;
////    int last = len - 1;
////    int mid;
////    
////    while (first <= last) {
////        mid = (first + last) / 2;
////        if (ar[mid] == target) {
////            return mid;
////        }
////        else{
////            if (ar[mid] > target) {
////                last = mid - 1;
////            }else{
////                first = mid + 1;
////            }
////        }
////    }
////    return -1;
////}
//
//int BSearch(int ar[], int len, int target){
//    int first = 0;
//    int last = len - 1;
//    int mid;
//    
//    while (first <= last) {
//        mid = (first+last) / 2;
//        if (ar[mid] == target) {
//            return mid;
//        }else{
//            if(target < ar[mid])
//                last = mid - 1;
//            else
//                first = mid + 1;
//        }
//    }
//    return - 1;
//}
//
//int main(void){
//    int arr[] = {1, 3, 5, 7, 9, 11, 13,15};
//    int idx;
//    
//    idx = BSearch(arr, sizeof(arr)/sizeof(int), 2}{);
//    if (idx == -1) {
//        cout<<"탐색 실패"<<endl;
//    }else{
//        cout<<"타겟 저장 인덱스: "<<idx<<endl;
//    }
//
//    return 0;
//}
