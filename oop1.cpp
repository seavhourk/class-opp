#include<iostream>
#include<string>

using namespace std;

class Utils{  
    private:
      int s;
      double average;

    public:
       void sum(int x, int y){
        s = x + y;
        cout << "Sum: " << s << endl;
       }
       void average(double x, double y){
        average = (x + y) / 2;
        cout << "Average: " << average << endl;
       }
};

int main(){
    Utils util;
    util.sum(1,2);
    util.average(3.5,4.5);
    return 0;
}