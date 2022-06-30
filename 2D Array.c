#include <stdio.h>

int main(void) {

  // 2d arrayclear
  int num[3][4] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };

  int
    ROWS = 3,
    COLS = 4,
    i, j;

  // pointer
  int *ptr = &num[0][0];

  // print the element of the array via pointer ptr
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("%d ", *(ptr + i * COLS + j));
    }
    printf("\n");
  }

  return 0;
}






/*#include<stdio.h>
int main()
{

    int A[3][4],i,c;
    printf(" Enter Any  Numbers=");
    for(i=0;i<3;i++)
    {
        for(c=0;c<4;c++)
        {
            printf("\nA[%d][%d]=",i,c);
            scanf("%d",&A[i][c]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(c=0;c<4;c++)

        {
            printf("%d\n",A[i][c]);
        }
        printf("\n");
    }



    getch();


}*/

/*#include <stdio.h>

int main () {

   int a,n;
   printf("Enter Any Numbers:");
   scanf("%d",&n);

   // for loop execution
   for( a = 0; a < n; a = a + 1 ){
      printf("value of a: %d\n",a);
   }

   return 0;
}
*/


/*

#include <stdio.h>

int main()
{

    char c;
 char upperCase_vowel,lowerCase_vowel;
 printf("Enter Any Latter:");
 scanf("%c",&c);

 lowerCase_vowel=(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u');
 upperCase_vowel=(c=='A'|| c=='E'|| c=='I'|| c=='o'|| c=='U');
 if(lowerCase_vowel||upperCase_vowel){
    printf("Number Is Vowel= %c",c);
 }

 else{
    printf("Number Is Consonant=%c",c);
 }

   return 0;
}
*/








