#include <stdio.h>  
#include <stdlib.h>
#include "GerarMatriz.h"
#include <time.h>

void GerarMatriz(int n, int Mat[n][n]){
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            Mat[i][j] = rand()%99;
        }
    }
}

void ImprimirMatriz(int n, int Mat[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }
}

int CaminhoMatriz(int n, int Mat[n][n]){
    int Soma=0;
    int i = 0;
    int j = 0;
    Soma = Mat[0][0];
    Mat[0][0] = -1;

    while(i < n && j < n){
        if(j == 0 && i < (n-1)){
            if((Mat[i][j+1] >= Mat[i+1][j]) && (Mat[i][j+1] != -1)){
                
                Soma += Mat[i][j];
                Mat[i][j] = -1;
                j++;
            }else{
                
                Soma += Mat[i][j];
                Mat[i][j] = -1;
                i++;
            }
        }else if(i == (n-1)){
            
            Soma += Mat[i][j];
            Mat[i][j] = -1;
            j++;
        }else if(j == n-1){
            if((Mat[i][j-1] >= Mat[i+1][j]) && (Mat[i][j-1] != -1)){
                
                Soma += Mat[i][j];
                Mat[i][j] = -1;
                j--;
            }else{
                
                Soma += Mat[i][j];
                Mat[i][j] = -1;
                i++;
            }
        }else{
            if(Mat[i][j+1] == -1){
                if(Mat[i+1][j] >= Mat[i][j-1]){
                    
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                    i++;
                }else{
                    
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                    j--;
                }
            }else if(Mat[i][j-1] == -1){
                if(Mat[i+1][j] >= Mat[i][j+1]){
                    
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                    i++;
                }else{
                    
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                    j++;
                }
            }else{
                if((Mat[i+1][j] >=  Mat[i][j+1]) && (Mat[i+1][j] >= Mat[i][j-1])){
                    
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                    i++;
                }else if((Mat[i][j+1] >= Mat[i+1][j]) && (Mat[i][j+1] >= Mat[i][j-1])){
                   
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                     j++;
                }else if((Mat[i][j-1] >= Mat[i+1][j]) && (Mat[i][j-1] >= Mat[i][j+1])){
                    
                    Soma += Mat[i][j];
                    Mat[i][j] = -1;
                    j--;
                }
            }
        }
    }
    return Soma+1;
}