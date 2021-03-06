//===----------------------------------------------------------------------===//
//
// This source file is part of the SwiftNIO open source project
//
// Copyright (c) 2017-2018 Apple Inc. and the SwiftNIO project authors
// Licensed under Apache License v2.0
//
// See LICENSE.txt for license information
// See CONTRIBUTORS.txt for the list of SwiftNIO project authors
//
// SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------===//
#ifndef CNIONGHTTP2_H
#define CNIONGHTTP2_H

#include <nghttp2/nghttp2.h>

// There are some shims we need to provide here.
typedef int (*CNIONghttp2_nghttp2_error_callback)(nghttp2_session *session,
                                                  const char *msg,
                                                  size_t len,
                                                  void *user_data);

void CNIONghttp2_nghttp2_session_callbacks_set_error_callback(
    nghttp2_session_callbacks *cbs,
    CNIONghttp2_nghttp2_error_callback error_callback);

int CNIONghttp2_nghttp2_version_number(void);

#endif
