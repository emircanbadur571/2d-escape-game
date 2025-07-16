# 2D Escape Game

\<p align="center"\>
\<img src="[https://img.shields.io/badge/Language-C-blue.svg](https://img.shields.io/badge/Language-C-blue.svg)" alt="C Language"\>
\<img src="[https://img.shields.io/badge/Status-Completed-brightgreen.svg](https://img.shields.io/badge/Status-Completed-brightgreen.svg)" alt="Project Status"\>
\<img src="[https://img.shields.io/badge/License-MIT-blue.svg](https://img.shields.io/badge/License-MIT-blue.svg)" alt="License"\>
\</p\>

## English Description

This project is a simple 2D escape game developed for Gebze Technical University's CSE102 Computer Programming course. The goal of the game is for the player to reach the exit door.

### Features

  * **Written in C Language:** The entire game logic is implemented in C.
  * **File I/O Usage:** Utilizes file input/output (`game_state.txt`) to save and load the game state.
  * **Scalar Variables Only:** The implementation strictly adheres to using only scalar variables; no arrays are used.
  * **No Loops or Functions (One Step per Execution):** The program is designed to execute one game step per run. It does not use traditional loops or functions to progress the game internally. Each execution processes a single player move and updates the game state.
  * **Player Movement:** Players move using WASD keys.
  * **Win Condition:** The player wins the game by reaching the designated exit door.

### How to Compile

To compile this program, you will need a C compiler (like GCC).

1.  **Save the code:** Save your C code as `escapegame.c`.
2.  **Compile:** Open your terminal or command prompt, navigate to the directory where you saved the file, and compile using the following command:
    gcc --ansi escapegame.c -o game


### How to Play (Conceptual)

Since the game progresses one step per execution without internal loops, playing it involves repeatedly running the compiled executable (`game`) from the terminal and providing single-character inputs (W, A, S, D) for each move. The `game_state.txt` file will be updated after each move.

-----

## Türkçe Açıklama

Bu proje, Gebze Teknik Üniversitesi'nin CSE102 Bilgisayar Programlama dersi için geliştirilmiş basit bir 2D kaçış oyunudur. Oyunun amacı, oyuncunun çıkış kapısına ulaşmasıdır.

### Özellikler

  * **C Diliyle Yazılmıştır:** Tüm oyun mantığı C dilinde uygulanmıştır.
  * **Dosya I/O Kullanımı:** Oyun durumunu kaydetmek ve yüklemek için dosya giriş/çıkış (`game_state.txt`) kullanır.
  * **Sadece Scalar Değişkenler:** Uygulama, kesinlikle sadece scalar değişkenler kullanılarak yapılmıştır; hiçbir dizi kullanılmamıştır.
  * **Döngü ve Fonksiyon Yok (Her Çalıştırma 1 Adım):** Program, her çalıştırmada tek bir oyun adımı ilerleyecek şekilde tasarlanmıştır. Oyunu dahili olarak ilerletmek için geleneksel döngüler veya fonksiyonlar kullanmaz. Her çalıştırma tek bir oyuncu hareketini işler ve oyun durumunu günceller.
  * **Oyuncu Hareketi:** Oyuncular WASD tuşlarını kullanarak hareket ederler.
  * **Kazanma Durumu:** Oyuncu, belirlenen çıkış kapısına ulaşarak oyunu kazanır.

### Derleme

Bu programı derlemek için bir C derleyicisine (örn. GCC) ihtiyacınız olacaktır.

1.  **Kodu Kaydet:** Sağlanan C kodunuzu `escapegame.c` olarak kaydedin.
2.  **Derle:** Terminalinizi veya komut istemcinizi açın, dosyayı kaydettiğiniz dizine gidin ve aşağıdaki komutu kullanarak derleyin:
    gcc --ansi escapegame.c -o game

### Nasıl Oynanır (Kavramsal)

Oyun, dahili döngüler olmadan her çalıştırmada bir adım ilerlediği için, oynamak derlenmiş çalıştırılabilir dosyayı (`game`) terminalden tekrar tekrar çalıştırmayı ve her hareket için tek karakterli girdiler (W, A, S, D) sağlamayı içerir. `game_state.txt` dosyası her hareketten sonra güncellenecektir.
