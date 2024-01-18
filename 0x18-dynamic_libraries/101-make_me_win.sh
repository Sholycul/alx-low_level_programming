#!/bin/bash
echo -e '#include <stdio.h>\n#include <stdlib.h>\nint rand(void) { static int called = 0; called++; if (called == 1) { return 9; } else if (called == 2) { return 8; } else if (called == 3) { return 10; } else if (called == 4) { return 24; } else if (called == 5) { return 75; } else if (called == 6) { return 9; } else { return rand(); } }' > /tmp/winner.c
gcc -shared -o /tmp/winner.so /tmp/winner.c
export LD_LIBRARY_PATH=/tmp:$LD_LIBRARY_PATH

