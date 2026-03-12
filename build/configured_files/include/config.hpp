// this file will be touched by CMake to edit/copy this file to other directries.
#pragma once


#include <cstdint>
#include <string_view>

// '@' or 'CppProject' will be replaced by CMake with the actual project name during the build process. -> 'CppProject'
static constexpr std::string_view project_name = "CppProject";
static constexpr std::string_view project_version = "1.0.0";
//                                                                                  1.0.0
//                                                                                  MJ.MN.PA
static constexpr std::int32_t project_version_major{1};   // code base breaking changes
static constexpr std::int32_t project_version_minor{0};   // new features, but backward compatible
static constexpr std::int32_t project_version_patch{0};   // bug fixes, but backward compatible
