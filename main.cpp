//how many notes you will required 

#include <iostream>

using namespace std ;

int main () {
    

    int one , two, five ,ten,twenty,fifty,one_hundred,two_hundred, five_hundred ;
    int amount , remains ;
    
    cout<<"Enter the amount in INR: " ;
    cin>> amount ;

    five_hundred= amount/500 ;
    remains= amount%500 ;
    
    two_hundred= remains/200 ;
    remains= remains%200 ;
    
    one_hundred= remains/100 ;
    remains = remains%100 ;
    
    fifty=remains/50 ;
    remains= remains%50 ;
    
    twenty= remains/20 ;
    remains= remains%20 ;
    
    ten= remains/10 ;
    remains = remains %10 ;
    
    five = remains /5 ;
    remains = remains %5 ;
    
    two = remains/2 ;
    remains = remains% 2 ;
    
    one = remains/1 ;
    remains = remains %1 ;
    
    
    
     cout<<"Five Hundred Rupees : " << five_hundred << endl ;
     cout<<"Two Hundred Rupees  : " << two_hundred  << endl ;
     cout<<"One Hundred Rupees  : " << one_hundred  << endl ;
     cout<<"Fifty Rupees        : " << fifty        << endl ;
     cout<<"Twenty Rupees       : " << twenty       << endl ;
     cout<<"Ten Ruppes          : " << ten          << endl ;
     cout<<"Five Ruppes         : " << five         << endl ;
     cout<<"Two Ruppes          : " << two          << endl ;
     cout<<"One Ruppes          : " << one          << endl ; 
     
    
    return 0;
    
}