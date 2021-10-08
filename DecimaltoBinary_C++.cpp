//Brendan Li

#include <iostream>
#include <assert.h>     /* assert */
#include <string>
using namespace std;

//Stack Class, used for iterative method
class Stack{
private:
    static const int DEFAULT_CAPACITY=100;//default capacity
    int items[DEFAULT_CAPACITY];//create item list
    int top;//top of stack
public:
    //constructor setting top to -1
    Stack(){top=-1;}

    //checks if stack is empty, true if empty, false if not
    virtual bool isEmpty() const{
        return (top<0);//check if empty still
    }

    //adds a new entry to the top of this stack
    virtual bool push(const int& newEntry) {
        //boolean to return
        bool result = false;
        //if not at top of stack
        if (top < DEFAULT_CAPACITY - 1) {
            top++;//increment top
            items[top] = newEntry;//add item to end
            result = true;//return
        }
        return result;//return
    }

    //removes the top of this stack
    virtual bool pop() {
        //bool to return
        bool result = false;
        //if stack isn't empty
        if (!isEmpty()) {
            top--;//decrement/take off top item
            result = true;//return
        }
        return result;//return
    }

    //returns the top of this stack
    virtual int peek() const{
        assert(!isEmpty());//assert function
        return items[top];//return top of the stack
    }
};

class Dec2Bin {
public:
    //positive decimal integer to be converted to binary
    int decNum;

    //constrctor to initialize decNum
    Dec2Bin():decNum(0) {}

    //ask the user for the decimal number to be converted to binary
    void readDecNum(){
        //ask user to enter value to convert to decimal
        cout<<"Please enter the decimal number to be converted to binary:"<<endl;
        cin>>decNum;//input into decNum
    }

    //display the binary equivalent of d using a recrusive method where d initirally takes the value of decNum
    void dec2bin_rcv(int d){
        int bin=d;//make new int to store binary
        if(bin==0){return;}//if the dec value is 0, return
        else{
            dec2bin_rcv(bin/2);//call recursive method
            cout<<bin%2;//display remainder
        }
    }

    //display the binary equivalent of d using a iterative method by utilizing stack
    void dec2bin_itr(){
        Stack bin;//create stack element
        int dec=decNum;//create a decimal number to represent decNum
        //while dec is greater than 0
        while(dec){
            int rem=dec%2;//get remainder
            dec=dec/2;//divider dec by two
            bin.push(rem);//push remainder in stack
        }
        //while the bin isn't empty
        while(!bin.isEmpty()){
            int t=bin.peek();//store top of stack in int
            bin.pop();//pop the stack
            cout<<t;//display the previous top
        }
    }
};

//Main function
int main() {
    Dec2Bin db;
    db.readDecNum();
    cout<<"The binary number using recursive method = ";
    db.dec2bin_rcv(db.decNum);
    cout<<"\nThe binary number using iterative method = ";
    db.dec2bin_itr();
    return 0;
}
