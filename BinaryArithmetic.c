#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* signChecker(char *bin){
  int carry = 1;
  if (bin[0] == "1"){
    for (int j = 0; bin[j] != "\0"; j++){
      if (bin[j] == "1"){
        bin[j] = "0";
      }
      else if(bin[j] == "0"){
        bin[j] = "1";
    }
    }
    for(int k = strlen(bin) - 1; bin[k] >= 0; k--){
      if(carry == 1 && bin[k] == "1"){
        bin[k] = "0";
      }
      else if(carry == 1 && bin[k] == "0"){
        bin[k] = "1";
        carry = 0;
    }
    else{
      bin[k] = bin[k];
    }
  }
}
else{
  bin = bin;
}
return bin;
}

int main(){
  char bin1[100];
  char bin2[100];

  printf("Please input the first binary number here: \n");
  scanf("%s", &bin1);
  printf("Please input the second binary number here: \n");
  scanf("%s", &bin2);

  char a[100];
  char b[100];

  strcpy(a, signChecker(bin1));
  strcpy(b, signChecker(bin2));

  while(strlen(a) != 8 && strlen(b) == 8){
    printf("The first input is not an 8 bit binary number\n");
    printf("Enter the first binary input again:\n");
    scanf("%s", &a);
  }
  while(strlen(a) == 8 && strlen(b) != 8){
    printf("The second input is not an 8 bit binary number\n");
    printf("Enter the second binary input again:\n");
    scanf("%s", &b);
  }
  while(strlen(a) != 8 && strlen(b) != 8){
    printf("The inputs are not an 8 bit binary number\n");
    printf("Enter the first binary input again:\n");
    scanf("%s", &a);
    printf("Enter the second binary input again:\n");
    scanf("%s", &b);
  }

  char adder[100] = "........";
  int carry2 = 0;
  for(int j = strlen(adder) -1; adder[j] >= 0; j--){
      if(carry2 ==1 && a[j] == "1" && b[j] == "1"){
        adder[j] = "1";
        carry2 = 1;
      }
      else if (carry2 ==1 && a[j] == "1" && b[j] == "0"){
        adder[j] = "0";
        carry2 = 1;
      }
      else if(carry2 ==1 && a[j] == "0" && b[j] == "1"){
        adder[j] = "0";
        carry2 = 1;
      }
      else if(carry2 ==1 && a[j] == "0" && b[j] == "0"){
        adder[j] = "1";
        carry2 = 0;
      }
      else if(carry2 ==0 && a[j] == "0" && b[j] == "1"){
        adder[j] = "1";
        carry2 = 0;
      }
      else if(carry2 ==0 && a[j] == "1" && b[j] == "0"){
        adder[j] = "1";
        carry2 = 0;
      }
      else if(carry2 ==0 && a[j] == "1" && b[j] == "1"){
        adder[j] = "0";
        carry2 = 1;
      }
      else if(carry2 ==0 && a[j] == "0" && b[j] == "0"){
        adder[j] = "0";
        carry2 = 0;
      }
  }
printf("The summation of your 2 binary numbers is %s\n", adder);
}
