# SHA256simple
A lightweight built-in .c file for SHA-256 hashing without external libraries.

# Usage
```c
#include "sha256.c"
sha256_hex(ch, hash);
```

# Complete example
```c
#include "sha256.c"
char ch[200];
char hash[65];
gets(ch);
sha256_hex(ch, hash);
puts(hash);
```

# Astuce
You can use the constant ```SHA256_HEX_SIZE``` instead of ```65```.
