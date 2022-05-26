
### Project 0x1A. C - Hash tables. Holberton School 2022

#### Task 0:  
Function that creates a hash table.  
Propotype:  `hash_table_t *hash_table_create(unsigned long int size);`  
- *size*  is the size of the array  
- Returns a pointer to the newly created hash table
- If something went wrong, the function returns NULL


#### Task 1:
Hash function that implements the djb2 algorithm.  
Propotype:  `unsigned long int hash_djb2(const unsigned char *str);`

#### Task 2:
Function that gives you the index of a key.  
Propotype:  `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
- *key* is the key
- *size*  is the size of the array of the hash table
- this function uses the hash_djb2 function that was written earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table

#### Task 3:
Function that adds an element to the hash table.  
Propotype:  `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- *ht* is the hash table you want to add or update the key/value to
- *key* is the key. *key* can not be an empty string
- and *value* is the value associated with the key. *value* must be duplicated. *value* can be an empty string  
- Returns: 1 if it succeeded, 0 otherwise
- In case of collision, add the new node at the beginning of the list

#### Task 4:
Function that retrieves a value associated with a key.  
Propotype:  `char *hash_table_get(const hash_table_t *ht, const char *key);`  
- *ht* is the hash table you want to look into  
- *key* is the key you are looking for
- Returns the value associated with the element, or NULL if key couldn’t be found

#### Task 5:
Function that prints a hash table.  
Propotype:  `void hash_table_print(const hash_table_t *ht);`  
- *ht* is the hash table
- prints the key/value in the order that they appear in the array of hash table
	- Order: array, list
- If *ht* is NULL, doesn’t print anything

#### Task 6:
Function that deletes a hash table.  
Propotype:  `void hash_table_delete(hash_table_t *ht);`  
- *ht* is the hash table
