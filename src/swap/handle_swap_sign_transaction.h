#pragma once

#include "swap_lib_calls.h"

bool copy_transaction_parameters(create_transaction_parameters_t* sign_transaction_params);

void __attribute__((noreturn)) finalize_exchange_sign_transaction(bool is_success);
