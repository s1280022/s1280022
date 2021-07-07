#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int Dice(int);
int main(){
  srand((unsigned)time(NULL));
  int i,count = 0;
  char n[20];

    
  printf("What is your name?\n");
  printf(">");
  scanf("%s",n);
  printf("Hello, %s!\n",n);
    
  printf("Rolling the dice...\n");

  for(i = 0;i < 2;i++)
    count = count + Dice(i+1);

  
  printf("Total value:%d\n",count);
  
  if(count >= 7) printf("%s won!\n",n);
  else printf("%s lost!\n",n);
  
  return 0;
}

int Dice(int i){
  int num;
  num = rand() % 6 + 1;
  printf("Die %d:%d\n",i,num);
  return num;
}
