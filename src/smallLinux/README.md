
Add non-forth words:

get
set
cget
cset
allocate


These are required because the standard forth @ ! c@ c! operate in a sandbox for robustnes

The above allow any valid memory to be addressed, if invalid crash will ensue.

allot makes use of the arena to allocate memory.




