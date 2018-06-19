/***************************************************************************
 *
 * Copyright (c) 2018 Balabit
 * All rights reserved.
 *
 ***************************************************************************/

#define BALABIT_WANT_SSL_SEND_ALERT
#include <openssl/ssl.h>

int SSL_send_alert(SSL *s, int level, int desc)
{
    return ssl3_send_alert(s, level, desc);
}
