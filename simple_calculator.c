#include<stdio.h>
int main(){


printf("simple calculator\n");
char operator;

printf("enter a operator (+,-,*,/)\n");

scanf("%c",&operator);

float a,b,c;
printf("enter first number");
scanf("%f",&a);

printf("\n enter secound number");

scanf("%f",&b);

switch(operator){

case '+':

c=a+b;
printf("the answer is %f \n",c);
break;

case '-':
c=a-b;


printf("the answer is %f \n",c);
break;


case '*':

c=a*b;
printf("the answer is %f \n",c);
break;




case '/':

if(b!=0){
c=a/b;
printf("the answer is %f \n",c);
}
else{

    printf("invalid");
}

break;


}

    return 0;
}