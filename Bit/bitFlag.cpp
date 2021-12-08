#include <iostream>
#include <bits/stdc++.h>
#include <bitset>

using namespace std;
void test1();
int main()
{
    // Define a bunch of physical/emotional states
    const unsigned char isHungry = 1 << 0;   // 0000 0001
    const unsigned char isSad = 1 << 1;      // 0000 0010
    const unsigned char isMad = 1 << 2;      // 0000 0100
    const unsigned char isHappy = 1 << 3;    // 0000 1000
    const unsigned char isLaughing = 1 << 4; // 0001 0000
    const unsigned char isAsleep = 1 << 5;   // 0010 0000
    const unsigned char isDead = 1 << 6;     // 0100 0000
    const unsigned char isCrying = 1 << 7;   // 1000 0000
    const unsigned char chiho = 1 << 0;
    const unsigned char hahaha = chiho<<1;
    unsigned char me = 0;                    // all flags/options turned off to start
    me |= isHappy | isLaughing;              // I am happy and laughing
    me &= ~isLaughing;                       // I am no longer laughing
    // Query a few states (we'll use static_cast<bool> to interpret the results as a boolean value rather than an integer)
    std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
    std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n';
    std::cout << "chiho " << chiho << '\n';
    std::cout << "hahaha " << hahaha << hahaha << '\n';
    test1();
    return 0;
}
void test1()
{
    const int option0 = 0;
    const int option1 = 1;
    const int option2 = 2;
    const int option3 = 3;
    const int option4 = 4;
    const int option5 = 5;
    const int option6 = 6;
    const int option7 = 7;

    std::bitset<8> bits(0x2);
    bits.set(option4);
    bits.flip(option5);
    bits.reset(option5);

    std::cout << "Bit 4 has value: " << bits.test(option4) << '\n';
    std::cout << "Bit 5 has value: " << bits.test(option5) << '\n';
    std::cout << "All the bits: " << bits << '\n';

    return;
}