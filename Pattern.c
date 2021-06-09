#include <stdio.h>

int main()

{
  int N, i, j, kolom;
  
  scanf ("%d",&N);

if (N%2==0) {

  for (kolom = 1; kolom <=N; kolom++)  
  {
    for (i=1; i<=N-kolom; i++)  
      printf("*");

    for (i=1; i<=2*kolom-1; i++) 
      printf("#");

    printf("\n");
  }
}

else if (N<=1000) {
	
 for (kolom = 1; kolom <=N; kolom++)  
  {
    for (i=1; i<=N-kolom; i++)  
      printf(" ");

    for (i=1; i<=2*kolom-1; i++) 
      printf("&");

    printf("\n");
  }
  
}

else {
	return 0;
}

return 0;

}
