/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by atoomix on 2023/9/2
//

#pragma once

#if defined(__GNUC__) || defined(__clang__)
#define OB_LIKELY(x) __builtin_expect(!!(x), 1)
#define OB_UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
#define OB_LIKELY(x) (x)
#define OB_UNLIKELY(x) (x)
#endif
