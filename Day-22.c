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

printf(" Sum is %d\n", sum);
printf("Avarage is %0.2f\n", (float)sum/5);


    // Using scanf

int marks [5];
int sum = 0;
printf("enter 5 numbers ");
for(int i = 0; i<5;i++){
    scanf("%d", &marks[i]);
}

for(int i = 0;i<5;i++){
    sum = sum + marks [i];
}
printf("Sum is %d", sum);




    // user given n number and values of numbers to find their sum & avarage
int numbers[100], sum=0,n;

printf("How many numbers : ");
scanf("%d", &n);
printf("Enter the numbers : ");
for(int i = 0;i<n;i++){
    scanf("%d",&numbers[i]);
}
for(int i = 0;i<n;i++){
    sum = sum + numbers[i];

}

printf("Sum is %d\n", sum);
printf("Avarage is %0.2f", (float)sum/n);





    // Write a program that takes numbers and displays maximum

int numbers[100],n;

printf("How many numbers : ");
scanf("%d", &n);
printf("Enter the numbers : ");
for(int i = 0;i<n;i++){
    scanf("%d", &numbers[i]);
}

int max = numbers[0];
for(int i = 1;i<n;i++){

if(max<numbers[i]){
    max = numbers[i];
}

}
printf("Maximum Num is %d", max);



        // Write a program that takes numbers and displays minimum

    int numbers[100], n;
    printf("How many Numbers : ");
    scanf("%d", &n);
    printf("Enter the numbers  : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (min > numbers[i])
            ;
        min = numbers[i];
    }

    printf("Minimum Number is %d", min);


    

    return 0;
}








