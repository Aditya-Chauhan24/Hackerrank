# include<stdio.h>
// multiple of 7
int main() {
  int n;
  do {
      printf("enter number multiple of 7: ");
      scanf("%d", &n);
      printf("%d\n", n);

      if(n % 7 == 0) {
          break;
    }

  } while(1); // no space between while and brackets.
  printf("thank you \n");
  
   return 0;
}


