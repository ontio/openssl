/*
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include "internal/cryptlib.h"
#include <openssl/crypto.h>
#include <openssl/x509.h>

const char *X509_get_default_private_dir(void)
{
#ifdef ONTOLOGY_WASM
	return "/ontologywasm0";
#else
    return X509_PRIVATE_DIR;
#endif
}

const char *X509_get_default_cert_area(void)
{
#ifdef ONTOLOGY_WASM
	return "/ontologywasm1";
#else
    return X509_CERT_AREA;
#endif
}

const char *X509_get_default_cert_dir(void)
{
#ifdef ONTOLOGY_WASM
	return "/ontologywasm2";
#else
    return X509_CERT_DIR;
#endif
}

const char *X509_get_default_cert_file(void)
{
#ifdef ONTOLOGY_WASM
	return "/ontologywasm3";
#else
    return X509_CERT_FILE;
#endif
}

const char *X509_get_default_cert_dir_env(void)
{
#ifdef ONTOLOGY_WASM
	return "/ontologywasm4";
#else
    return X509_CERT_DIR_EVP;
#endif
}

const char *X509_get_default_cert_file_env(void)
{
#ifdef ONTOLOGY_WASM
	return "/ontologywasm5";
#else
    return X509_CERT_FILE_EVP;
#endif
}
