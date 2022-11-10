#include <iostream>

using namespace std;
class addition{
    public:
     int a=22;
     int b=30;
     int c=50;
     int product(){
     return(a*b*c);
     }
     int sum(){
     return(a+b+c);
     }
};
int main(){
    addition addition1;
    int product,sum;
    product=addition1.product();
    sum=addition1.sum();
    cout<<"the product is "<<product<<endl;
    cout<<"the sum is "<<sum<<endl;
    return 0;
}