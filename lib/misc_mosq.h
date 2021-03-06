/*
Copyright (c) 2009-2020 Roger Light <roger@atchoo.org>

All rights reserved. This program and the accompanying materials
are made available under the terms of the Eclipse Public License v1.0
and Eclipse Distribution License v1.0 which accompany this distribution.
 
The Eclipse Public License is available at
   http://www.eclipse.org/legal/epl-v10.html
and the Eclipse Distribution License is available at
  http://www.eclipse.org/org/documents/edl-v10.php.
 
Contributors:
   Roger Light - initial implementation and documentation.
*/
#ifndef MISC_MOSQ_H
#define MISC_MOSQ_H

#include <stdbool.h>

FILE *mosquitto__fopen(const char *path, const char *mode, bool restrict_read);
char *misc__trimblanks(char *str);
char *fgets_extending(char **buf, int *buflen, FILE *stream);

#endif
