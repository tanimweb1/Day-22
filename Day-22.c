#include<stdio.h>

int main(){

// First two maximum numbers in unsorted array
int numbers [] = {13,14,16};
int lengthOfArray = sizeof(numbers)/sizeof(numbers[0]);

if(lengthOfArray<2){
    printf("It's need at least 2 numbers");
}

int first,second;
if(numbers[1]>numbers[0]){
    first = numbers[1];
    second = numbers[0];

}else{
    first = numbers[0];
    second = numbers[1];
}


for(int index =2;index<lengthOfArray;index++){

if(numbers[index]>first){
    second = first;
    first = numbers[index];
    
}else if(numbers[index]>second && numbers[index] != first){
    second = numbers[index];
}

}


printf("Fast largest number is %d\n",first);
printf("Second largest number is %d\n",second);



    
   // First two maximum numbers in sorted array
 int numbers []={10,20,30,40,50};

 int lengthOfArray = sizeof(numbers)/sizeof(numbers[0]);

 if(lengthOfArray<2){
    printf("It's need must 2 numbers");
 }

int first = numbers[lengthOfArray-1];
int second = numbers[lengthOfArray-2];

printf("First number is %d\n", first);
printf("Second number is %d\n", second); 



    // loop in array 

int marks[5] = {1,2,3,4,5};
int sum=0;

for(int i = 0; i<5;i++){
    sum = sum + marks[i];
}

printf(" Sum is %d", sum);





    

    return 0;
}


