#!/bin/bash                                                                     
touch write_real.log write_toya.log
gcc -Wall -Wextra -Werror main.c -L. -lasm                                      
./a.out > toya.log                                                              
gcc -Wall -Wextra -Werror main.c -L. -lasm -D REAL                              
./a.out > real.log                                                              
diff toya.log real.log                                                          
diff write_toya.log write_real.log  