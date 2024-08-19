#include <iostream>
using namespace std;

//Converter of currency specifically: gourdes to us dollar
int main() {
    char choice;
    double htg;
    double usd;
  
    do{
    cout<<"Do you want to convert G(gourde) to us dollar or $(us dollar) to gourde?"<<endl;
    cout<<"Pick G or g for Gourde and $ for US dollar"<<endl;
    cin>>choice;
    if(choice=='G'||choice=='g'){
       cout<<"Enter a gourde value: "<<endl;
       cin>>htg;
      double usd = htg/135;
        cout<<"The value in us dollar is:  $"<<usd<<endl;
    }
    else if (choice=='$'){
        cout<<"Enter a us dollar value: "<<endl;
       cin>>usd;
       double htg=usd*135;
        cout<<"The Value in gourde is: "<<htg<<"G"<<endl;
    }
    else{
        cout<<"Error in choosing the value, only pick G or g or $, Please try again";
    }
    }while(choice=='G'||choice=='$'||choice=='g');
}
 
    
    
    
    
    





