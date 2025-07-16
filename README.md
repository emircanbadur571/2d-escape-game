# CSE102 Assignment 2 – Escape Game

Bu proje, Gebze Teknik Üniversitesi CSE102 dersi için geliştirilmiş basit bir 2D kaçış oyunudur.

## Özellikler
- C dilinde yazılmıştır
- Dosya I/O kullanır (`game_state.txt`)
- Sadece scalar değişkenler kullanılmıştır (array yok)
- Döngü ve fonksiyon kullanılmadan çalışır (her çalıştırma 1 adım)
- Oyuncu WASD tuşlarıyla hareket eder, kapıya ulaşınca oyunu kazanır

## Derleme
```bash
gcc --ansi cse102_assignment2.c -o game
