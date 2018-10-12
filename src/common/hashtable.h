/* Created by following the Hash Table tutorial by James Routley
 * https://github.com/jamesroutley/write-a-hash-table
 * Slightly modified (probably badly) by Davarice
 */
typedef struct {
    char* key;
    char* value;
} ht_item;

typedef struct {
    int size;
    int count;
    ht_item** items;
} ht_hash_table;


void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* h, const char* key);

void ht_del_hash_table(ht_hash_table* ht);
ht_hash_table* ht_new(void);
