/*
 *
 *  Barn Programming Language Organization
 *  All rights reserved. Copyright (C) 2022-2023
 *   
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *   
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
*/

#include <barn_core.h>

#include <barn_args_parser.h>
#include <barn_array.h>
#include <barn_error.h>
#include <barn_debug.h>
#include <barn_main.h>

int
main(int argc, char** argv)
{
    barn_args_parser_t* args_parser = barn_args_parser_start(argc, argv);

    if (args_parser->is_filename == true)
    {
        
    }

    return EXIT_SUCCESS;
}