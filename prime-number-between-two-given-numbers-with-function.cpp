#include<iostream>//header
#include<math.h>//maths library
using namespace std;//standard

bool isPrime(int num)/*isPrime function begins from here,here this funtion has the data type name bool ,
in this data it will only return true and false values for any i */
{
    for(int i=2;i<=sqrt(num);i++)//this loop will check whether a number is prime or not 
    {
        if(num%i==0)//if any i devides the num then it will return false and will break this loop and exits this function
        {
            return false;
        }
    }
        return true;//if there is no any i who does not devides num,then it will return the true value and then prints this i
}

int main()//execution begins from main function
{
    int n1,n2;//declaing two integer type vaiables
    cout<<"enter the two numbers"<<endl;//printing a line
    cin>>n1>>n2;//taking input from user
    for(int i=n1;i<=n2;i++)//this 1st loop begins and will run from n1 to n2
    {
        if(isPrime(i))/*enteing inside the for loop and will meet to if condition ,and  in the if condition will call 
        the isPrime funtion */
        {
            cout<<i<<endl;//printing thaat prime number
        }
    }
    return 0;
}
