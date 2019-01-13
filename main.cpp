#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
	int a[][][][][][][][][15][20][10][10]; // 15 альбомов с 20 картами размером 10 на 10
	int b[20][40][10][10];
	for(int i1 = 0; i1<15; i1++){
		for(int i2 = 0; i2 < 20; i2++){
			for(int i3 = 0; i3<10; i3++){
				for(int i4 = 0; i4<10; i4++){
					a[i1][i2][i3][i4]=rand() %10 +1;
            }}}}
	for(int i1 = 0; i1<20; i1++){
		for(int i2 = 0; i2 < 40; i2++){
			for(int i3 = 0; i3<10; i3++){
				for(int i4 = 0; i4<10; i4++){
					b[i1][i2][i3][i4]=rand() %10 +1;

			}}}}
	//ѕомен€ть местами последние 10 карт из  первых 5 альбомов со стеллажа УаФ с первыми 10 картами из последних 5 альбомов стеллажа УbФ

	for(int i =0; i<5;i++){
		for( int j = 0; j<10;j++)
			swap(a[i][20-j],b[20-i][j]);
	}
    return 0;
}
