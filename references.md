# References

## Background
- [Stack buffer overflow, Wikipedia](https://en.wikipedia.org/wiki/Stack_buffer_overflow): overview of stack smashing, canaries, and other defenses.
- [Morris worm, Wikipedia](https://en.wikipedia.org/wiki/Morris_worm): history of the 1988 worm and the vulnerabilities it used.
- [The Morris Worm, Cornell alumni article](https://alumni.cornell.edu/cornellians/morris-worm/): background on the incident and its aftermath.

## Videos and lectures
- [Running a Buffer Overflow Attack, Computerphile](https://www.youtube.com/watch?v=1S0aBV-Waeo): a full walkthrough of a stack overflow attack.
- pwn.college, "Memory Errors" module (Arizona State University): lectures on smashing the stack, stack canaries, and ASLR.
- LiveOverflow, "First Stack Buffer Overflow to modify Variable - bin 0x0C" and "Buffer Overflows can Redirect Program Execution - bin 0x0D" (YouTube).

## Defenses
- Red Hat Developer, article on `_FORTIFY_SOURCE`: explains the checked `__strcpy_chk` wrapper that stopped my demo on macOS.
- ir0nstone binary exploitation notes: short pages on stack canaries, ASLR, NX, and return-oriented programming.

## Textbook and practice
- *Computer Systems: A Programmer's Perspective* (CS:APP3e), sections 3.10.3 and 3.10.4: stack layout and buffer overflow defenses.
- CS:APP Attack Lab (Carnegie Mellon): hands-on buffer overflow exercises.

## Images used in the slides
- [Morris Worm disk photo](https://commons.wikimedia.org/wiki/File:Morris_Worm.jpg): Go Card USA, CC BY-SA 2.0
- [Stack before overflow](https://commons.wikimedia.org/wiki/File:Stack_Overflow_2.png): Michael Lynn, public domain
- [Stack with normal input](https://commons.wikimedia.org/wiki/File:Stack_Overflow_3.png): Michael Lynn, public domain
- [Stack after overflow](https://commons.wikimedia.org/wiki/File:Stack_Overflow_4.png): Michael Lynn, public domain

## AI conversation
- Claude was used as a tutor to learn this topic: https://claude.ai/share/46e65250-2665-4f69-8636-ce49ae173275
