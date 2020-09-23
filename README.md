---


---

<h1 id="prime">Prime</h1>
<p><strong>prime.c</strong><br>
Prime Number: a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).</p>
<p>This program, will check if the user input is a prime number or not.</p>
<h3 id="compile">Compile</h3>
<p>To compile make sure you have installed a C compiler on your device, then execute:</p>
<p><strong>make prime</strong> or <strong>gcc prime.c -o prime</strong><br>
i.e</p>
<pre><code>$ make prime
</code></pre>
<p>or</p>
<pre><code>$ gcc prime.c -o prime
</code></pre>
<h3 id="usage">Usage:</h3>
<p>To use the prime program, type use <strong>./prime</strong></p>
<p>i.e</p>
<pre><code>$ ./prime
</code></pre>
<h3 id="example">Example</h3>
<pre><code>$ ./prime
Number: 
</code></pre>
<p>The program start asking the input from the user, in this case is the number you want to check if its prime or not.</p>
<pre><code>$ ./prime
Number: 4
4 is not a prime number
$ ./prime
Number: 3
3 is a prime number
</code></pre>
<h1 id="next-prime">Next Prime</h1>
<p><strong>next_prime.c</strong><br>
Prime Number: a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).</p>
<p>This program, prints the prime numbers that exists from x to y inclusive, x being the user input and y the command_line argument</p>
<p>By default it will check the next 10 numbers, but you can change it.</p>
<h3 id="compile-1">Compile</h3>
<p>To compile make sure you have installed a C compiler on your device, then execute:</p>
<p><strong>make next_prime</strong> or <strong>gcc next_prime.c -o next_prime</strong><br>
i.e</p>
<pre><code>$ make next_prime
</code></pre>
<p>or</p>
<pre><code>$ gcc next_prime.c -o next_prime
</code></pre>
<h3 id="usage-1">Usage:</h3>
<p>To use the prime program, type use <strong>./next_prime</strong></p>
<p>i.e</p>
<pre><code>$ ./next_prime
</code></pre>
<h3 id="example-1">Example</h3>
<pre><code>$./next_prime
from: 
</code></pre>
<p>The program starts asking the user for an input, in this case, it is the number you want to start checking if its prime from, up to the next 10 successively by default.</p>
<p>i.e</p>
<pre><code>$ ./next_prime
from: 4
To: 10
Primes: 5 - 7 - 11 - 13
</code></pre>
<p>Because, within the next 10 numbers from the start 4, the prime numbers are only 5, 7, 11 and 13.</p>
<p>i.e 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14. The primes are 5, 7, 11 and 13.</p>
<p>To change the numbers you need start the program with<br>
<strong>./next_prime value</strong></p>
<pre><code>$./next_prime value
</code></pre>
<p>where the value is the quantity of numbers you want to check to find the prime numbers.</p>
<p>To see a larger list you can user the the new size of the list when starting the program</p>
<p>i.e</p>
<pre><code>$./next_prime 100
from 4
5 - 7 - 11 - 13 - 17 - 19 - 23 - 29 - 31 - 37 - 41 - 43 - 47 - 53 - 59 - 61 - 67 - 71 - 73 - 
79 - 83 - 89 - 97 - 101 - 103
</code></pre>
<p>Because, within the next 100 numbers from the start 4, the prime numbers are only</p>
<p>5 - 7 - 11 - 13 - 17 - 19 - 23 - 29 - 31 - 37 - 41 - 43 - 47 - 53 - 59 - 61 - 67 - 71 - 73 - 79 - 83 - 89 - 97 - 101 - 103.</p>

