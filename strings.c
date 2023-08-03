#include <stdio.h>
#include <string.h>

int main() {

    // pointer notation, immutable
    char * first_name = "John";
    // array, mutable, strings are an array of characters in c
    char last_name[] = "Doe";
    
    char name[100];
    
    // Change the first character in the array to B 
    last_name[0] = 'B';

    //edits name with first and last name (buffer/variable, the string, inputs)
    sprintf(name, "%s %s", first_name, last_name);

    //compare name, which contains "John Boe" with the input "John Boe", if equal it equals 0
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    //null the name 
    name[0]='\0';

    //concatenate name with first name, allow 4 chars from source
    strncat(name,first_name,4);
    //concatenate name with last name, allow 20 chars from source
    strncat(name,last_name,20);

    //print the name, since it was concatenated above, it doesnt include the space
    printf("%s\n",name); 
    
    return 0;
}