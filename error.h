/**
 * Error type definitions.
 *
 * \file   error.h
 *
 * \author Justin J. Meza
 *
 * \date   2012
 */

#ifndef __ERROR_H__
#define __ERROR_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * Represents an error type.  The error types are organized based on which
 * module they occur in:
 *
 *   - MN_* for the main body,
 *   - LX_* for the lexer,
 *   - TK_* for the tokenizer,
 *   - PR_* for the parser,
 *   - IN_* for the interpreter
 *
 * \note Remember to update the error message and error code arrays (in the
 * error C file) with the appropriate error message and code.
 */
typedef enum {
	MN_ERROR_OPENING_FILE,
	MN_ERROR_CLOSING_FILE,

	LX_LINE_CONTINUATION,
	LX_MULTIPLE_LINE_COMMENT,
	LX_EXPECTED_TOKEN_DELIMITER,

	TK_EXPECTED_FLOATING_POINT,
	TK_EXPECTED_INTEGER,
	TK_UNKNOWN_TOKEN,

	PR_UNKNOWN_IDENTIFIER_TYPE,
	PR_UNKNOWN_STATEMENT_TYPE,
	PR_UNKNOWN_EXPRESSION_TYPE,
	PR_EXPECTED_BOOLEAN,
	PR_EXPECTED_INTEGER,
	PR_EXPECTED_FLOAT,
	PR_EXPECTED_STRING,
	PR_EXPECTED_CONSTANT,
	PR_EXPECTED_TYPE,
	PR_EXPECTED_IDENTIFIER,
	PR_EXPECTED_TOKEN,
	PR_INVALID_OPERATOR,
	PR_EXPECTED_EXPRESSION,
	PR_EXPECTED_END_OF_EXPRESSION,
	PR_EXPECTED_END_OF_STATEMENT,
	PR_CANNOT_USE_STR_AS_LITERAL,
	PR_LITERAL_MUST_BE_UNIQUE,
	PR_EXPECTED_LOOP_NAME,
	PR_EXPECTED_EITHER_TOKEN,
	PR_EXPECTED_UNARY_FUNCTION,
	PR_EXPECTED_MATCHING_LOOP_NAME,
	PR_EXPECTED_STATEMENT,

	IN_INVALID_IDENTIFIER_TYPE,
	IN_UNABLE_TO_STORE_VARIABLE,
	IN_VARIABLE_DOES_NOT_EXIST,
	IN_CANNOT_IMPLICITLY_CAST_NIL,
	IN_CANNOT_CAST_FUNCTION_TO_BOOLEAN,
	IN_CANNOT_CAST_ARRAY_TO_BOOLEAN,
	IN_UNKNOWN_VALUE_DURING_BOOLEAN_CAST,
	IN_UNABLE_TO_CAST_VALUE,
	IN_EXPECTED_INTEGER_VALUE,
	IN_CANNOT_CAST_FUNCTION_TO_INTEGER,
	IN_CANNOT_CAST_ARRAY_TO_INTEGER,
	IN_UNKNOWN_VALUE_DURING_INTEGER_CAST,
	IN_EXPECTED_DECIMAL,
	IN_CANNOT_CAST_FUNCTION_TO_DECIMAL,
	IN_CANNOT_CAST_ARRAY_TO_DECIMAL,
	IN_UNKNOWN_VALUE_DURING_DECIMAL_CAST,
	IN_CANNOT_CAST_BOOLEAN_TO_STRING,
	IN_EXPECTED_CLOSING_PAREN,
	IN_INVALID_HEX_NUMBER,
	IN_CODE_POINT_MUST_BE_POSITIVE,
	IN_EXPECTED_CLOSING_SQUARE_BRACKET,
	IN_EXPECTED_CLOSING_CURLY_BRACE,
	IN_VARIABLE_NOT_AN_ARRAY,
	IN_CANNOT_CAST_FUNCTION_TO_STRING,
	IN_CANNOT_CAST_ARRAY_TO_STRING,
	IN_UNKNOWN_VALUE_DURING_STRING_CAST,
	IN_UNKNOWN_CAST_TYPE,
	IN_UNDEFINED_FUNCTION,
	IN_INCORRECT_NUMBER_OF_ARGUMENTS,
	IN_INVALID_RETURN_TYPE,
	IN_UNKNOWN_CONSTANT_TYPE,
	IN_DIVISION_BY_ZERO,
	IN_INVALID_OPERAND_TYPE,
	IN_INVALID_BOOLEAN_OPERATION_TYPE,
	IN_INVALID_EQUALITY_OPERATION_TYPE,
	IN_REDEFINITION_OF_VARIABLE,
	IN_INVALID_DECLARATION_TYPE,
	IN_INVALID_TYPE,
	IN_FUNCTION_NAME_USED_BY_VARIABLE,
	IN_CANNOT_CAST_VALUE_TO_ARRAY,
} ErrorType;

void error(ErrorType, ...);

#endif /* __ERROR_H__ */
