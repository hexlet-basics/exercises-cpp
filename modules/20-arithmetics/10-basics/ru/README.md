На базовом уровне компьютеры оперируют только числами. Даже в прикладных программах на высокоуровневых языках внутри много чисел и операций над ними. К счастью, для старта достаточно знать обычную арифметику — с нее и начнем.

Для сложения двух чисел в математике мы пишем, например, *3 + 4*. В программировании — то же самое. Вот программа, складывающая два числа:

```cpp
// Не забываем точку с запятой в конце,
// так как каждая строчка в коде - инструкция
int main() {
  3 + 4;
  return 0;
}
```

Если запустить эту программу на выполнение, то она тихо отработает и завершиться. На экран ничего не будет выведено. Операция сложения, как и остальные операции, сама по себе ничего не делает кроме сложения. Чтобы воспользоваться результатом сложения, его нужно, например, вывести на экран.

```cpp
int main() {
  std::cout << 3 + 4;
  return 0;
}
```

После запуска на экране появится результат:

<pre class='hexlet-basics-output'>7</pre>

Кроме сложения доступны следующие операции:
* `*` — умножение
* `/` — деление
* `-` — вычитание
* `%` — [остаток от деления](https://ru.wikipedia.org/wiki/Деление_с_остатком)

Теперь давайте выведем на экран результат деления, а потом результат возведения в степень:

```cpp
int main() {
  std::cout << 8 / 2;
  std::cout << 3 * 3 * 3;
}
```

<pre class='hexlet-basics-output'>
4
27
</pre>