# include<stdio.h>
// odd numbers between 5 to 50

int main() {
  for(int i=5; i<=50; i++) {
    if(i % 2 != 0){
      printf("%d\n",i);
    } //odd
  }

  return 0;
}


