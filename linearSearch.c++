#include<iostream>
using namespace std;

int linearSearch(int nums[],int size, int target){

    for(int i=0;i<size;i++){

        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){

    int nums[]={4,2,5,6,9,14,11};
    int size = 7;
    int target;

    printf("Enter target: ");
    scanf("%d",&target);

    cout << "Index of target value is : " << linearSearch(nums,size,target) << endl;

    return 0;
}