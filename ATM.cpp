#include <iostream>
using namespace std;

    int password, selectService;
	double withdraw, deposit, transfer;
	unsigned long long accountNumber;
	long double cash=50000;
	string choice;

void displayMenu(){
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"====================WELCOME TO e-Banking===================="<<endl;
    cout<<"------------------------------------------------------------"<<endl<<endl;

	cout<<"==========MENU=========="<<endl;
	cout<<"1. English "<<endl;
	cout<<"2. Amharic "<<endl;
	cout<<"====Select Language: ";
}

void English(){
   do{
        cout<<"Enter your pin: ";
        cin>> password;} while(password!=4545);
system("cls");
	do {
goToService:
	cout<<"1. Current balance"<<endl;
	cout<<"2. Transfer Money"<<endl;
	cout<<"3. Withdraw cash"<<endl;
	cout<<"4. Deposit cash"<<endl;
	cout<<"5. Other Services "<<endl;
	cout<<"====Enter option: ";
	cin>>selectService;
system("cls");
    switch(selectService){
	case 1: cout<<"Your current balance is: "<<cash<<endl; break;
	case 2:
	    do{
		cout<<"Enter recipient's account number: ";
        cin>>accountNumber;
        }while (accountNumber<=1000000000000);
        cout<<"Enter transfer amount: ";
        cin>>transfer;
        if(transfer<=cash){
            cash = cash-transfer;
            cout<<"Transfer completed!"<<endl;
           }
        else if(transfer>cash)
            cout<<"Insufficient balance!"<<endl; break;
     case 3:
            cout<<"Enter withdrawal amount: ";
            cin>>withdraw;
            if (withdraw<= cash){
                cash = cash-withdraw;
                cout<<"Withdraw complete!"<<endl;
				}
            else cout<<"Insufficient balance!"<<endl; break;
     case 4:
            cout<<"Enter deposit amount: ";
			cin>>deposit;
			cash=cash+deposit;
			cout<<"Deposit successful!"; break;
     case 5:
			int Us;
        goToAboutUs:
			cout<<"1. About Us "<<endl;
			cout<<"2. Contact Us "<<endl;
			cout<<"3. Leave Comment "<<endl;
			cout<<"====Enter option: ";
			cin>>Us;
system("cls");
			if(Us==1){
				cout<<"We are a leading online bank, providing secure and convenient banking services for our customers."<<endl;}
			else if(Us==2){
				cout<<"You Can Contact Us on "<<endl;
				cout<<"1. Telegram: @e-Banking_tg"<<endl;
				cout<<"2. Facebook: @e-Banking_fb "<<endl;
				cout<<"3. Instagram: @e-Banking_insta "<<endl;
				cout<<"4. Twitter: @e-Banking_twit"<<endl;}
            else if(Us==3){
                string comment;
                cout<<"Leave comment ";
                cin>>comment;
                cout<<"Thank you for your comment";}
            else goto goToAboutUs; break;
    default: goto goToService;}
           cout<<"1. Continue"<<endl;
           cout<<"2. Exit ";
           cin>>choice;
system("cls");
    } while(choice=="1");
        cout<<"=====THANKYOUðŸ™ FOR BEING WITH US====="<<endl;
        cout<<"                    WM";
}	      // End of English language

void Amharic (){
	do{
            cout<<"á‹¨á‹­áˆˆá á‰ƒáˆ á‹«áˆµáŒˆá‰¡: ";
            cin>> password;} while(password!=4545);
system("cls");
	do {
   goToService:
	cout<<"1. á‰€áˆª áˆ‚áˆ³á‰¥ áˆˆáˆ›á‹ˆá‰…"<<endl;
	cout<<"2. áŒˆáŠ•á‹˜á‰¥ áˆˆáˆ›áˆµá‰°áˆ‹áˆˆá"<<endl;
	cout<<"3. áŒˆáŠ•á‹˜á‰¥ áˆˆáˆ›á‹áŒ£á‰µ"<<endl;
	cout<<"4. áŒˆáŠ•á‹˜á‰¥ áˆˆáˆ›áˆµáŒˆá‰£á‰µ"<<endl;
	cout<<"5. áˆˆáˆŒáˆ‹ áŠ áŒˆáˆáŒáˆŽá‰µ "<<endl;
	cout<<"====áˆáˆ­áŒ«á‹ŽáŠ• á‹«áˆµáŒˆá‰¡: ";
	cin>>selectService;
system("cls");
    switch(selectService){
    case 1: cout<<"á‹«áˆˆá‹Žá‰µ á‰€áˆª áˆ‚áˆ³á‰¥: "<<cash<<endl;break;
    case 2:
        do{
            cout<<"áŠ áŠ«á‹áŠ•á‰µ á‰áŒ¥áˆ­ á‹«áˆµáŒˆá‰¡: ";
            cin>>accountNumber;
        } while(accountNumber<=1000000000000);
			cout<<"á‹¨áŒˆáŠ•á‹˜á‰¡áŠ• áˆ˜áŒ áŠ• á‹«áˆµáŒˆá‰¡: ";
			cin>>transfer;
	        if(transfer<=cash){
			cash = cash-transfer;
			cout<<"á‰ á‰°áˆ³áŠ« á‰°áˆ‹áˆááˆ!"<<endl;}
			else if(transfer>cash) cout<<"á‹«áˆˆá‹Žá‰µ á‰€áˆª áˆ‚áˆ³á‰¥ áŠ áŠáˆµá‰°áŠ› áŠá‹!"<<endl; break;
    case 3: {
        cout<<"á‹¨áŒˆáŠ•á‹˜á‰¥ áˆ˜áŒ áŠ• á‹«áˆµáŒˆá‰¡: ";
        cin>>withdraw;
        if(withdraw<=cash){
                cash = cash-withdraw;
                cout<<"á‰ á‰°áˆ³áŠ« á‰°áŠ¨áŠ“á‹áŠ—áˆ!"<<endl;
				}
        if(withdraw>cash) cout<<"á‹«áˆˆá‹Žá‰µ á‰€áˆª áˆ‚áˆ³á‰¥ áŠ áŠáˆµá‰°áŠ› áŠá‹!"<<endl;
    } break;
    case 4: {
			cout<<"á‹¨áŒˆáŠ•á‹˜á‰¥ áˆ˜áŒ áŠ• á‹«áˆµáŒˆá‰¡: ";
			cin>>deposit;
			cash=cash+deposit;
			} break;
	case 5: {
			int Us;
			goToAboutUs:
			cout<<"1. áˆµáˆˆ áŠ¥áŠ› "<<endl;
			cout<<"2. áŠ¥áŠ›áŠ• áˆˆáˆ›áŒáŠ˜á‰µ "<<endl;
			cout<<"3. áŠ áˆµá‰°á‹«á‹¨á‰µ "<<endl;
			cout<<"====áˆáˆ­áŒ«á‹ŽáŠ• á‹«áˆµáŒˆá‰¡: ";
			cin>>Us;
system("cls");
			if(Us==1){
				cout<<"We are a leading online bank, providing secure and convenient banking services for our customers."<<endl;}
			else if(Us==2){
				cout<<"áŠ¥áŠ›áŠ• áˆ›áŒáŠ˜á‰µ á‹¨áˆá‰µá‰½áˆ‰á‰ á‰µ áˆ˜áŠ•áŒˆá‹µ"<<endl;
				cout<<"1. Telegram: @e-Banking_tg"<<endl;
				cout<<"2. Facebook: @e-Banking_fb "<<endl;
				cout<<"3. Instagram: @e-Banking_insta "<<endl;
				cout<<"4. Twitter: @e-Banking_twit"<<endl;}
            else if(Us==3){
                string comment;
                cout<<"áŠ áˆµá‰°á‹«á‹¨á‰µá‹ŽáŠ• á‹«áˆµá‰€áˆáŒ¡ ";
                cin>>comment;
                cout<<"áˆˆáŠ áˆµá‰°á‹«á‹¨á‰µá‹Ž áŠ¥áŠ“áˆ˜áˆ°áŒáŠ“áˆˆáŠ•";}
            else goto goToAboutUs;
		} break;

	default: goto goToService;
    }
        cout<<"1. áˆˆáˆ˜á‰€áŒ áˆ"<<endl;
        cout<<"2. áˆˆáˆ˜á‹áŒ£á‰µ ";
        cin>>choice;
system("cls");
    } while(choice=="1");
    cout<<"=====áŠ¨áŠ› áŒ‹áˆ­ áˆµáˆˆ áˆ†áŠ‘ áŠ¥áŠ“áˆ˜áˆ°áŒáŠ“áˆˆáŠ•ðŸ™====="<<endl;
	cout<<"                  WM";
} // End of Amharic language

int main()
{
	int language;
    goToMainMenu:
    displayMenu();
	cin>>language;
system("cls");
	switch(language){
	    case 1: English(); break;
	    case 2: Amharic(); break;
	    default: goto goToMainMenu;
	}
	
return 0;
}
