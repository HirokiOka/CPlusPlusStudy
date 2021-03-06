# ポインタ

- 意味上のポインタ
- 文法上のポインタ
- ポインタの内部実装

## 意味上のポインタ
ポインタはオブジェクトを参照するための機能で，この点においてリファレンスと同じ機能を提供している．
(T型のリファレンスはT型のオブジェクトそのものではなく，T型のオブジェクトへの参照である．リファレンスへの操作は，参照したオブジェクトへの操作になる．)

- T型へのリファレンスはT型のオブジェクトを参照する(T &)
- T型へのポインタはT型のオブジェクトを参照する(T \*)


- 初期化

リファレンス

```cpp
int object{};
int &reference = object;
```

ポインタ

```cpp
int object{};
int *pointer = &object;
```

- ポインタの場合，参照したい変数名に&をつける必要がある．

- オブジェクトの操作

リファレンス

```cpp
reference = 0; //書き込み
int read = reference; //読み込み
```

ポインタ

```cpp
*pointer = 0; //読み込み
int read = *pointer; //書き込み
```

- \*をつける必要がある
- ポインタ名をそのまま使った場合，参照先のオブジェクトの値ではなく，ポインタという値になる

すなわち，リファレンスはポインタのsyntax sugarである

## リファレンスとポインタの違い

### 代入
- リファレンスは代入できないが，ポインタは代入ができる

```cpp
int x;
int y;

int &reference = x;
reference = y;     //これはxの値がyになるだけ

int *pointer = &x;
pointer = &y;      //pointerの参照先がyになる
```

### 初期化
- リファレンスは必ず初期化しなければならない
- ポインタは宣言だけでもよい
- 分からない値を持ったポインタの参照先への読み書きは未定義の挙動を起こす(!) <- 恐い

```cpp
int *pointer;
std::cout << *pointer; //未定義の挙動
*pointer = 123; //未定義の挙動
```

### nullptr
- 何も参照していないことを明示的に示すためのポインタの値(nullptr)

```cpp
int *pointer = nullptr;
```

- C/C++では歴史的な理由から，`NULL`や`0`もnullポインタ値として扱う

## 文法上のポインタ

- 型としてのポインタは，ある型Tがあるとき，Tへのポインタ型となる
- Tへのポインタ型は`T*`と書く

### ポインタのポインタ

- ポインタ型というのは，「ある型Tへのポインタ」という形で表現できる

### 配列へのポインタ

```cpp
int main() {
  int a[5];
  int (*p)[5] = &a;
}
```

- 配列名は配列の先頭要素へのポインタに暗黙に変換される

```cpp
int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int *ptr = a; //&a[0]と同じ
}
```

### ポインタの内部実装
ポインタの値とは，メモリ上のアドレスのこと．
- メモリ容量は慣習的に1000^{n}ではなく1024^{n}を使う
  - 例えば，1GBのメモリは1024^{3}バイト=1073741824バイト
- 1KiB = 1024バイト
