QLiveBittorrent
===============


Bittorrent client with function reading files before they would be downloaded

1) Compile driver.c with string: gcc -g driver.c `pkg-config fuse --cflags --libs` -o qlivebittorrent-driver
2) qmake -makefile && make

qlivebittorrent try to find qlivebittorrent-driver in the working directory.
In non-Portable version (define PORTABLE in qlivebittorrent.pro) it would try
to find it in PATH

GUI interface is not done, so please don't try to use it :-)

Current status of program:
I tested it on archlinux, by downloading 1.45G file on 3Mbit channel - it works good.
If you want to test it, you should understand that my program is not a god, so piece,
which you want to see can be downloaded with a big delay.
http://habrahabr.ru/post/185770/

Plus and Minus keys - to increase/decrease download rate limit.
'a' - to switch agressive/non-agressive piece picking;

GPL License
