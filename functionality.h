/* PROGRAMMING FUNDAMENTAL'S PROJECT FOR FALL 2022 BS(CS)
 * You need to define the required function in the part instructed here below.
 * Avoid making any unnecessary changes, particularly the ones you don't understand.
 * The different pieces should be defined using an array - uncomment the following code once you are done creating the array.
 * TIP: Understand thoroughly before getting started with coding.
 * */

//---Piece Starts to Fall When Game Starts---//

//#include "pieces.h"

#include <iostream>


void fallingPiece(float& timer, float& delay){
    if (timer>delay){
        for (int i=0;i<4;i++){
            point_2[i][0]=point_1[i][0];
            point_2[i][1]=point_1[i][1];
            point_1[i][1]+=1;                 //How much units downward
        }
        if (!anamoly()){
        	for(int i=0;i<4;i++){
        	gameGrid[point_2[i][1]][point_2[i][0]] =colorNum;}
        	colorNum=1+rand()%7;
        	//std::cout<<colorNum;
        	int n=rand()%7;
        	//--- Un-Comment this Part When You Make BLOCKS array---//
        	
        	
        	for(int i=0;i<4;i++){
        	point_1[i][0] = BLOCKS[n][i] % 2;
                point_1[i][1] = BLOCKS[n][i] / 2;
        	}
        	 } 
          
           
        
        timer=0;
}
}

/////////////////////////////////////////////
///*** START CODING YOUR FUNTIONS HERE ***///
void move(){
for(int i=0;i<4;i++){
for(int j=0;j<2;j++){
point_2[i][j]=point_1[i][j];
}

point_1[i][0]+=delta_x;
}

if(!anamoly()){
for(int i=0;i<4;i++){
for(int j=0;j<2;j++){
point_1[i][j]=point_2[i][j];
}
}
}
}

void spin(bool flag){

if(flag){

int arr[1][2];
arr[0][0]=point_1[1][0];
arr[0][1]=point_1[1][1];

for(int i=0;i<4;i++){
int x=point_1[i][1] - arr[0][1];
int y=point_1[i][0] - arr[0][0];
point_1[i][0]=arr[0][0]-x;
point_1[i][1]=arr[0][1]+y;

}

if(!anamoly()){
for(int i=0;i<4;i++){
for(int j=0;j<2;j++){
point_1[i][j]=point_2[i][j];
}
}
}

}

}


void Line(){
int k=M-1;
 
for(int i=M-1;i>0;i--){
int count=0;

for(int j=0;j<N;j++){
if(gameGrid[i][j]){
count++;
}

gameGrid[k][j] =gameGrid[i][j];

}

if(count<N) {k--;}

}

//delta_x=0;rotate=0;delay=0.3;
}
///*** YOUR FUNCTIONS END HERE ***///
/////////////////////////////////////
