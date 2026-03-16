    #include<iostream>
    using namespace std;

    class Number;

    class Calculator{
    public:

    int add(int a, int b){
            return (a + b);
        }

        int sum(Number, Number);
        
    };

    class Number{
        int a;

        // declaring friend function
        friend int Calculator::sum(Number, Number);

    public:
        void setData(int n){
            a = n;
        }
    };

    int Calculator::sum(Number n1, Number n2){
        return n1.a + n2.a;
    }

    int main(){
        Number x, y;
        x.setData(10);
        y.setData(20);

        Calculator calc;
        cout<<"Sum is "<<calc.sum(x,y);

        return 0;
    }