#include <iostream>
using namespace std;
//~~~~~ATM MACHINE PROGRAMM~~~~
//1 = show the blance 
//2 = diposit blance 
//3 = withdro blance 
void display_menu(){
    cout<<"~~~~~~ATM MACHINE PROGRAM~~~~~~~\n";
    cout<<"1 = show the your blance\n";
    cout<<"2 = diposit mony\n";
    cout<<"3 = withdro mony\n";
}
float diposit_mony(float totle){
    float dipost;
    cout<<"enter your diposit mony\n";
    cin>>dipost;
    totle +=dipost;
    cout<<totle;
}
float withdro_mony(float totle){
    float withdro;
    cout<<"enter your withdro mony cout:\n";
    cin>>withdro;
    totle -=withdro;
    cout<<totle;
}
int main(){
    int user_card_number;
    int chaois;
    display_menu();
    cout<<"\n\n\n";
    cout<<"blances:" <<"233,43441,4343,3333\n";
    //show the acc numbers
    cout<<"acc numbers: 5377 ,5567 , 5878 ,4343\n";
    cout<<"enter your card number:";
    cin>>user_card_number;
    cout<<"enter your chois:";
    cin>>chaois;
    float blances[] = {233,43441,4343,3333};
    switch (user_card_number)
    {
    case 5377:
    if(chaois == 1){
        cout<<"Your mane blance :" <<blances[0] << "LKR";
    }
    if(chaois == 2){
        cout<<"Your mane blance :" <<blances[0] << "LKR";
        diposit_mony(blances[0]);
    }
    if (chaois == 3)
    {
        cout<<"Your mane blance :" <<blances[0] << "LKR";
        withdro_mony(blances[0]);
    }
    
        break;
    case 5567:
    if(chaois == 1){
        cout<<"Your mane blance :" <<blances[1] << "LKR";
    }
    if(chaois == 2){
        cout<<"Your mane blance :" <<blances[1] << "LKR";
        diposit_mony(blances[1]);
    }
    if (chaois == 3)
    {
        cout<<"Your mane blance :" <<blances[1] << "LKR";
        withdro_mony(blances[1]);
    }
    
        break;
    case 5878:
    if(chaois == 2){
        cout<<"Your mane blance :" <<blances[2] << "LKR";
    }
    if(chaois == 2){
        cout<<"Your mane blance :" <<blances[2] << "LKR";
        diposit_mony(blances[2]);
    }
    if (chaois == 3)
    {
        cout<<"Your mane blance :" <<blances[2] << "LKR";
        withdro_mony(blances[2]);
    }
    
        break;
    case 4343:
    if(chaois == 1){
        cout<<"Your mane blance :" <<blances[3] << "LKR";
    }
    if(chaois == 2){
        cout<<"Your mane blance :" <<blances[3] << "LKR";
        diposit_mony(blances[3]);
    }
    if (chaois == 3)
    {
        cout<<"Your mane blance :" <<blances[3] << "LKR";
        withdro_mony(blances[3]);
    }
    
        break;
    
    }

}