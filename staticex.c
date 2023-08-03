   // see lines 5 and 6
   
   #include <stdio.h>
   int sum (int num) {
    //if its not static, the numbers dont get totaled, it just prints what you input as num
        static int total = 0;
        //int total = 0;
        total += num;
        return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }