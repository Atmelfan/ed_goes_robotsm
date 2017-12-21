/**
 * Advanced/Atrocius Serial Peripheral Interface
 * 
 */

#ifndef ASPI_PROTOCOL
#define ASPI_PROTOCOL



/**
 * ASPI Header
 *
 * Bit 7: ~D/C
 * Bit 6: ~R/W
 * Bit 5-0: Address, 0-63
 */

/*True if header has ~D/C = 1*/
#define ASPI_HEADER_CHAIN(header) ((header) & 0x80) 
/*True if header has ~R/W = 1*/
#define ASPI_HEADER_WRITE(header) ((header) & 0x40)
/*Extracts address from header*/
#define ASPI_HEADER_ADDRESS(header) (((header)) & 0x3F)



/** !!! IMPLEMENT THESE !!! **/

/**
 * Called when a ASPI header has been recieved
 * Should return 1 if address matches or 0 to ignore.
 */
extern uint8_t aspi_begin(uint8_t header);

/**
 * Called during data transfer, 
 * Arguments:
 *  rx, recieved byte
 *  i, number of bytes to be transferred (0-63 in daisy mode, 255 in direct mode)
 * Returns: byte to be sent next
 */
extern uint8_t aspi_txrx(uint8_t rx, uint8_t i);

/**
 * Called once the transfer has ended
 */
extern void aspi_end();


typedef enum {
	ASPI_IDLE = 0,	/*No active transfer*/
	ASPI_DIRECT,	/*Currently in direct mode communication*/
	ASPI_CHAIN,		/*Currently in chain mode communication*/
	ASPI_UNKNOWN	/*Uknown state / error*/
} aspi_status;


/**  ASPI API functions **/
void aspi_init();

aspi_status aspi_get_status();


uint8_t aspi_get_offset();
void aspi_set_offset(uint8_t offs);

#endif


