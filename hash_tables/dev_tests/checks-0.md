# compilation

- file is present
- compile program with `1-djb2.c` and `2-key_index.c`

# correct output

- set several key-value pairs
- set several key/value pairs in a hash table of size 1024 without collision
- set several key/value pairs in a hash table of size 30 with collisions
- handled `malloc` return
- set several key/value pairs in a hash table of size 1 (collisions)
- `shash_table_set(ht, “c”, “is fun”);` with `ht->size = 1024`
- check that a copy of the key/value is stored
- call: `shash_table_set(ht, “holberton”, “is cool”);`, `shash_table_set(ht, “holberton”, “is soooo cooool”);`, `shash_table_set(ht, “holberton”, “is awesome”);`
- print a hash table of size 1024, containing several key/value pairs no collision
- `shash_table_create(2048);`
- `shash_table_set(null, “holberton”, “is cool”);`
- print a hash table of size 30, containing several key/value pairs with collisions
- get an existing key from a hash table of size 1024 with no collision
- `shashtableprint(null);`
- get an existing key from a hash table of size 30 with collisions
- `print_rev` a hash table of size 1024, containing several key/value pairs no collision
- `shash_table_get(null, “usa”);`
- `print_rev` a hash table of size 30, containing several key/value pairs with collisions
- get a unknown key from a hash table of size 1024
- `hashtableprint_rev(null);`

# betty

- betty coding style
- betty documentation style
