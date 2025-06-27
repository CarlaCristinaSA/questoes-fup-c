#include <stdio.h>

int main() {
    int wifi, login, admin;
    scanf("%d\n%d\n%d", &wifi, &login, &admin);

  if(wifi == 1) {
    if(login == 1) {
        if(admin == 1) {
            printf("done\n");
        } else {
            printf("you must to login as admin\n");
        }
    } 
    else {
        printf("you need to login first\n");
    }
  } 
  else {
    printf("you must connect to wifi\n");
  }




}
