#include  <stdio.h>


Address
1 Byte = 1 住所
-----
0010110001 -> パソコンのデータ単位 (0, 1)
-----
000 -> Hare
001 -> Kumo (30%)
010 -> Kumo (50%)
011 -> Kumo (70%)
100 -> Kumo (100%)
101 -> Ame (1 ~ 100mm)
110 -> Ame (Upper than 100mm)
111 -> Ame (Upper than 200mm)

<Upper than 3 Bit>..
000 -> Kaminari
001 -> 
-----
1 Byte -> 8 Bit
64 Bit

// int x;

割りあっている (allocate)
char x; // 値しかわからない 
&x; // 割りあってられたアドレスを持ってくる

x = 10;
char y;

char *px;
px = &x;

紐付け (ひもつける)
値渡し 

初期化

void kimfunc(char *py)
{
  *py = 20;
  printf("%c", *py);
}

int main()
{
  char y;
  char *py;

  y = 10;
  kimfunc(&y);
  printf("%c", y);
  return (0);
}


--------------------
void  swap(int *a, int *b)
{
  int *temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

<Address>
0x00 ->  0000000000000000000000000000000000000000000000000000000000000000
y  0x01 -> 10
0x02 ->  00000010 (x 8)
0x03 ->  00000011
x  0x04 -> 10
0x05 ->  00000000
py 0x06 -> 00000100
0x07 ->  00000000
func py  0x08 -> 0x01

-----
1234 (1 Bit) |  - 1 Byte -> 4 Byte = Int size = 4 Byte (1 ~ 4 -> Int x)
1 -> 000100010  
2 -> 000010001
3 -> 000000010
4 -> 000000101
----|    
y (1 Bit) |
----- |
3 (1 Bit) |
----- |
4  | data4 |  - int * = 4 -> 4  住所演算子
-----
5
-----
6  -
7  -
8  -
9  -

6 - Int * -> Address 1 ~ 4まで格納しているメモリー
浪費

Int a = 10;

int main()
{
  int i;
  int *p; // int型の変数の

  i = 0;
  p = &i;
  printf("%p -> \n", pp);
  printf("こんにちは！");
  return 0;
}
