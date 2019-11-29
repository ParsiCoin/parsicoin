// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero project
// Copyright (c) 2014-2018, The Forknote developers
// Copyright (c) 2018, Ryo Currency Project
// Copyright (c) 2016-2018, The Karbowanec developers
// Copyright (c) 2018-2019, The ParsiCoin developers
//
// This file is part of Karbo.
//
// Karbo is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Karbo is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Karbo.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdint>

namespace CryptoNote {
namespace parameters {

const uint64_t DIFFICULTY_TARGET                             = 120; // seconds
const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0x90004; // addresses start with "PARS"
const size_t   CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 10;
const size_t   CRYPTONOTE_TX_SPENDABLE_AGE                   = 6;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = DIFFICULTY_TARGET * 7;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT_V1         = DIFFICULTY_TARGET * 3;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW_V1          = 11;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                  = UINT64_C(15000000000000000000);
const uint64_t COIN                                          = UINT64_C(1000000000000);
const uint64_t TAIL_EMISSION_REWARD                          = UINT64_C(1000000000000);
const size_t CRYPTONOTE_COIN_VERSION                         = 1;
const unsigned EMISSION_SPEED_FACTOR                         = 19;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 1000000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 1000000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 100000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 12;

const uint64_t MINIMUM_FEE_V1                                = UINT64_C(100000000);
const uint64_t MINIMUM_FEE_V2                                = UINT64_C(1000000000);
const uint32_t MINIMUM_FEE_V2_HEIGHT                         = 100000000;
const uint64_t MINIMUM_FEE                                   = MINIMUM_FEE_V2;
const uint64_t MAXIMUM_FEE                                   = UINT64_C(100000000000);

const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(100000000);
const uint64_t MIN_TX_MIXIN_SIZE                             = 2;
const uint64_t MAX_TX_MIXIN_SIZE_V1                          = 30;
const uint64_t MAX_TX_MIXIN_SIZE_V2                          = 40;
const uint64_t MAX_TX_MIXIN_SIZE                             = MAX_TX_MIXIN_SIZE_V1;
const uint32_t MIN_TX_MIXIN_V1_HEIGHT                        = 100000000;
const uint32_t MIN_TX_MIXIN_V2_HEIGHT                        = 100000000;
const uint64_t MAX_TRANSACTION_SIZE_LIMIT                    = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT / 4 - CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE;

const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks
const size_t   DIFFICULTY_WINDOW_V2                          = 17;  // blocks
const size_t   DIFFICULTY_WINDOW_V3                          = 60;  // blocks
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_LAG                                = 15;  // !!!
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const uint64_t POISSON_CHECK_TRIGGER = 10; // Reorg size that triggers poisson timestamp check
const uint64_t POISSON_CHECK_DEPTH = 60;   // Main-chain depth of the poisson check. The attacker will have to tamper 50% of those blocks
const double POISSON_LOG_P_REJECT = -75.0; // Reject reorg if the probablity that the timestamps are genuine is below e^x, -75 = 10^-33

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 1000000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1 * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t UPGRADE_HEIGHT_V2                             = 1;
const uint32_t UPGRADE_HEIGHT_V3                             = 2;
const uint32_t UPGRADE_HEIGHT_V4                             = 100000000;
const uint32_t UPGRADE_HEIGHT_LWMA3                          = 100000000;
const uint32_t UPGRADE_HEIGHT_V5                             = 100000000;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 90; // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "parsblocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "parsblockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "parsblockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "parspoolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "parsp2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "parsblockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "parsminer_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "parsicoin";
const char     GENESIS_COINBASE_TX_HEX[]                     = "010a01ff000180b0def7d32b029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd0880712101b9adb0201fc3edba8aff318ea742d500af27134c23e5dc7882ed700c062aea7d";
const char     DNS_CHECKPOINTS_URL[]                        = "checkpoints.parsicoin.net";

const uint8_t  CURRENT_TRANSACTION_VERSION                   =  1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MAJOR_VERSION_4                         =  4;
const uint8_t  BLOCK_MAJOR_VERSION_5                         =  5;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  128;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  17240;
const int      RPC_DEFAULT_PORT                              =  18240;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 64 * 1024 * 1024; // 64 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const uint32_t P2P_FAILED_ADDR_FORGET_SECONDS                = (60 * 60);     //1 hour
const uint32_t P2P_IP_BLOCKTIME                              = (60 * 60 * 24);//24 hour
const uint32_t P2P_IP_FAILS_BEFORE_BLOCK                     = 10;
const uint32_t P2P_IDLE_CONNECTION_KILL_INTERVAL             = (5 * 60);      //5 minutes

const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "8f80f9a5a434a9f1510d12436238debfee9c918ce605efe225d8c94d045fa115";

const char* const SEED_NODES[] = {
  "parsicoin.net:17240",
  "explorer.parsicoin.net:17240",
  "node.parsicoin.net:17240",
  "eu.parsicoin.net:17240",
  "us.parsicoin.net:17240",
  "ir.parsicoin.net:17240",
  "91.92.128.210:17240",
  "91.92.128.198:17240",
  "185.203.116.107:17240",
  "185.105.186.102:17240",
  "parsira6m254ek3u.onion:17240"
};

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {1,	"b46fc8d77728e4e0092962864561c5cd1cd5eafba60cb2ef025e5ada4eb66faa" },
  {2,	"86dded9420cc94037fffa40205bc1e939994c9f77deba40212b417823a57ff27" },
  {3,	"90e8374d29bc23be19ee69cf5b97dc9551a5d5d8385de6a6443e196c102937d2" },
  {10,	"15d2d574f2b037bce7dfb0e995ade99f2e618399c42a7acf7326b511377db1e4" },
  {100,	"2b8cf73215920ce9e8ac6f0fe0106ccb39451e9423da055216e97fd6781003f8" },
  {1000,	"8975877f6ab04ba985ef73fba5045cade3d6d437e29a6771b1da10f57b4b2aca" },
  {10000,	"48fd53db9bb4885fd530072528e582f7ae652b1cd62e66c57c47ac79d5ec738c" },
  {20000,	"0a9908210b03805da6b60c456692b5c8a42382fbef2e2fa8eea317d0bb0aad6c" },
  {40000,	"8ef378217b20e0570e3457be275c7600b82a8de52f73d2f8970c338ece869829" },
  {60000,	"dc8a14fc8b039285dedbca628699608fb0bdbe1a8e3637a642005167308765ce" },
  {80000,	"a9dd56361bb8e39f26005107ca022230e06a406ad30fea6bc5b0b3e9faaeb0b3" },
  {100000,	"fc12c3739f0973db5c0fcba1b9ab571c1a5f800cc64cf4c6a4d7ce42ed1a2bae" },
  {120000,	"5bce75f54e6476656be4b2b464f522dc3da74268b0424d09781440e0dec7377a" },
  {140000,	"53c60942745dd0ec3b3e6bf87c590b59cb2b25563d087c6059221ccc009112a8" },
  {160000,	"6748164611467020450672d704377a75bbe50c9b4227efbd31cc80d238fb128d" },
};

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS
