// Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.

// Now let's imagine a typical morning in your family. You haven't woken up yet, and Mom is already going to work. She has been so hasty that she has nearly forgotten to leave the two of her darling children some money to buy lunches in the school cafeteria. She fished in the purse and found some number of coins, or to be exact, n coins of arbitrary values a1, a2, ..., an. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

// As you woke up, you found Mom's coins and read her note. "But why split the money equally?" — you thought. After all, your twin is sleeping and he won't know anything. So you decided to act like that: pick for yourself some subset of coins so that the sum of values of your coins is strictly larger than the sum of values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins, the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid suspicions: you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them in the described manner.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int size;
    cin>>size;
    vector<int> m;
     int coin;

    for (int i = 0; i < size; ++i) {
    cin >> coin;
    m.push_back(coin);
    }

    sort(m.begin(),m.end(),greater<int>());

    int sum = accumulate(m.begin(),m.end(),0);
    int min=0;
    int max = 0;
    int i;
    for(i =0;i<=m.size();i++)
    {       
        max += m[i];
        min = sum-max;

        if(max>min){ 
        break;
        }
    }

    cout<<i+1;
}
