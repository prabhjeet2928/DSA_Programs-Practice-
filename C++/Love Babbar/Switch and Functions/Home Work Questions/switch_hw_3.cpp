#include<iostream>
using namespace std;
int main(){
    int amount, notes2000, notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1;
    notes2000 = notes500 = notes200 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;
    cout<<"Enter the Total Amount: ";
    cin>>amount;
    cout<<endl;

    switch(true){
        case 1:     notes2000 = amount/2000;
                    cout<<"The count Rs2000 note is : "<<notes2000<<endl;
                    amount = amount - (notes2000*2000);
                    
        case 2:     notes500 = amount/500;
                    cout<<"The count Rs500 note is : "<<notes500<<endl;
                    amount = amount - (notes500*500);
            
        case 3:     notes200 = amount/200;
                    cout<<"The count Rs200 note is : "<<notes200<<endl;
                    amount = amount - (notes200*200);
                    
        case 4:     notes100 = amount/100;
                    cout<<"The count Rs100 note is : "<<notes100<<endl;
                    amount = amount - (notes100*100);
                    
        case 5:     notes50 = amount/50;
                    cout<<"The count Rs50 note is : "<<notes50<<endl;
                    amount = amount - (notes50*50);
                    
        case 6:     notes20 = amount/20;
                    cout<<"The count Rs20 note is : "<<notes20<<endl;
                    amount = amount - (notes20*20);
                    
        case 7:     notes10 = amount/10;
                    cout<<"The count Rs10 note is : "<<notes10<<endl;
                    amount = amount - (notes10*10);
                    
        case 8:     notes5 = amount/5;
                    cout<<"The count Rs5 note is : "<<notes5<<endl;
                    amount = amount - (notes5*5);
                    
        case 9:     notes2 = amount/2;
                    cout<<"The count Rs2 note is : "<<notes2<<endl;
                    amount = amount - (notes2*2);
                    
        case 10:    notes1 = amount/1;
                    cout<<"The count Rs1 note is : "<<notes1<<endl;
                    amount = amount - (notes1*1);
                    
    }
    cout<<endl;
}