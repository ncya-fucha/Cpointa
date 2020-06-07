//
//  pointa_5.c
//  pointa_5
//  文字列数値変換関数
//  Created by 松本碧 on 2020/06/07.
//  Copyright © 2020 aoi matsumoto. All rights reserved.
//
#include <stdio.h>

//  プロトタイプ宣言
short AtoS(const char *pStr, int *pRetCode);

//  関数名: main()
//  機能概要: main関数
//  引数: なし
//  戻り値: int
int main(void)
{
    short val;  //AtoS()の戻り値を受ける変数
    int ret;    //エラー判定の戻り値を受ける変数
    
    val = AtoS("1234", &ret);   /* 変換した値を変数valに入れる */
    printf("%d\n", val);        /* 画面には1234が表示される */
    
    val = AtoS("-789", &ret);   /* 変換した値を変数valに入れる */
    printf("%d\n", val);        /* 画面には-789が表示される */

    val = AtoS("atai", &ret);   /* 変換した値を変数valに入れる */
    if (-1 == ret) {            /* エラー処理のチェック */
        printf("数値文字列でないデータが渡されました。\n");
    }

    return 0;
}

//  関数名: AtoS()
//  機能概要: 文字列数値変換関数
//  引数: const char *pStr    /* 文字列の先頭アドレス　*/
//  引数: int *pRetCode   /* 動作の成否を返す(正常：0, エラー：-1)(NULLの場合は返さない) */
//  戻り値: short              /* pStrを数値化した値 */
short AtoS(const char *pStr, int *pRetCode)
{
    char temp;
    temp = *pStr;
    if ("" == temp) {    //空文字の場合
        *pRetCode = -1;
        return 0;
    }
    
    
    return <#expression#>;
}
