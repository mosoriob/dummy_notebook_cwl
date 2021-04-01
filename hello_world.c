#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )  {

   if( argc == 3 ) {
      printf("Writing hello_world %s times.\n", argv[1]);
   }
   else if( argc > 3 ) {
      printf("Too many arguments supplied.\n");
      exit(1);
   }
   else {
      printf("./hello_world <number of lines> <output_file> \n");
      exit(1);
   }
   FILE *fptr;
   int lines= atoi(argv[1]);
   char * filename=argv[2];
   fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    for (int i = 0; i < lines; i++) 
    	fprintf(fptr, "hello world\n");
    fclose(fptr);
    return 0;

}
