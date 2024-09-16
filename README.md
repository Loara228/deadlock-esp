
# external esp overlay

![](images/preview.png)![](preview)

![](images/radar.png)![](preview)

Video: https://youtu.be/NXYFQsxMNl8
(видео немного улучшенной версии)

## Offsets and status

- [offsets](https://github.com/Loara228/deadlock-esp/blob/master/deadlock/Dump/client_dll.cs): **16.09.2024**
- [C++ format](https://github.com/Loara228/deadlock-esp/blob/master/deadlock/Dump/client_dll.hpp)
- undetected: **yes**

## Как запустить

1. Запустите игру
2. Запустите программу

## Как обновить

Если хотите обновить самостоятельно, то используйте это.

1. Найдите указатели по сигнатурам [тут](https://github.com/Loara228/deadlock-esp/blob/master/scanner/src/main.rs).

2. Замените указатели [в этом файле](https://github.com/Loara228/deadlock-esp/blob/master/deadlock/Offsets.cs).

![](images/offsets.png)![](offsets)