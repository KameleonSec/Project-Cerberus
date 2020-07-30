// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#ifndef PLATFORM_ALL_TESTS_H_
#define PLATFORM_ALL_TESTS_H_


/* Identify the tests that should be run for the platform. */
#define	TESTING_RUN_FLASH_COMMON_SUITE
#define	TESTING_RUN_SPI_FLASH_SUITE
#define	TESTING_RUN_HASH_MBEDTLS_SUITE
#define	TESTING_RUN_HASH_SUITE
#define	TESTING_RUN_RSA_MBEDTLS_SUITE
#define	TESTING_RUN_FLASH_UTIL_SUITE
#define	TESTING_RUN_APP_IMAGE_SUITE
#define	TESTING_RUN_FIRMWARE_UPDATE_SUITE
#define	TESTING_RUN_HOST_FW_UTIL_SUITE
#define	TESTING_RUN_MANIFEST_FLASH_SUITE
#define	TESTING_RUN_PFM_FLASH_SUITE
#define	TESTING_RUN_CFM_FLASH_SUITE
#define	TESTING_RUN_CERBERUS_PROTOCOL_REQUIRED_COMMANDS_SUITE
#define	TESTING_RUN_CERBERUS_PROTOCOL_MASTER_COMMANDS_SUITE
#define	TESTING_RUN_CERBERUS_PROTOCOL_OPTIONAL_COMMANDS_SUITE
#define	TESTING_RUN_CERBERUS_PROTOCOL_DEBUG_COMMANDS_SUITE
#define	TESTING_RUN_CMD_INTERFACE_SYSTEM_SUITE
#define	TESTING_RUN_CMD_INTERFACE_SLAVE_SUITE
#define	TESTING_RUN_CMD_INTERFACE_DUAL_CMD_SET_SUITE
#define	TESTING_RUN_MCTP_PROTOCOL_SUITE
#define	TESTING_RUN_STATE_MANAGER_SUITE
#define	TESTING_RUN_HOST_STATE_MANAGER_SUITE
#define	TESTING_RUN_SYSTEM_STATE_MANAGER_SUITE
#define	TESTING_RUN_HOST_FLASH_MANAGER_SUITE
#define	TESTING_RUN_PFM_MANAGER_FLASH_SUITE
#define	TESTING_RUN_CFM_MANAGER_FLASH_SUITE
#define	TESTING_RUN_HOST_PROCESSOR_SUITE
#define	TESTING_RUN_HOST_PROCESSOR_DUAL_SUITE
#define	TESTING_RUN_HOST_IRQ_HANDLER_SUITE
#define	TESTING_RUN_SPI_FILTER_IRQ_HANDLER_SUITE
#define	TESTING_RUN_PLATFORM_TIMER_SUITE
#define	TESTING_RUN_BMC_RECOVERY_SUITE
#define	TESTING_RUN_LOGGING_FLASH_SUITE
#define	TESTING_RUN_LOGGING_MEMORY_SUITE
#define	TESTING_RUN_CHECKSUM_SUITE
#define	TESTING_RUN_MCTP_INTERFACE_SUITE
#define	TESTING_RUN_ECC_MBEDTLS_SUITE
#define	TESTING_RUN_X509_MBEDTLS_SUITE
#define	TESTING_RUN_AES_MBEDTLS_SUITE
#define	TESTING_RUN_DEBUG_LOG_SUITE
#define	TESTING_RUN_RIOT_CORE_COMMON_SUITE
#define	TESTING_RUN_BASE64_MBEDTLS_SUITE
#define	TESTING_RUN_KEYSTORE_FLASH_SUITE
#define	TESTING_RUN_RIOT_KEY_MANAGER_SUITE
#define	TESTING_RUN_AUX_ATTESTATION_SUITE
#define	TESTING_RUN_FIRMWARE_HEADER_SUITE
#define	TESTING_RUN_SPI_FILTER_IRQ_HANDLER_DIRTY_SUITE
#define	TESTING_RUN_HOST_IRQ_HANDLER_PFM_CHECK_SUITE
#define	TESTING_RUN_ATTESTATION_MASTER_SUITE
#define	TESTING_RUN_ATTESTATION_SLAVE_SUITE
#define	TESTING_RUN_RNG_MBEDTLS_SUITE
#define	TESTING_RUN_DEVICE_MANAGER_SUITE
#define	TESTING_RUN_ECC_RIOT_SUITE
#define	TESTING_RUN_BASE64_RIOT_SUITE
#define	TESTING_RUN_HASH_RIOT_SUITE
#define	TESTING_RUN_PCR_SUITE
#define	TESTING_RUN_PCR_STORE_SUITE
#define	TESTING_RUN_HOST_IRQ_HANDLER_MASK_IRQS_SUITE
#define	TESTING_RUN_HOST_PROCESSOR_DUAL_FULL_BYPASS_SUITE
#define	TESTING_RUN_OBSERVABLE_SUITE
#define	TESTING_RUN_PFM_MANAGER_SUITE
#define	TESTING_RUN_CFM_MANAGER_SUITE
#define	TESTING_RUN_PFM_OBSERVER_PENDING_RESET_SUITE
#define	TESTING_RUN_PFM_OBSERVER_PCR_SUITE
#define	TESTING_RUN_CFM_OBSERVER_PCR_SUITE
#define	TESTING_RUN_SIGNATURE_VERIFICATION_RSA_SUITE
#define	TESTING_RUN_SIGNATURE_VERIFICATION_ECC_SUITE
#define	TESTING_RUN_MANIFEST_VERIFICATION_SUITE
#define	TESTING_RUN_X509_RIOT_SUITE
#define	TESTING_RUN_RSA_SUITE
#define	TESTING_RUN_SPI_FLASH_SFDP_SUITE
#define	TESTING_RUN_HOST_FLASH_INITIALIZATION_SUITE
#define	TESTING_RUN_RECOVERY_IMAGE_HEADER_SUITE
#define	TESTING_RUN_RECOVERY_IMAGE_SECTION_HEADER_SUITE
#define	TESTING_RUN_MANIFEST_MANAGER_SUITE
#define	TESTING_RUN_SPI_FILTER_SUITE
#define	TESTING_RUN_IMAGE_HEADER_SUITE
#define	TESTING_RUN_CMD_CHANNEL_SUITE
#define	TESTING_RUN_FIRMWARE_COMPONENT_SUITE
#define	TESTING_RUN_FLASH_UPDATER_SUITE
#define	TESTING_RUN_TPM_SUITE
#define	TESTING_RUN_AUTHORIZATION_ALLOWED_SUITE
#define	TESTING_RUN_AUTHORIZATION_DISALLOWED_SUITE
#define	TESTING_RUN_AUTHORIZATION_CHALLENGE_SUITE
#define	TESTING_RUN_CONFIG_RESET_SUITE
#define	TESTING_RUN_CMD_AUTHORIZATION_SUITE
#define	TESTING_RUN_RECOVERY_IMAGE_SUITE
#define	TESTING_RUN_RECOVERY_IMAGE_OBSERVER_PCR_SUITE
#define	TESTING_RUN_RECOVERY_IMAGE_MANAGER_SUITE
#define	TESTING_RUN_PCD_MANAGER_SUITE
#define	TESTING_RUN_PCD_MANAGER_FLASH_SUITE
#define	TESTING_RUN_PCD_OBSERVER_PCR_SUITE
#define	TESTING_RUN_PCD_FLASH_SUITE
#define	TESTING_RUN_MCTP_INTERFACE_CONTROL_SUITE
#define	TESTING_RUN_HOST_PROCESSOR_OBSERVER_PCR_SUITE
#define	TESTING_RUN_COUNTER_MANAGER_REGISTERS_SUITE
#define	TESTING_RUN_SESSION_MANAGER_ECC_SUITE
#define	TESTING_RUN_BASE64_THREAD_SAFE_SUITE
#define	TESTING_RUN_ECC_THREAD_SAFE_SUITE
#define	TESTING_RUN_HASH_THREAD_SAFE_SUITE
#define	TESTING_RUN_RNG_THREAD_SAFE_SUITE
#define	TESTING_RUN_RSA_THREAD_SAFE_SUITE
#define	TESTING_RUN_X509_THREAD_SAFE_SUITE
#define	TESTING_RUN_FLASH_STORE_SUITE
#define	TESTING_RUN_FLASH_STORE_ENCRYPTED_SUITE
#define	TESTING_RUN_KDF_SUITE

/* Platform-specific test suites. */
#define	TESTING_RUN_HASH_OPENSSL_SUITE
#define	TESTING_RUN_RSA_OPENSSL_SUITE
#define	TESTING_RUN_ECC_OPENSSL_SUITE
#define	TESTING_RUN_X509_OPENSSL_SUITE
#define	TESTING_RUN_AES_OPENSSL_SUITE
#define	TESTING_RUN_BASE64_OPENSSL_SUITE
#define	TESTING_RUN_RNG_OPENSSL_SUITE


#include "testing/linux_all_tests.h"

void add_all_platform_tests (CuSuite *suite)
{
	add_all_linux_tests (suite);
}


#endif /* PLATFORM_ALL_TESTS_H_ */
