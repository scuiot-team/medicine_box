# Install script for directory: F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/factory_demo")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "F:/IOT/esp_tools/tools/xtensa-esp-elf/esp-13.2.0_20230928/xtensa-esp-elf/bin/xtensa-esp32s3-elf-objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/aes.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/aria.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/asn1.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/asn1write.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/base64.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/bignum.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/block_cipher.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/build_info.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/camellia.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ccm.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/chacha20.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/chachapoly.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/check_config.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/cipher.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/cmac.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/compat-2.x.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_adjust_legacy_crypto.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_adjust_legacy_from_psa.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_adjust_psa_from_legacy.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_adjust_psa_superset_legacy.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_adjust_ssl.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_adjust_x509.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/config_psa.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/constant_time.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ctr_drbg.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/debug.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/des.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/dhm.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ecdh.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ecdsa.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ecjpake.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ecp.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/entropy.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/error.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/gcm.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/hkdf.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/hmac_drbg.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/lms.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/mbedtls_config.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/md.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/md5.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/memory_buffer_alloc.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/net_sockets.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/nist_kw.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/oid.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/pem.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/pk.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/pkcs12.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/pkcs5.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/pkcs7.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/platform.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/platform_time.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/platform_util.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/poly1305.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/private_access.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/psa_util.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ripemd160.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/rsa.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/sha1.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/sha256.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/sha3.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/sha512.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ssl.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ssl_cache.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ssl_ciphersuites.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ssl_cookie.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/ssl_ticket.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/threading.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/timing.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/version.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/x509.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/x509_crl.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/x509_crt.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/mbedtls/x509_csr.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/psa" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/build_info.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_adjust_auto_enabled.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_adjust_config_key_pair_types.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_adjust_config_synonyms.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_builtin_composites.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_builtin_key_derivation.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_builtin_primitives.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_compat.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_config.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_driver_common.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_driver_contexts_composites.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_driver_contexts_key_derivation.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_driver_contexts_primitives.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_extra.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_legacy.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_platform.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_se_driver.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_sizes.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_struct.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_types.h"
    "F:/IOT/esp/v5.2.2/esp-idf/components/mbedtls/mbedtls/include/psa/crypto_values.h"
    )
endif()

