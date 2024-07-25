# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "F:/IOT/esp/v5.2.2/esp-idf/components/bootloader/subproject"
  "F:/IOT/esp-box/examples/factory_demo2/build/bootloader"
  "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix"
  "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix/tmp"
  "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix/src/bootloader-stamp"
  "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix/src"
  "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "F:/IOT/esp-box/examples/factory_demo2/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
