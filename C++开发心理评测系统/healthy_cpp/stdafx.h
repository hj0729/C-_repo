#ifndef STDAFX_H
#define STDAFX_H

#ifndef LINUX
// 解决std::byte类型重定义
#define _HAS_STD_BYTE 0
// 添加要在此处预编译的标头
#include "OatppMacros.h"
#include "jwt/jwt.hpp"
#include "mysql/jdbc.h"
#include "SqlSession.h"
#include "yaml-cpp/yaml.h"
#include "sw/redis++/redis++.h"

#endif // !LINUX

#endif //STDAFX_H
