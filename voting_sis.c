#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//THIS CODE IS DEVELOPED BY AVIJIT ROY
//UPDATED 07/07/2022 :-)

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
  printf("\t\t\t_#_#_#_LEADING BORD_#_#_#_");
  printf("\n\n\n\t\t\t\tTEAM %c is in leading..",d1);
  printf("\n\n\t\t\t1.HOME\n\n\t\t\t2.EXIT");
  printf("\n\n\t\t\tENTER YOUR CHOICE: ");
  scanf("%d",&re);
  system("clear");
  return re;
}



int stati(int *a,int *b, int *c, int *d){
  int re;
  printf("\t\t\t___##########_  statictics of all votes_##########___");
  printf("\n\n\t\t\t\t\t#####################");
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tA  - %d      #",*a);
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tB  - %d      #",*b);
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tC  - %d      #",*c);
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\tD  - %d      #",*d);
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#####################");
  printf("\n\n\t\t\t1.HOME\n\n\t\t\t2.EXIT");
  printf("\n\n\t\t\tENTER YOUR CHOICE: ");
  scanf("%d",&re);
  system("clear");
  return re;
}



int casting(int *a,int *b, int *c, int *d){
  int z,re;
  again:
  printf("\t\t\t___##########_please choose your candidate_##########___");
  printf("\n\n\t\t\t\t\t#####################");
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t1.A         #");
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t2.B         #");
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t3.C         #");
  printf("\n\t\t\t\t\t#                   #\n\t\t\t\t\t#\t4.D         #");
  printf("\n\t\t\t\t\t#\t\t    #\n\t\t\t\t\t#####################");
  printf("\n\n\t\t\tplease enter your choice: ");
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
    system("clear");
    printf("\n\tError: invalid choice\n\a");
    goto again;
  }
  printf("\n\n\t\t\t1.HOME\n\n\t\t\t2.EXIT");
  printf("\n\n\t\t\tENTER YOUR CHOICE: ");
  scanf("%d",&re);
  system("clear");
  return re;
}



int main(){
  int a, b, c, d, x, j;
  a = b = c = d = 0;
  char pass[8];
  againb:
  //MAIN MANU......
  printf("\t\t\t\t\t___##########_wealcome to voting 2022_##########___");
  printf("\n\n\t\t\t\t\t######################################################");
  printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t1.cast the vote                              #");
  printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t2.find the vote count(admins only)           #");
  printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t3.find the leading candidate(admins only)    #");
  printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t#\t4.exit                                       #");
  printf("\n\t\t\t\t\t#                                                    #\n\t\t\t\t\t######################################################");
  printf("\n\n\t\t\t\t\tplease enter your choice: ");
  scanf("%d",&x);
  system("clear");
  if (x == 1){
    int nd1 = casting(&a,&b,&c,&d);
    if (nd1 == 1){
      goto againb;
    }
  }
  else if(x == 2){
    start:
    //PASSWORD IS shadow
    printf("\n\n\t\t\t/@/@/@Enter password/@/@/@/\n\n\t\t\tpassword: ");
    scanf("%s",pass);
    if((strcmp(pass,"shadow"))==0){
      system("clear");
      int nd2 = stati(&a,&b,&c,&d);
      if (nd2 == 1){
        goto againb;
      }
    }
    else{
      system("clear");
      printf("\n\n\t\t\t1.Try again\n\n\t\t\t\a2.Home\n\n\t\t\t3.Exit\n\n\t\t\tEnter your choce: ");
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
    //PASSWORD IS shadow
    printf("\n\n\t\t\t/@/@/@Enter password/@/@/@/\n\n\t\t\tpassword: ");
    scanf("%s",pass);
    if((strcmp(pass,"shadow"))==0){
      system("clear");
      int nd3 = leading(&a,&b,&c,&d);
      if (nd3 == 1){
        goto againb;
      }
    }
    else{
      system("clear");
      printf("\n\n\t\t\t1.Try again\n\n\t\t\t\a2.Home\n\n\t\t\t3.Exit\n\n\t\t\tEnter your choce: ");
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
    printf("\n\n\t\t\t_#_#_#_THANKS_FOR_VOTING_#_#_#_");
  }
  else{
    printf("\n\n\t\t\tError: invalid choice....\n\a\n");
    goto againb;
  }
  return 0;
}
