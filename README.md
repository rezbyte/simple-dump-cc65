# simple-dump-cc65
A simple memory dumper for the Commodore 64 written in C89.
Built using the [cc65](https://cc65.github.io/index.html) C compiler for 6502 based systems.

# Running
If you haven't already, [install cc65.](https://cc65.github.io/getting-started.html)

Compile using cc65's compile & link utility:
```
 cl65 -Ois memdump.c
```

Then run the compiled binary `memdump` in your preferred emulator.

If you don't have a preference try [VICE.](https://vice-emu.sourceforge.io/)
In VICE, press 'Smart attach ...' under 'File' dropdown in the menubar.
Then, select the binary you generated using `cl65`.
After that, type 'run' into the shell & press enter.
