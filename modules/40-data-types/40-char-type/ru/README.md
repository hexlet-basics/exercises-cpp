В этом уроке мы рассмотрим последний целочисленный тип: `char`.

`сhar` предназначен для хранения символов, таких как буквы и цифры. Но почему же `char` это целочисленный тип? Все дело в том, что хранение чисел в памяти компьютера не представляет сложности, тогда как хранение букв связанно с рядом проблем. Поэтому в языках программирования принят простой подход: хранить символы в памяти компьютеров в виде числовых кодов.

Таким образом тип `char` является еще одним целочисленным типом.

```cpp
int main() {
  char symbol { 'M' };
  int number { symbol };
  std::cout << symbol << std::endl; // => M
  std::cout << number << std::endl; // => 77
  return 0;
}
```

Интересный момент состоит в том, что на самом деле и в переменной `number` и в переменной `symbol` хранится значение _77_, а когда дело доходит до вывода объект `cout` по-разному интерпретирует эти переменные.

`char` по умолчанию может быть как беззнаковым так и знаковым типом. Тут все зависит от компилятора. Если для нас крайне важно, что бы тип `char` обладал определенным поведением, надо указать это явно:

```cpp
unsigned char symbol // беззнаковый, диапазон от 0 до 255
signed char symbol // знаковый, диапазон от -128 до 127
```

Под переменную типа `char` выделяется один байт, для работы с символами в кодировке ASCII этого вполне достаточно, но для работы с Unicode нет. Если мы попытаемся определить переменную типа `char`, получим ошибку переполнения:

```cpp
int main() {
  char symbol = 'Ф';
  return 0;
} 
```

<pre class='hexlet-basics-output'>
  main.cpp:2:21: error: narrowing conversion of '53412' from 'int' to 'char' [-Wnarrowing]
  2 |     char symbol = 'Ф';
    |                   ^~~
</pre>

Для работы с символами которые превышают один байт, есть расширенный тип `wchar_t` - под котрый выделяется два байта памяти, а начиная со стандарта С++ 11 `char16_t` и `char32_t`:

```cpp
int main() {
  wchar_t symbol = L'Ф';
  char16_t symbol_16 = u'Ю';
  char32_t symbol_32 = U'Д';
  return 0;
}
```
Что бы указать принадлежность к тому или иному символьному типу, перед символом ставится префикс. Например, префикс `L` обозначает расширенный строковый литерал.