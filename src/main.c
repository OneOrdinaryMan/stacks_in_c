/*
    Stacks in C
    Copyright (C) 2023  Srivathsan Sudarsanan

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "lib/lib.h"
#include <stdio.h>
int main() {
  stack input_stack = create_stack();
  user_push(&input_stack);
  printf("%d\n", pop(&input_stack));
  printf("%d\n", peek(&input_stack));
  delete_stack(&input_stack);
  return 0;
}
