#include<iostream>
using namespace std;
class Box{

    int length, breadth, height;
    public:
    Box (){
        length =0;
        breadth = 0;
        height =0;
    }
    Box (int l, int b, int h)
    {
        length =l;
        breadth = b;
        height = h;
    }
    Box(const Box& b){
        length =  b.length;
        breadth = b.breadth;
        height =  b.height;

    }
    int getLength(){
        return length;
    }
    int getBreadth (){
        return breadth;
    }
    int getHeight(){
        return height;
    }
    long long CalculateVolume(){
        return (long long) length * breadth * height;
    }


};
         
void check2()
{

    Box temp;
            int l,b,h;
            cin>>l>>b>>h;
            Box temp(l,b,h);
            
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            

int main()
{
    check2();
}

