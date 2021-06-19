# INTRO

- 組み込み型(built-in type)
  - 基本型
  - const修飾子
  - 宣言演算子

- ユーザ定義型(user-defined type)
  - 構造体
  - クラス
  - 共用体
  - 列挙体


### 共用体
共用体(union)は，全メンバが同じアドレスに割り当てられたstruct．

```cpp
union Value {
  char* s;
  int i;
};
```
