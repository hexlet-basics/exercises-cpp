**Переменная** — это имя части памяти, которая содержит значение. Когда наша программа создает экземпляр переменной, ей автоматически присваивается адрес свободной памяти. Любое значение, которое мы присваиваем переменной, сохраняется в памяти с этим адресом.

Например:

```cpp
int num {};
```

Когда эта инструкция выполняется процессором, будет выделена часть памяти из ОЗУ.

В качестве примера предположим, что переменной `num` присвоена ячейка памяти 140. Когда программа видит переменную `num` в выражении или инструкции, она знает, что она должна искать значение в ячейке памяти 140.

Нам не нужно беспокоиться о том, какой адрес памяти назначен. Мы просто ссылаемся на переменную по ее заданному идентификатору, и компилятор переводит это имя в соответствующий адрес памяти.

Однако у этого подхода есть некоторые ограничения, которые мы обсудим в этом и будущих уроках.

## Оператор адреса `&`

Оператор адреса `&` позволяет нам увидеть, какой адрес памяти назначен переменной. Это довольно просто:

```cpp
#include <iostream>

int main() {
  int num { 5 };
  std::cout << num << std::endl;  // выводим значение переменной num
  std::cout << &num << std::endl; // выводим адрес памяти переменной num

  return 0;
}
```

Эта программа создает следующий вывод:

<pre class='hexlet-basics-output'>
  5
  0x7ffff5af31bc
</pre>

На вашей машине адрес может быть другой, так как адресное пространство памяти, выделенное программе, может отличаться.

Хотя оператор адреса выглядит как оператор побитового И, их можно различить, поскольку оператор адреса является унарным, тогда как оператор побитового И является бинарным.

Теперь имея адрес переменной мы можем с помощью оператора косвенного обращения, получить значение переменной.

## Оператор косвенного обращения `*`

**Оператор косвенного обращения** `*` также называют оператором разыменования. Он позволяет получить доступ к значению по определенному адресу:

```cpp
#include <iostream>

int main() {
  int num { 5 };
  std::cout << num << std::endl;     // выводим значение переменной num
  std::cout << &num << std::endl;    // выводим адрес памяти переменной num
  std::cout << *(&num) << std::endl; // выводим значение по адресу памяти переменной num
                                 // (скобки не требуются, но упрощают чтение)

  return 0;
}
```

Обратим внимание на выражение `*(&num)`. Мы с начала получили адрес переменной через оператор `&` и уже потом через адрес — значение. Эта программа создает следующий вывод:

<pre class='hexlet-basics-output'>
  5
  0x7fff9cea58c0
  5
</pre>

Теперь у нас есть важные инструменты для работы с указателями, к изучению которых мы приступим в следующем уроке.
