#include<stdio.h>

//By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file containing it.

//The syntax looks like this:




static void fun(void) {
   printf("I am a static function.");
}


int runner()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}
