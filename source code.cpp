#include<iostream>
#include<cstdlib>
#include<limits>
#include<string>
using namespace std;
void display(string players);
void display(string players){
    cout<<"___________________________________"<<endl;
    cout<<players<<" Win the game!!!!!"<<endl;
    cout<<"___________________________________"<<endl;
    }
void clearScreen(){
#ifdef _WIN32
    system("cls");
#else
    cout<<"\033[2J\033[H";
#endif
    }
int main(){
    string arr[3][3]={{"_","_","_"},{"_","_","_"},{"_","_","_"}};
    int tracker = 1;
    int count = 0;
    int x;
    int jumper = 0;
    int collection[9]={1,2,3,4,5,6,7,8,9};
    cout<<"LIBEN ADUGNA TIC TOE"<<endl;
    string player1,player2;
    cout<<"PLease Enter YOUR NAME PLAYER ONE"<<endl;
    cin>>player1;
    cout<<"PLease Enter YOUR NAME PLAYER TWO"<<endl;
    cin>>player2;
    cout<<endl<<"___________________________________________________________________________________"<<endl;
    cout<<endl<<"___________________________________________________________________________________"<<endl;
    while(jumper!=1){
            if(count>0){
                         break;
                    }

            cout<<"select the number which you wanted to insert"<<endl
                <<" 1 2 3 "<<endl
                <<" 4 5 6 "<<endl
                <<" 7 8 9 "<<endl;
                for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }

                // keep asking until the player picks a free square from 1 to 9
                while(true){
                    if(!(cin>>x)){
                        if(cin.eof()){
                            return 0;
                        }
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<"please enter a number from 1 to 9"<<endl;
                        continue;
                    }
                    if(x<1||x>9){
                        cout<<"please enter a number from 1 to 9"<<endl;
                        continue;
                    }
                    if(collection[x-1]==0){
                        cout<<"that square is already taken, pick another one"<<endl;
                        continue;
                    }
                    collection[x-1]=0;
                    break;
                }

                if(tracker%2!=0){
                    if(1<=x&&x<=3){
                        arr[0][x-1]="X";
                    }
                    else if(4<=x&&x<=6){
                        arr[1][x-4]="X";
                    }
                    else if(7<=x&&x<=9){
                        arr[2][x-7]="X";
                    }

                }
                else{
                        if(1<=x&&x<=3){
                        arr[0][x-1]="O";
                    }
                    else if(4<=x&&x<=6){
                        arr[1][x-4]="O";
                    }
                    else if(7<=x&&x<=9){
                        arr[2][x-7]="O";
                    }

                }
                tracker++;
                clearScreen();

                for(int z=0 ;z<3;z++){
                    if((arr[z][0]==arr[z][1]&&arr[z][1]==arr[z][2])&&(arr[z][0]=="X")){
                            display(player1);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                        break;
                        }
                    else if((arr[z][0]==arr[z][1]&&arr[z][1]==arr[z][2])&&(arr[z][0]=="O")){
                            display(player2);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                        }
                    if((arr[0][z]==arr[1][z]&&arr[1][z]==arr[2][z])&&(arr[0][z]=="X")){
                            display(player1);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                        }
                    else if((arr[0][z]==arr[1][z]&&arr[1][z]==arr[2][z])&&(arr[0][z]=="O")){
                            display(player2);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                        }
                    if((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&(arr[0][0]=="X")){
                            display(player1);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                    }
                    else if((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&(arr[0][0]=="O")){
                            display(player2);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                    }
                    if((arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])&&(arr[1][1]=="X")){
                            display(player1);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                    }
                    else if((arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])&&(arr[1][1]=="O")){
                            display(player2);
                            count++;
                             for(int i=0;i<3;i++){
                    cout<<"|";
                    for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<" ";
                                    }
                    cout<<"|";
                    cout<<endl;
                        }
                         break;
                    }
        }
                if(tracker==10 && count==0){
                    cout<<endl<<"___________________________________________________________________________________"<<endl;
                    cout<<"____________________________________!!!DRAW!!!!_____________________________"<<endl;
                    cout<<endl<<"___________________________________________________________________________________"<<endl;
                    jumper = 1;
                }
     }
   }




