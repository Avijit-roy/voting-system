#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int leading(int *a,int *b, int *c, int *d){
  char le[] = {*a,*b,*c,*d};
  int re;
  int lar = -1;
  char c1 = 'A';
  char d1 = 'A';
  int i = 0;
  while(i != 4){
    if(le[i] > lar){
      lar = le[i];
      d1 = c1;
    }
    c1++;
    i += 1;
  }
  printf("_#_#_#_LEADING BORD_#_#_#_");
  printf("\n\n\nTEAM %c is in leading..",d1);
  printf("\n\n\n1.HOME\n2.EXIT");
  printf("\nENTER YOUR CHOICE: ");
  scanf("%d",&re);
  system("cls");
  return re;
}



int stati(int *a,int *b, int *c, int *d){
  printf("___##########_  statictics of all votes_##########___");
  int re;
  printf("\nA  - %d",*a);
  printf("\nB  - %d",*b);
  printf("\nC  - %d",*c);
  printf("\nD  - %d",*d);
  printf("\n\n\n1.HOME\n2.EXIT");
  printf("\nENTER YOUR CHOICE: ");
  scanf("%d",&re);
  system("cls");
  return re;
}



int casting(int *a,int *b, int *c, int *d){
  int z,re;
  again:
  printf("___##########_please choice your candidate_##########___");
  printf("\n1.A");
  printf("\n2.B");
  printf("\n3.C");
  printf("\n4.D");
  printf("\nplease enter your choice: ");
  scanf("%d",&z);

  if (z == 1){
    *a += 1;
  }
  else if(z == 2){
    *b += 1;
  }
  else if(z == 3){
    *c += 1;
  }
  else if(z == 4){
    *d += 1;
  }
  else {
    system("cls");
    printf("Error: invalid choice\n");
    goto again;
  }
  printf("1.HOME\n2.EXIT");
  printf("\nENTER YOUR CHOICE: ");
  scanf("%d",&re);
  system("cls");
  return re;
}



int main(){
  int a, b, c, d, x, j;
  a = b = c = d = 0;
  char pass[8];
  againb:
  printf("___##########_wealcome to voting 2022_##########___");
  printf("\n1.cast the vote");
  printf("\n2.find the vote count");
  printf("\n3.find the leading candidate");
  printf("\n4.exit");
  printf("\nplease enter your choice: ");
  scanf("%d",&x);
  system("cls");
  if (x == 1){
    int nd1 = casting(&a,&b,&c,&d);
    if (nd1 == 1){
      goto againb;
    }
  }
  else if(x == 2){
    start:
    printf("\n/@/@/@Enter password/@/@/@/\npassword: ");
    scanf("%s",pass);
    if((strcmp(pass,"shadow"))==0){
      system("cls");
      int nd2 = stati(&a,&b,&c,&d);
      if (nd2 == 1){
        goto againb;
      }
    }
    else{
      system("cls");
      printf("1.Try again\n2.Home\n3.Exit\nEnter your choce: ");
      scanf("%d",&j);
      if(j == 1){
        goto start;
      }
      else if(j == 2){
        goto againb;
      }
    }

  }
  else if(x == 3){
    start2:
    printf("\n/@/@/@Enter password/@/@/@/\npassword: ");
    scanf("%s",pass);
    if((strcmp(pass,"shadow"))==0){
      system("cls");
      int nd3 = stati(&a,&b,&c,&d);
      if (nd3 == 1){
        goto againb;
      }
    }
    else{
      system("cls");
      printf("1.Try again\n2.Home\n3.Exit\nEnter your choce: ");
      scanf("%d",&j);
      if(j == 1){
        goto start2;
      }
      else if(j == 2){
        goto againb;
      }
    }
  }
  else if(x == 4){
    printf("_#_#_#_THANKS_FOR_VOTING_#_#_#_");
  }
  else{
    printf("Error: invalid choice....\n\n");
    goto againb;
  }
  return 0;
}