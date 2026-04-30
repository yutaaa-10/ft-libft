*This project has been created as part of the 42 curriculum by yukurosa.*

# Libft

## 概要（Description）
Libft は、C言語の標準ライブラリ関数を再実装し、さらに便利な関数を追加した自作ライブラリです。  
このプロジェクトの目的は、ポインタ・メモリ管理・データ構造（特に連結リスト）の理解を深めることです。

このライブラリには以下が含まれます：
- 標準ライブラリ関数（strlen, memcpy など）
- 補助的な追加関数
- 連結リスト操作関数

## 使い方（Instructions）

コンパイル　　make
オブジェクト削除　make clean
完全削除　　make fclean
再ビルド　 make re

仕様例　　cc ft_strlen.c libft.a

## ライブラリ構成（Library Overview）

メモリ操作関数
ft_memset  ft_memcpy  ft_memmove  ft_memchr  ft_memcmp  ft_bzero  ft_calloc

文字列操作関数
ft_strlen  ft_strdup  ft_strjoin  ft_strtrim  ft_split  ft_substr  ft_strlcpy  ft_strlcat

文字判定関数
ft_isalpha  ft_isdigit  ft_isalnum  ft_isascii  ft_isprint  ft_toupper  ft_tolower

変換関数
ft_atoi  ft_itoa

出力関数（ファイルディスクリプタ）
ft_putchar_fd  ft_putstr_fd  ft_putendl_fd  ft_putnbr_fd

連結リスト関数
ft_lstnew  ft_lstadd_front  ft_lstadd_back  ft_lstsize  ft_lstlast  ft_lstdelone  ft_lstclear  ft_lstiter  ft_lstmap

##　参考資料

42公式資料
manコマンド
zenn 
GitBook

## AIの仕様について
各関数の挙動確認及び理解の補助。
連結リストやメモリなどの全体像把握。

