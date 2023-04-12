#include "sha256.c"

char ch[200];
char hash[65];

gets(ch);

sha256_hex(ch, hash);

puts(hash);
