#include <stdio.h>
#include "ArrayList.h"


void ListInit(List * plist)
{
	(plist->numOfData) = 0;
	(plist->curPosition) = -1;
}

void LInsert(List * plist, LData data)
{
	if(plist->numOfData > LIST_LEN) 
	{
		puts("¿˙¿Â¿Ã ∫“∞°¥…«’¥œ¥Ÿ.");
		return;
	}

	plist->arr[plist->numOfData] = data;
	(plist->numOfData)++;
}

int LFirst(List * plist, LData * pdata)
{
	if(plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List * plist, LData * pdata)
{
	if(plist->curPosition >= (plist->numOfData)-1)
		return FALSE;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List * plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	for(i=rpos; i<num-1; i++)
		plist->arr[i] = plist->arr[i+1];

	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)){
    
}


//
//---------------------------------------------------------------Main Function---------------------------------------------------------------
//


int main(void){
    int data;
    int sum = 0;
    
    List list;
    ListInit(&list);
    LInsert(&list, 1);
    LInsert(&list, 2);
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsert(&list, 6);
    LInsert(&list, 7);
    LInsert(&list, 8);
    LInsert(&list, 9);
    
    if(LFirst(&list, &data)){
        sum += data;
        printf("1번 : %d \n", data);
        while (LNext(&list, &data)) {
            printf("데이터 : %d \n", data);
            sum += data;
        }
        
    }
    printf("현제 데이터의 총합 : %d \n", sum);
    
    if (LFirst(&list, &data)) {
        if ((data % 2 == 0)||(data % 3 ==0))
            LRemove(&list);
        while (LNext(&list, &data)) {
            if ((data % 2 == 0)||(data % 3 ==0))
                LRemove(&list);
        }
    }
    
    printf("2의 배수와 3의 배수를 삭제한 이후의 데이터\n");
    
    if (LFirst(&list, &data)) {
        printf("데이터 : %d \n", data);
        while (LNext(&list, &data)) {
            printf("데이터 : %d \n", data);
        }
    }
}























