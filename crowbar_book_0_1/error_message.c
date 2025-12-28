#include <string.h>
#include "crowbar.h"

MessageFormat crb_compile_error_message_format[] = {
    {"dummy"},
    {"Syntax error near ($(token))"},
    {"Invalid character ($(bad_char))"},
    {"Duplicate functioin definition ($(name))"},
    {"dummy"},
};

MessageFormat crb_runtime_error_message_format[] = {
    {"dummy"},
    {"Undefined variable ($(name))。"},
    {"Undefined function ($(name))。"},
    {"Too many arguments have been passed to the function."},
    {"Missing argument(s) for the function."},
    {"Condition expression of if statement must be boolean type."},
    {"Operand of minus operator must be numeric type."},
    {"Invalid type of operand of ternary operator $(operator)"},
    {"$(operator) operator cannot be applied to boolean type"},
    {"File path and mode must be strings in fopen()"},
    {"File pointer must be passed to fclose()"},
    {"File pointer must be passed to fgets()"},
    {"File pointer must be passed to fputs()"},
    {"Cannot use $(operator) operator for null type operands"},
    {"Cannot devide by zero"},
    {"Global variable $(name) does not exist"},
    {"global statement cannot be used outside of function body"},
    {"Cannot use $(operator) operator for string type operands"},
    {"dummy"},
};
