/*
 * Copyright (C) 2014 LNLS (www.lnls.br)
 * Author: Lucas Russo <lucas.russo@lnls.br>
 *
 * Released according to the GNU LGPL, version 3 or any later version.
 */

/* Error definitions and output stringification based on the work available
 * at the libsllp project repository: https://github.com/brunoseivam/libsllp */

#include "sm_io_err.h"

static const char *smio_err [SMIO_ERR_END] =
{
    [SMIO_SUCCESS]              = "Success",
    [SMIO_ERR_ALLOC]            = "Could not allocate memory",
    [SMIO_ERR_FUNC_NOT_IMPL]    = "Function not implemented",
    [SMIO_ERR_OPCODE_NOT_SUPP]  = "Opcode not supported",
    [SMIO_ERR_WRONG_NARGS]      = "Wrong number of arguments",
    [SMIO_ERR_WRONG_PARAM]      = "Wrong parameter value",
    [SMIO_ERR_LLIO]             = "Low-level I/O could not complete operation",
    [SMIO_ERR_EXPORT_OP]        = "Could not export function"
};

/* Convert enumeration type to string */
const char * smio_err_str (smio_err_e err)
{
    return smio_err [err];
}
