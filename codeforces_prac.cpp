#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod
// fact-->factorial till 10^6
// order_of_key(ordered_st)--> returns total num of elements in the set which are smaller than the given element(logN)
class node
{
public:
    int val;
    node *next;
    node(int x)
    {
        val = x;
        next = NULL;
    }
};

class stack
{
public:
    int size;
    node *top;

    stack()
    {
        size = 0;
        top = NULL;
    }

    void push(int x)
    {
        node *temp = new node(x);
        temp->next = top;
        top = temp;
        size++;
    }

    int pop()
    {
        if (top->value == NULL)
        {
            return -1;
        }
        int ans = top->value;
        node *temp=top ;
        top=temp->next ;
        
        delete temp ;

        size--;
        return ans;
    }

    int stack_size(){
        return size ;
    }
};

int main()
{
}
