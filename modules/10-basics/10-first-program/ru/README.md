Изучать язык программирования, по традиции, начинают с программы 'Hello, World!'.

<pre class='hexlet-basics-output'>
  Hello, World!
</pre>

В языке C++ эта программа будет выглядеть так:

```cpp
main() {
  std::cout << "Hello, World!";
}
```

Текст `Hello, World!` появится на экране благодаря команде `std::cout <<`.
Такая команда выводит на экран информацию, которая указана после оператора << `'Hello, World!'`.
Оператор `<<` позволяет строить цепочки, например: `std::cout << "Hello, World!" << "\n";`
То есть теперь информация после _Hello, World!_ будет выводиться на экране на следующей строке.

То, что присутствует на экране помимо этой команды, нужно для работы любой программы на языке C++, мы разберём это позднее.