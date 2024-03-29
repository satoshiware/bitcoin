/* Description:
		Back to just good ol' bitcoin.
*/

#ifndef BITCOIN_MICROS_MICRO_BITCOIN_H
#define BITCOIN_MICROS_MICRO_BITCOIN_H

//#define MICROCURRENCY           "bitcoin" // Leave undefined for bitcoin!
#define BECH32HRP           "bc"

#define BLOCKREWARD         50          // Bitcoin's Block Reward = 50. Note: to run tests, it must be 50!
#define MAXSUPPLY           21000000    // Bitcoin's Max Supply = 21000000

#define HALVINGINTERVAL		210000      // Bitcoin's Subsidy Halving Interval = 210000

#define TIMESTAMP           "The Times 03/Jan/2009 Chancellor on brink of second bailout for banks"
#define PUBKEYSCRIPT		"04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f"
#define TIME                1231006505
#define DBITS               0x1d00ffff
#define NONCE               2083236893

#define MERKLEHASH          "0x4a5e1e4baab89f3a32518a88c31bc87f618f76673e2cc77ab2127b7afdeda33b"
#define GENESISHASH         "0x000000000019d6689c085ae165831e934ff763ae46a2a6c172b3f1b60a8ce26f"

// Magic bytes used to identify the communications within this microcurrency community.
#define PCHMESSAGESTART0    0xf9
#define PCHMESSAGESTART1    0xbe
#define PCHMESSAGESTART2    0xb4
#define PCHMESSAGESTART3    0xd9
		
// Common to all micros
#define MAXBLOCKSIZE		4000000    // Bitcoin's Max Block Size = 4000000
#define MAXSTANDARDTXWEIGHT 400000

#endif // BITCOIN_MICROS_MICRO_BITCOIN_H
