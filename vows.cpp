#include <iostream>

using namespace std;

int main()
{
   char vowels[] = {'a', 'e', 'i', 'o', 'u'};
   char find;
   int flag = 0;
   cin>>find;
   for(int i = 0; i < 5; i++){
       if( find == vowels[i]){
           cout<<"\nVowels";
           flag = 1;
       }
       
   }
   
   if ( flag == 0 ) {
       cout<<"\nConsonants";
   }

   return 0;
}
