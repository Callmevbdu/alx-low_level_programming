# C - Makefiles

This is the directory of "0x1C. C - Makefiles" project.

## Tasks

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Creating my first Makefile.
    * name of the executable: school
    * rules: all
    * variables: none
    
* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile):
    * name of the executable: school
    * rules: all
    * variables: CC, SRC

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Creating my first useful Makefile.
    * name of the executable: school
    * rules: all
    * variables: CC, SRC, OBJ, NAME
    * The all rule should recompile only the updated source files
    * You are not allowed to have a list of all the .o files

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile):
    * name of the executable: school
    * rules: all, clean, oclean, fclean, re
    * variables: CC, SRC, OBJ, NAME, RM
    * The all rule should recompile only the updated source files
    * The clean, oclean, fclean, re rules should never fail
    * You are not allowed to have a list of all the .o files

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile):
    * name of the executable: school
    * rules: all, clean, fclean, oclean, re
    * variables: CC, SRC, OBJ, NAME, RM, CFLAGS
    * The all rule should recompile only the updated source files
    * The clean, oclean, fclean, re rules should never fail
    * You are not allowed to have a list of all the .o files

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py):
    * Creating a function def island_perimeter(grid): that returns the
    perimeter of the island described in grid:
    * grid is a list of list of integers:
    * Grid is completely surrounded by water, and there is one island
    (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    * First line contains '#!/usr/bin/python3'
    * You are not allowed to import any module
    * Module and function must be documented
  * [100-Makefile](./100-Makefile):
