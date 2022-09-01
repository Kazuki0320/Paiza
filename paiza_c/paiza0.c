#include <stdio.h>
#include <stdbool.h>

int main(void){
    char str[10000];
    fgets(str, sizeof(str), stdin);
    
    bool shouldCharOutput = false;//文字を出力しない変数を定義
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
             if(shouldCharOutput)
                printf("\n");
             shouldCharOutput = true;
        }
        else
        {
            if(shouldCharOutput)
                printf("%c", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}


/*
・デフォルトがfalseのフラグを用意する
→trueとかfalseなどのbool値を持った変数
→文字を出力するかしないか、出力をする場合はtrue,出力しない場合はfalse
・受け取ったstrを１文字ずつ回していく
・その中の処理で、str[i]番目が文字が入ってる場合かつフラグがtrueの時、その文字を出力する
・str[i]が''の時、フラグをtrueにする＆改行文字を出力する
・ループを抜けたら、改行を出力する
*/