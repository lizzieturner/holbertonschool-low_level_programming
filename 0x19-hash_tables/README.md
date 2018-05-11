# 0x19. C - Hash tables   

## OBJECTIVES   
After completing this project, you are expected to understand:   
   * hash functions   
   * hash tables   
   * collisions   

## REQUIREMENTS   
   * allowed editors: `vi`, `vim`, `emacs`   
   * all files will be compiled on Ubuntu 14.04 LTS   
   * files will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Wextra` `-Werror` and `-pedantic`   
   * all code should use the `Betty` style   
   * no more than 5 functions per file   
   * the prototypes of all functions should be included in a header file named `hash_tables.h`   

## EXERCISES   

### MANDATORY   

**[0-hash_table_create.c](0-hash_table_create.c)** - Write a function that creates a hash table   
Prototype: `hash_table_t *hash_table_create(unsigned long int size);`   

**[1-djb2.c](1-djb2.c)** - Write a function that implements the `djb2` algorithm    
Prototype: `unsigned long int hash_djb2(const unsigned char *str);`   

**[2-key_index.c](2-key_index.c)** - Write a function that returns the index of a key   
Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`   

**[3-hash_table_set.c](3-hash_table_set.c)** - Write a function that adds an element to a hash table    
Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`   

**[4-hash_table_get.c](4-hash_table_get.c)** - Write a function that retrieves a value associated with a key   
Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`   

**[5-hash_table_print.c](5-hash_table_print.c)** - Write a function that prints a hash table    
Prototype: `void hash_table_print(const hash_table_t *ht);`   

**[6-hash_table_delete.c](6-hash_table_delete.c)** - Write a function that deletes a hash table    
Prototype: `void hash_table_delete(hash_table_t *ht);`   

### ADVANCED   

**[100-sorted_hash_table.c](100-sorted_hash_table.c)** - Rewrite the previous functions using these data structures:   
   * `shash_table_t *shash_table_create(unsigned long int size);`   
   * `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`   
     * The key/value pair should be inserted in the sorted list at the right place   
     * Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it.   
   * `char *shash_table_get(const shash_table_t *ht, const char *key);`   
   * `void shash_table_print(const shash_table_t *ht);`   
     * Should print the hash table using the sorted linked list   
   * `void shash_table_print_rev(const shash_table_t *ht);`   
     * Should print the hash tables key/value pairs in reverse order using the sorted linked list   
   * `void shash_table_delete(shash_table_t *ht);`   
