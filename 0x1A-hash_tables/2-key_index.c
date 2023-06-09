/**
 * key_index - map key to an index
 * @key: string to convert to fixed-sized value (index)
 * @size: size of the table to index
 *
 * Return: table index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	hash = hash % size;
	return (hash);
}
