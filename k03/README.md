# 課題3 レポート
学生番号　氏名


## 課題  

以下の2つのアルゴリズムで文字列を検索するプログラムを作成する。  
- 力ずく法
- BM法

1. 使用するデータ  
以下のデータを使用する。ただし、検索対象文字列、検索する文字列は変更しても良い。  
    - StrOriginal: 検索対象データ
    - StrKey: 検索する文字列

2. 必須問題：実装する関数  
本課題では、以下の関数を実装する。C言語の標準ライブラリは使用しないこと。  
    (1) ForceSearch: 力ずく法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  

    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

    (2) BMSearch: BM法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  
 
    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

3. 補助関数  
なし

## ソースコードの説明
14～１６まずkey[0]と同じ値になるところをさがす
～２８startの位置を１つずつずらしていきkeyと一致するところを探す
２１すべて一致したらkey[0]に対応するtxst[]のアドレスを出力する
３５～４４　配列txstとkeyの長さを出す
５０～５３　tableすべてに最大に移動する４を代入する
５４～６５　keyの右側から比べる。一致した場合はtxst,keyの配列を共に左にずらし
key[0]になるまでずらす。すべて一致したらkey[0]に対応するtxst[]の
アドレスを出力する
６７～７５　一致しなかった場合text[pos]がいくつずらすことができるかをtableを参照し
shiftに代入する。

## 出力結果

```
Force Search. Find keyword at:wind in my hair.
BM Search. Find keyword at:wind in my hair.
```

## 修正履歴

