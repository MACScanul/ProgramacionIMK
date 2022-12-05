/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
  int moverse;
  int mapX = 8;
  int mapY = 8;
  char vacio[mapX][mapY];
  
    for(int i = 0; i <mapY; i++ )
  {
      for(int j=0; j<mapX;j++)
      {
          vacio[i][j]=' ';
      }
      printf("\n");
  }
  
 
   vacio[0][1] = '#';
   vacio[0][0] = '#';
    vacio[1][0] = '#';
    vacio[2][0] = '#';
    vacio[2][1] = '#';
    vacio[3][2] = '#';
     vacio[3][3] = '#';
     vacio[3][4] = '#';
      vacio[4][4] = '#';
       vacio[5][4] = '#';
       vacio[6][4] = '#';
       vacio[7][5] = '#';
       vacio[7][6] = '#';
       vacio[7][7] = '#';
       //////////////////
       vacio[0][2] = '#';
       vacio[1][3] = '#';
       vacio[1][4] = '#';
       vacio[1][5] = '#';
       vacio[1][6] = '#';
       vacio[2][6] = '#';
       vacio[3][6] = '#';
        vacio[4][6] = '#';
     vacio[5][6] = '#';
      vacio[5][7] = '#';
      /////////////////
      
      int x=1;
      int y=1;
     vacio[x][y] = '♥';
     
     for(int i = 0; i <mapY; i++ )
  {
      for(int j=0; j<mapX;j++)
      {
          printf("[%c]", vacio[i][j]);
      }
      printf("\n");
      
}
while(x!= 7 && y!= 6){
    
    printf("pos actual %d , %d ",x,y);
 printf ("a donde te quieres mover?\n");
 printf (" w,a,S,D \n");
 
 scanf("%c",&moverse);
 
 
switch(moverse) {
    case 'd':
        if(vacio[x][y+1]==' ')
        {
            vacio[x][y+1]='♥';
            vacio[x][y]=' ';
            y=y+1;
        }
        else 
        printf("nmms cabron, ahi hay una pared wey como te vas a querer mover?\n");
    break;
      
    
  case 'a':
   if(vacio[x][y-1]==' ')
        {
            vacio[x][y-1]='♥';
            vacio[x][y]=' ';
            y=y-1;
        }
        else 
        printf("nmms cabron, ahi hay una pared wey como te vas a querer mover?\n");
    break;
    
    
  case 's':
  if(vacio[x+1][y]==' ')
        {
            vacio[x+1][y]='♥';
            vacio[x][y]=' ';
            x=x+1;
        }
        else 
        printf("nmms cabron, ahi hay una pared wey como te vas a querer mover?\n");
        break;
        
        
    case 'w':
  if(vacio[x-1][y]==' ')
        {
            vacio[x-1][y]='♥';
            vacio[x][y]=' ';
            x=x-1;
        }
        else 
        printf("nmms cabron, ahi hay una pared wey como te vas a querer mover?\n");
        break;
}

        
        for(int i = 0; i <mapY; i++ )
        {
        for(int j=0; j<mapX;j++)
        {
              printf("[%c]", vacio[i][j]);
        }
        printf("\n");
        }
     
 
}





}
