#include <iostream> 
 
int findGCD(int a, int b) { 
    while (a != b) {    
        if (a > b) { 
            a = a - b;  
        } else { 
            b = b - a;  
        } 
    } 
    return a;  
} 
 
int main() { 
    int num1, num2; 
 
        
    std::cout << "Nermuceq arajin tivy: "; 
    std::cin >> num1; 
    std::cout << "Nermuceq erkrord tivy: "; 
    std::cin >> num2; 
 
     
    int gcd = findGCD(num1, num2); 
 
     
    std::cout << "Amenamec yndhanur bajanaray = " << gcd << std::endl; 
 
    return 0; 
}