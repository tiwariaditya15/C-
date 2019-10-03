#include <iostream>
using namespace std;
class Example;
Example operator +(Example&, Example&);
Example operator -(Example&, Example&);
class Example{
int inches, feet;
public:
Example(){}
Example(int feetC, int inchesC){
feet = feetC;
inches = inchesC;
}
int getInches();
int getFeet();
friend Example operator +(Example&, Example&);
friend Example operator -(Example&, Example&);
};
int Example::getInches(){
return inches;
}
int Example::getFeet(){
return feet;
}
Example operator +(Example &var1, Example &var2){
Example temp;
temp.feet = var1.feet + var2.feet;
temp.inches = var1.inches + var2.inches;
if( temp.inches >= 12){
temp.feet++;
temp.inches -= 12;
}
return temp;
}
Example operator -(Example &var1, Example &var2){
Example temp;
if( var1.feet < var2.feet){
temp.feet = var2.feet - var1.feet;
}else{
temp.feet = var1.feet - var2.feet;
}
if (var1.inches < var2.inches) {
temp.inches = var2.inches - var1.inches;
}else{
temp.inches = var1.inches - var2.inches;
}
if( temp.inches >= 12){
temp.feet++;
temp.inches -= 12;
}
return temp;
}
int main()
{
Example obj1(15, 12), obj2(10, 2), obj3;
cout<<"\nobj1(feets inches):"<<obj1.getFeet()<<" "<<obj1.getInches()<<" & "<<"obj2(feets inches):"<<obj2.getFeet()<<" "<<obj2.getInches()<<endl;
obj3 = obj1 + obj2;
cout<<"\nobj3 after (obj1+obj2)[in feet inches]:"<<obj3.getFeet()<<" "<<obj3.getInches()<<endl;
obj3 = obj1 - obj2;
cout<<"\nobj3 after (obj1-obj2)[in feet inches]:"<<obj3.getFeet()<<" "<<obj3.getInches()<<endl;
return 0;
}