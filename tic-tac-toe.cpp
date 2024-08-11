#include<iostream>
using namespace std;


char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
int count=0;
int check;
int  visit[9]={0,0,0,0,0,0,0,0,0};
char place[9]={'1','2','3','4','5','6','7','8','9'};
void initial_positions(){
    cout<<endl;
    cout<<"1 | 2 | 3 "<<endl;
    cout<<"----------"<<endl;
    cout<<"4 | 5 | 6 "<<endl;
    cout<<"----------"<<endl;
    cout<<"7 | 8 | 9 "<<endl;
    cout<<endl;
    cout<<endl;
}


void update(int position , int player){

            int position1=position-1;
            int player_=player;
            int x1=position1;
            int x= position1;
    

             if(position1 == x && player_== 1 ){
                if(visit[x]==0){
                    visit[x]=1;
                    place[x]='X';
                    count++;
                }
                else{
                    cout<<"This position is full"<<endl;
                    cout<<endl;
                    check=1;
                }
            }
                
            //to insert the symbol of player 2
            if(position1 == x && player_== 2 ){
                if(visit[x]==0){
                    visit[x]=1;
                    place[x]='O';
                    count++;
                }
                else{
                    cout<<"This position is full"<<endl;
                    cout<<endl;
                    check=1;
                }
            }
                      
                cout<<endl;
                cout<<endl;
                cout<< place[0] <<" | "<< place[1] <<" | "<< place[2] <<endl;
                cout<<"-----------"<<endl;
                cout<< place[3] <<" | "<< place[4] <<" | "<< place[5] <<endl;
                cout<<"-----------"<<endl;
                cout<< place[6] <<" | "<< place[7] <<" | "<< place[8] <<endl;
                cout<<endl;
                cout<<endl;
                int place_empty=9-count;
                cout<<"Places Remaining :- "<<place_empty;
                cout<<endl;
                // cout<<"Game Over"<<endl;
                // if(place_empty==0){
                //     cout<<"Game Over"<<endl;
                //     result();
                // }


}
void result(string player){
    
    string player_name=player;
        
        if( (place[0] == 'X' && place[1] == 'X' && place[2] == 'X') ||
            (place[3] == 'X' && place[4] == 'X' && place[5] == 'X') ||
            (place[6] == 'X' && place[7] == 'X' && place[8] == 'X') ||
            (place[0] == 'X' && place[3] == 'X' && place[6] == 'X') ||
            (place[1] == 'X' && place[4] == 'X' && place[7] == 'X') ||
            (place[2] == 'X' && place[5] == 'X' && place[8] == 'X') ||
            (place[0] == 'X' && place[4] == 'X' && place[8] == 'X') ||
            (place[2] == 'X' && place[4] == 'X' && place[6] == 'X')){
            
            count=9;
            cout<<endl;
            cout<<"Game Over"<<endl;
            cout<<endl;
            cout<<"Congratulations"<<endl;
            cout<<endl;
            cout<<"WINNER IS :-"<<player<<endl;
            cout<<endl;

        }
        if( (place[0] == 'O' && place[1] == 'O' && place[2] == 'O') ||
            (place[3] == 'O' && place[4] == 'O' && place[5] == 'O') ||
            (place[6] == 'O' && place[7] == 'O' && place[8] == 'O') ||
            (place[0] == 'O' && place[3] == 'O' && place[6] == 'O') ||
            (place[1] == 'O' && place[4] == 'O' && place[7] == 'O') ||
            (place[2] == 'O' && place[5] == 'O' && place[8] == 'O') ||
            (place[0] == 'O' && place[4] == 'O' && place[8] == 'O') || 
            (place[2] == 'O' && place[4] == 'O' && place[6] == 'O')){
        
        
            count=9;
            cout<<endl;
            cout<<"Game Over"<<endl;
            cout<<endl;
            cout<<"Congratulations"<<endl;
            cout<<endl;
            cout<<"WINNER IS :-"<<player<<endl;
            cout<<endl;

        
        
        }


}
void input(){
    int input;
    string player1,player2;
    cout<<"Enter Player 1 Name "<<endl;
    cin>>player1;
    cout<<"Enter Player 2 Name "<<endl;
    cin>>player2;

    while(count<=9){
        check=0;
        int player=1;
        if(count==0){
            cout<<endl;
            initial_positions();
        }
        cout<<endl;
        cout<< "Player1 :-"<<player1<<"'s  Chance ( X ) :-"<<endl;
        cout<<"Enter the position to place ( X )"<<endl;
        cin>>input;
        update(input,player);
        result(player1);
        if(check==1){
            continue;
        }
        if(count==9){
            break;
        }
       cout<< "Player2 :-"<<player2<<"'s  Chance ( O ) :-"<<endl;
        cout<<"Enter the position to place ( O )"<<endl;
        player=2;
        cin>>input;
        update(input,player);
        result(player2);
        if(count==9){
            break;
        }
         if(check==1){
            cout<<"Player2 :-"<<player2<<"'s  Chance ( O ) :-"<<endl;
            cout<<"Enter the position to place ( O )"<<endl;
            player=2;
            cin>>input;
            update(input,player);
            result(player2);
            if(count==9){
                break;
            }
        }
    }

}


 int main(){

    input();
    return 0;

 }