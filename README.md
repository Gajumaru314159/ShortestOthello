# Shortest Othello

## ビルド方法

### Linux

```bash
gcc -c main.c -w
gcc -o othello.exe main.o
./othello.exe
```

### Windows

VisualStudioで実行する場合はプリプロセッサに\_CRT_SECURE_NO_WARNINGSを追加し、必ず使用されるincludeファイルにstdio.hを追加してください。

## 操作方法

ターンごとに`Y X`の順で石を置く場所を入力してください。
左上が`1 1`です。

|     |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|  1  |     |     |     |     |     |     |     |     |
|  2  |     |     |     |     |     |     |     |     |
|  3  |     |     |     |     |     |     |     |     |
|  4  |     |     |     |  O  |  @  |     |     |     |
|  5  |     |     |     |  @  |  O  |     |     |     |
|  6  |     |     |     |     |     |     |     |     |
|  7  |     |     |     |     |     |     |     |     |
|  8  |     |     |     |     |     |     |     |     |
