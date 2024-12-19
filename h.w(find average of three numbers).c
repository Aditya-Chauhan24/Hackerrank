# include<stdio.h>
// average of any three numbers

int main(){
  int a;
  printf("enter ur first number: ");
  scanf("%d", &a);
  int b;
  printf("enter ur 2nd number: ");
  scanf("%d", &b);
  int c;
  printf("enter ur 3rd number: ");
  scanf("%d", &c);

  int sum = a + b + c;

  printf("average of the number is : %d", sum / 3 );


  return 0;
}

