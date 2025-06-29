#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    int a,b,c;
    int numa = 0,numb = 0,numc = 0,count = 0;
    int totala = 0,totalb = 0,totalc = 0;
    int x = 0;
    char s[100];
    char maior[3];

        printf("\na = ");
    scanf("%d",&a);
        printf("\nb = ");
    scanf("%d",&b);
        printf("\nc = ");
    scanf("%d",&c);

    if (a > b) 
    if (a > c) {
     maior[0] = 'a';
    if (b > c) {
     maior[1] = 'b';
     maior[2] = 'c';
    } else {
        maior[1] = 'c';
        maior[2] = 'b';
    }
    }

     if (b > a)
    if (b > c) {
     maior[0] = 'b';
    if (a > c) {
     maior[1] = 'a';
     maior[2] = 'c';
    } else {
        maior[1] = 'c';
        maior[2] = 'a';
    }
    }
    
     if (c > b) 
    if (c > a) {
     maior[0] = 'c';
    if (b > a) {
     maior[1] = 'b';
     maior[2] = 'a';
    } else {
        maior[1] = 'b';
        maior[2] = 'a';
    }
    }

    while(x < 3) {
     if (maior[0] == 'a') 
   for(int i = 0;i != 100;) {
    if (totala < a && numa != 2) {
    s[count] = maior[0];
    numa++;
    count++;
    totala++;
    } else {
        i = 100;
        numa = 0;
}

   }

  if (maior[0] == 'b')
   for(int i = 0;i != 100;) {
    if (totalb < b && numb != 2) {
    s[count] = maior[0];
    numb++;
    count++;
    totalb++;
    } else {
        i = 100;
        numb = 0;
}
   if (maior[0] != 'b')
   i = 100;
   }

     if (maior[0] == 'c')
    for(int i = 0;i != 100;) {
    if (totalc < c && numc != 2) {
    s[count] = maior[0];
    numc++;
    count++;
    totalc++;
    } else {
        i = 100;
        numc = 0;
}
    }

     if (maior[1] == 'a') 
   for(int i = 0;i != 100;) {
    if (totala < a && numa != 2) {
    s[count] = maior[1];
    numa++;
    count++;
     totala++;
    } else {
        i = 100;
        numa = 0;
}

   }

  if (maior[1] == 'b')
   for(int i = 0;i != 100;) {
    if (totalb < b && numb != 2) {
    s[count] = maior[1];
    numb++;
    count++;
    totalb++;
    } else {
        i = 100;
        numb = 0;
}
   }

     if (maior[1] == 'c')
    for(int i = 0;i != 100;) {
    if (totalc < c && numc != 2) {
    s[count] = maior[1];
    numc++;
    count++;
    totalc++;
    } else {
        i = 100;
        numc = 0;
}
    }

       if (maior[2] == 'a') 
   for(int i = 0;i != 100;) {
    if (totala < a && numa != 2) {
    s[count] = maior[2];
    numa++;
    count++;
    totala++;
    } else {
        i = 100;
        numa = 0;
}

   }

  if (maior[2] == 'b')
   for(int i = 0;i != 100;) {
    if (totalb < b && numb != 2) {
    s[count] = maior[2];
    numb++;
    count++;
    totalb++;
    } else {
        i = 100;
        numb = 0;
}
   }

     if (maior[2] == 'c')
    for(int i = 0;i != 100;) {
    if (totalc < c && numc != 2) {
    s[count] = maior[2];
    numc++;
    count++;
    totalc++;
    } else {
        i = 100;
        numc = 0;
}
    }
    x++;
}
    printf("%s",s);
}

