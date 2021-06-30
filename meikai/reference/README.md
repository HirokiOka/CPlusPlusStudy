# 参照(reference)

型名の後ろに`&`をつけて宣言された変数が，参照オブジェクト．

```cpp
int& a = x;
```

というのは，`x`に対する`a`というエイリアス．

# 参照渡し

```cpp
void swap(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}
```

- 値渡しは非破壊的
- 参照渡しは破壊的
