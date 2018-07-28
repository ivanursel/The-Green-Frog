//
//  Copyright 2016-2018 Ivo J. L. A. Van Ursel
//
//  v0.9a - 27/07/2018 8:34:06
//

#define   debug
#define   KNRM              "\x1b[0m"
#define   KRED              "\x1b[31m"
#define   KGRN              "\x1b[32m"
#define   KYEL              "\x1b[33m"
#define   KBLU              "\x1b[34m"
#define   KMAG              "\x1b[35m"
#define   KCYN              "\x1b[36m"
#define   KWHT              "\x1b[37m"
#define   NONE              "\033[0m"
#define   SEALED            0x3
#define   UNSEALED          0x2
#define   FULL_ACCESS       0x1

#define PI_INIT_FAILED      -1   // gpioInitialise failed
#define PI_BAD_USER_GPIO    -2   // GPIO not 0-31
#define PI_BAD_GPIO         -3   // GPIO not 0-53
#define PI_BAD_MODE         -4   // mode not 0-7
#define PI_BAD_LEVEL        -5   // level not 0-1
#define PI_BAD_PUD          -6   // pud not 0-2
#define PI_BAD_PULSEWIDTH   -7   // pulsewidth not 0 or 500-2500
#define PI_BAD_DUTYCYCLE    -8   // dutycycle outside set range
#define PI_BAD_TIMER        -9   // timer not 0-9
#define PI_BAD_MS           -10  // ms not 10-60000
#define PI_BAD_TIMETYPE     -11  // timetype not 0-1
#define PI_BAD_SECONDS      -12  // seconds < 0
#define PI_BAD_MICROS       -13  // micros not 0-999999
#define PI_TIMER_FAILED     -14  // gpioSetTimerFunc failed
#define PI_BAD_WDOG_TIMEOUT -15  // timeout not 0-60000
#define PI_NO_ALERT_FUNC    -16  // DEPRECATED
#define PI_BAD_CLK_PERIPH   -17  // clock peripheral not 0-1
#define PI_BAD_CLK_SOURCE   -18  // DEPRECATED
#define PI_BAD_CLK_MICROS   -19  // clock micros not 1, 2, 4, 5, 8, or 10
#define PI_BAD_BUF_MILLIS   -20  // buf millis not 100-10000
#define PI_BAD_DUTYRANGE    -21  // dutycycle range not 25-40000
#define PI_BAD_DUTY_RANGE   -21  // DEPRECATED (use PI_BAD_DUTYRANGE)
#define PI_BAD_SIGNUM       -22  // signum not 0-63
#define PI_BAD_PATHNAME     -23  // can't open pathname
#define PI_NO_HANDLE        -24  // no handle available
#define PI_BAD_HANDLE       -25  // unknown handle
#define PI_BAD_IF_FLAGS     -26  // ifFlags > 3
#define PI_BAD_CHANNEL      -27  // DMA channel not 0-14
#define PI_BAD_PRIM_CHANNEL -27  // DMA primary channel not 0-14
#define PI_BAD_SOCKET_PORT  -28  // socket port not 1024-", (data[3] & 0x20 > 0);00
#define PI_BAD_FIFO_COMMAND -29  // unrecognized fifo command
#define PI_BAD_SECO_CHANNEL -30  // DMA secondary channel not 0-6
#define PI_NOT_INITIALISED  -31  // function called before gpioInitialise
#define PI_INITIALISED      -32  // function called after gpioInitialise
#define PI_BAD_WAVE_MODE    -33  // waveform mode not 0-3
#define PI_BAD_CFG_INTERNAL -34  // bad parameter in gpioCfgInternals call
#define PI_BAD_WAVE_BAUD    -35  // baud rate not 50-250K(RX)/50-1M(TX)
#define PI_TOO_MANY_PULSES  -36  // waveform has too many pulses
#define PI_TOO_MANY_CHARS   -37  // waveform has too many chars
#define PI_NOT_SERIAL_GPIO  -38  // no bit bang serial read on GPIO
#define PI_BAD_SERIAL_STRUC -39  // bad (null) serial structure parameter
#define PI_BAD_SERIAL_BUF   -40  // bad (null) serial buf parameter
#define PI_NOT_PERMITTED    -41  // GPIO operation not permitted
#define PI_SOME_PERMITTED   -42  // one or more GPIO not permitted
#define PI_BAD_WVSC_COMMND  -43  // bad WVSC subcommand
#define PI_BAD_WVSM_COMMND  -44  // bad WVSM subcommand
#define PI_BAD_WVSP_COMMND  -45  // bad WVSP subcommand
#define PI_BAD_PULSELEN     -46  // trigger pulse length not 1-100
#define PI_BAD_SCRIPT       -47  // invalid script
#define PI_BAD_SCRIPT_ID    -48  // unknown script id
#define PI_BAD_SER_OFFSET   -49  // add serial data offset > 30 minutes
#define PI_GPIO_IN_USE      -50  // GPIO already in use
#define PI_BAD_SERIAL_COUNT -51  // must read at least a byte at a time
#define PI_BAD_PARAM_NUM    -52  // script parameter id not 0-9
#define PI_DUP_TAG          -53  // script has duplicate tag
#define PI_TOO_MANY_TAGS    -54  // script has too many tags
#define PI_BAD_SCRIPT_CMD   -55  // illegal script command
#define PI_BAD_VAR_NUM      -56  // script variable id not 0-149
#define PI_NO_SCRIPT_ROOM   -57  // no more room for scripts
#define PI_NO_MEMORY        -58  // can't allocate temporary memory
#define PI_SOCK_READ_FAILED -59  // socket read failed
#define PI_SOCK_WRIT_FAILED -60  // socket write failed
#define PI_TOO_MANY_PARAM   -61  // too many script parameters (> 10)
#define PI_NOT_HALTED       -62  // DEPRECATED
#define PI_SCRIPT_NOT_READY -62  // script initialising
#define PI_BAD_TAG          -63  // script has unresolved tag
#define PI_BAD_MICS_DELAY   -64  // bad MICS delay (too large)
#define PI_BAD_MILS_DELAY   -65  // bad MILS delay (too large)
#define PI_BAD_WAVE_ID      -66  // non existent wave id
#define PI_TOO_MANY_CBS     -67  // No more CBs for waveform
#define PI_TOO_MANY_OOL     -68  // No more OOL for waveform
#define PI_EMPTY_WAVEFORM   -69  // attempt to create an empty waveform
#define PI_NO_WAVEFORM_ID   -70  // no more waveforms
#define PI_I2C_OPEN_FAILED  -71  // can't open I2C device
#define PI_SER_OPEN_FAILED  -72  // can't open serial device
#define PI_SPI_OPEN_FAILED  -73  // can't open SPI device
#define PI_BAD_I2C_BUS      -74  // bad I2C bus
#define PI_BAD_I2C_ADDR     -75  // bad I2C address
#define PI_BAD_SPI_CHANNEL  -76  // bad SPI channel
#define PI_BAD_FLAGS        -77  // bad i2c/spi/ser open flags
#define PI_BAD_SPI_SPEED    -78  // bad SPI speed
#define PI_BAD_SER_DEVICE   -79  // bad serial device name
#define PI_BAD_SER_SPEED    -80  // bad serial baud rate
#define PI_BAD_PARAM        -81  // bad i2c/spi/ser parameter
#define PI_I2C_WRITE_FAILED -82  // i2c write failed
#define PI_I2C_READ_FAILED  -83  // i2c read failed
#define PI_BAD_SPI_COUNT    -84  // bad SPI count
#define PI_SER_WRITE_FAILED -85  // ser write failed
#define PI_SER_READ_FAILED  -86  // ser read failed
#define PI_SER_READ_NO_DATA -87  // ser read no data available
#define PI_UNKNOWN_COMMAND  -88  // unknown command
#define PI_SPI_XFER_FAILED  -89  // spi xfer/read/write failed
#define PI_BAD_POINTER      -90  // bad (NULL) pointer
#define PI_NO_AUX_SPI       -91  // no auxiliary SPI on Pi A or B
#define PI_NOT_PWM_GPIO     -92  // GPIO is not in use for PWM
#define PI_NOT_SERVO_GPIO   -93  // GPIO is not in use for servo pulses
#define PI_NOT_HCLK_GPIO    -94  // GPIO has no hardware clock
#define PI_NOT_HPWM_GPIO    -95  // GPIO has no hardware PWM
#define PI_BAD_HPWM_FREQ    -96  // hardware PWM frequency not 1-125M
#define PI_BAD_HPWM_DUTY    -97  // hardware PWM dutycycle not 0-1M
#define PI_BAD_HCLK_FREQ    -98  // hardware clock frequency not 4689-250M
#define PI_BAD_HCLK_PASS    -99  // need password to use hardware clock 1
#define PI_HPWM_ILLEGAL     -100 // illegal, PWM in use for main clock
#define PI_BAD_DATABITS     -101 // serial data bits not 1-32
#define PI_BAD_STOPBITS     -102 // serial (half) stop bits not 2-8
#define PI_MSG_TOOBIG       -103 // socket/pipe message too big
#define PI_BAD_MALLOC_MODE  -104 // bad memory allocation mode
#define PI_TOO_MANY_SEGS    -105 // too many I2C transaction segments
#define PI_BAD_I2C_SEG      -106 // an I2C transaction segment failed
#define PI_BAD_SMBUS_CMD    -107 // SMBus command not supported by driver
#define PI_NOT_I2C_GPIO     -108 // no bit bang I2C in progress on GPIO
#define PI_BAD_I2C_WLEN     -109 // bad I2C write length
#define PI_BAD_I2C_RLEN     -110 // bad I2C read length
#define PI_BAD_I2C_CMD      -111 // bad I2C command
#define PI_BAD_I2C_BAUD     -112 // bad I2C baud rate, not 50-500k
#define PI_CHAIN_LOOP_CNT   -113 // bad chain loop count
#define PI_BAD_CHAIN_LOOP   -114 // empty chain loop
#define PI_CHAIN_COUNTER    -115 // too many chain counters
#define PI_BAD_CHAIN_CMD    -116 // bad chain command
#define PI_BAD_CHAIN_DELAY  -117 // bad chain delay micros
#define PI_CHAIN_NESTING    -118 // chain counters nested too deeply
#define PI_CHAIN_TOO_BIG    -119 // chain is too long
#define PI_DEPRECATED       -120 // deprecated function removed
#define PI_BAD_SER_INVERT   -121 // bit bang serial invert not 0 or 1
#define PI_BAD_EDGE         -122 // bad ISR edge value, not 0-2
#define PI_BAD_ISR_INIT     -123 // bad ISR initialisation
#define PI_BAD_FOREVER      -124 // loop forever must be last command
#define PI_BAD_FILTER       -125 // bad filter parameter
#define PI_BAD_PAD          -126 // bad pad number
#define PI_BAD_STRENGTH     -127 // bad pad drive strength
#define PI_FIL_OPEN_FAILED  -128 // file open failed
#define PI_BAD_FILE_MODE    -129 // bad file mode
#define PI_BAD_FILE_FLAG    -130 // bad file flag
#define PI_BAD_FILE_READ    -131 // bad file read
#define PI_BAD_FILE_WRITE   -132 // bad file write
#define PI_FILE_NOT_ROPEN   -133 // file not open for read
#define PI_FILE_NOT_WOPEN   -134 // file not open for write
#define PI_BAD_FILE_SEEK    -135 // bad file seek
#define PI_NO_FILE_MATCH    -136 // no files match pattern
#define PI_NO_FILE_ACCESS   -137 // no permission to access file
#define PI_FILE_IS_A_DIR    -138 // file is a directory
#define PI_BAD_SHELL_STATUS -139 // bad shell return status
#define PI_BAD_SCRIPT_NAME  -140 // bad script name
#define PI_BAD_SPI_BAUD     -141 // bad SPI baud rate, not 50-500k
#define PI_NOT_SPI_GPIO     -142 // no bit bang SPI in progress on GPIO

#define PI_PIGIF_ERR_0      -2000
#define PI_PIGIF_ERR_99     -2099

#define PI_CUSTOM_ERR_0     -3000
#define PI_CUSTOM_ERR_999   -3999

#include <stdio.h>
#include <unistd.h>
#include <pigpio.h>
#include <string.h>
#include <time.h>

char         data[40];            // global variables
int          i2cHandle;
int          numberofreads;
int          numberofwrites;
int          reads;
int          numberoffailedreads;
int          numberoffailedwrites;
int          sealed;
clock_t      start, end;
double       cpu_time_used;

/*
int Dump(int command, const int bytes_expected)
{
    signed int   err;
    signed int   count;

    err = -1;

    do {
        data[0] = command & 0xFF;
        data[1] = command >> 8;

        err = i2cWriteBlockData(i2cHandle, 0x44, data, 2);
        printf("write: %d\n", err);
        usleep(300000);
        numberofwrites = numberofwrites + 1;

        do {
    	    if (err != 0) {
                numberoffailedwrites = numberoffailedwrites + 1;
                printf("%sWRITE ERROR%s (command = 0x%02X)\n", KRED, NONE, command);
                break;
    	    }

    	    count = i2cReadI2CBlockData(i2cHandle, 0x44, data, bytes_expected);
    	    printf("read: %d, %d, %d\n", count, data[0], bytes_expected);
    	    usleep(300000);
    	    numberofreads = numberofreads + 1;
        }
//	while ((n < 1) || (n > 34));
        while (count != (bytes_expected + 3));

        reads = numberoffailedreads + 1;
        printf("%sREAD ERROR%s (command = 0x%02X)\n", KRED, NONE, command);
    }
    while (err != 0);

    return (count);
}
*/

int mac_read(int command, const int bytes_expected)
{
  int i, res;

  for (i = 2; i < 39; i++)              // clear data array
    data[i] = 0;

  data[0] = command;
  data[1] = 0;

  res = i2cWriteBlockData(i2cHandle, 0x44, data, 2);
  usleep(300000);
  if (res < 0) {
    printf(KRED"i2c write command failed\n"NONE);
    return 0;
  }

  for (i = 0; i < 39; i++)              // clear data array
    data[i] = 0;

  res = i2cReadI2CBlockData(i2cHandle, 0x44, data, bytes_expected + 3);

  if (res < 0) {
    printf("i2c read block failed\n");
    return 0;
  }

  if (data[0] != (bytes_expected + 2)) {
    printf(KRED"Number of bytes returned (%d) wrong (expected = %d)\n"NONE, data[0], bytes_expected + 2);
    return 0;
  }

  if (data[1] != command) {
    printf("Data returned does not include command\n");
    return 0;
  }

  return (data[0]);
}

void readWord(char *name, char *unit, const int reg, const int min, const int max, const int def)
{
  signed int res = 0;
  signed int i = -1;

  do {
    res = i2cReadWordData(i2cHandle, reg);
    usleep(300000);
    numberofreads = numberofreads + 1;
    i = i + 1;
  }
  while ((res == PI_I2C_READ_FAILED) || (res == PI_I2C_WRITE_FAILED) || (res == PI_BAD_HANDLE) || (res == PI_BAD_PARAM));

  numberoffailedreads = numberoffailedreads + i;

  if (i)
    printf("%sREAD ERROR%s (reg = 0x%02X)\n", KRED, NONE, reg);

  if (reg == 0x0A) {
    if ((res > 32767) && (res != 65535))
      res -= 65536;
  }

  if (strcmp(unit, "hex") == 0)
    printf("0x%04X %-60s: 0x%04X\n", reg, name, res);
    else if (strcmp(unit, "degC") == 0)
      printf("0x%04X %-60s: %0.1f °%s\n", reg, name, ((double)res / 10.0) - 273.0, unit);
    else
      printf("0x%04X %-60s: %d %s\n", reg, name, res, unit);
}

int main(int argc, char **argv)
{
    int     n;
    time_t  current_time;
    char*   c_time_string;

    start = clock();

    printf("\n*** Texas Instruments bq40z60 status tool v0.9a - 27/07/2018 8:34:24 ***\n\n");

    if (gpioInitialise() < 0) {
      printf("Failure: pigpio initialization failed\n");
      return -1;
    }
    else
    	printf("pigpio initialization OK\n");

    i2cHandle = i2cOpen(1, 0x10, 0);

    if (i2cHandle < 0) {
    	printf("Failure: i2c open failed\n");
    	gpioTerminate();
    	return -1;
    }
    else
    	printf("i2c open OK\n\n");

    numberofreads = 0;
    numberofwrites = 0;
    numberoffailedreads = 0;
    numberoffailedwrites = 0;

// Seal Device
//  n = mac_read(0x0030, 4);
//  usleep(300000);

//  Operation Status
//  n = mac_read(0x54, 4);
//  sealed = data[4] & 0b00000011;
//  printf("%d\n", sealed);
//  usleep(300000);

//  Security Keys
//  n = mac_read(0x35, 8);

//  printf("Key 1 = 0x%04X\n", data[3] + (data[4] << 8));    // 0x1991
//  printf("Key 2 = 0x%04X\n", data[5] + (data[6] << 8));    // 0x1609
//  printf("Key 3 = 0x%04X\n", data[7] + (data[8] << 8));    // 0x2014
//  printf("Key 4 = 0x%04X\n\n", data[9] + (data[10] << 8)); // 0x1310

//  while (i2cWriteWordData(i2cHandle, 0x00, 0x1991) < 0);
//  while (i2cWriteWordData(i2cHandle, 0x00, 0x1609) < 0);
//  while (i2cWriteWordData(i2cHandle, 0x00, 0x2014) < 0);
//  while (i2cWriteWordData(i2cHandle, 0x00, 0x1310) < 0);

//  14.1.1 ManufacturerAccess() 0x0000
//  A read word on this command returns the lowest 16 bits of the OperationStatus() data.
//  n = mac_read(0x0000, 2);
//  printf("0x0000 %-60s: 0x%02X\n", "xxxx", data[4] + (data[3] << 8));

//  14.1.2 ManufacturerAccess() 0x0001 Device Type
//  The bq40z50-R2 device can be checked for the IC part number. The IC part number returns on a
//  subsequent read on ManufacturerBlockAccess() or ManufacturerData() in the following format: aaAA,
//  where:
//  Value Description
//  AAaa Device Type
//  n = mac_read(0x0001, 2);
//  printf("0x0001 %-60s: 0x%04X\n", "Device Type", data[4] + (data[3] << 8));

//  14.1.3 ManufacturerAccess() 0x0002 Firmware Version
//  The bq40z50-R2 device can be checked for the firmware version of the IC. The firmware revision returns
//  on ManufacturerBlockAccess() or ManufacturerData() in the following format:
//  DDddVVvvBBbbTTZZzzRREE, where:
//  Value Description
//  DDdd Device Number
//  VVvv Version
//  BBbb Build Number
//  TT Firmware Type
//  ZZzz Impedance Track Version
//  RR Reserved
//  EE Reserved
//  n = mac_read(0x0002, 11);

//  printf("- [1:0]  %-58s: 0x%04x\n", "Device Number", data[4] + (data[3] << 8));
//  printf("- [3:2]  %-58s: 0x%04X\n", "Version", data[6] + (data[5] << 8));
//  printf("- [5:4]  %-58s: 0x%04X\n", "Build Number", data[8] + (data[7] << 8));
//  printf("- [6]    %-58s: 0x%02X\n", "Firmware Type", data[9]);
//  printf("- [8:7]  %-58s: 0x%04X\n", "Impedance Track Version", data[11] + (data[10] << 8));
//  printf("- [9]    %-58s: 0x%02X\n", "Reserved - Do not use", data[12]);
//  printf("- [10]   %-58s: 0x%02X\n", "Reserved - Do not use", data[13]);

//  14.1.4 ManufacturerAccess() 0x0003 Hardware Version
//  The bq40z50-R2 device can be checked for the hardware version of the IC. The hardware revision returns
//  on a subsequent read on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0003, 2);
//  printf("0x0003 %-60s: 0x%02X\n", "Hardware Version", data[4] + (data[3] << 8));

//  14.1.5 ManufacturerAccess() 0x0004 Instruction Flash Signature
//  The bq40z50-R2 device can return the instruction flash signature. The IF signature returns on a
//  subsequent read on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0004, 2);
//  printf("0x0004 %-60s: 0x%02X\n", "Instruction Flash Signature", data[4] + (data[3] << 8));

//  14.1.6 ManufacturerAccess() 0x0005 Static DF Signature
//  The bq40z50-R2 device can return the data flash checksum. The signature of all static DF returns on a
//  subsequent read on ManufacturerBlockAccess() or ManufacturerData(). MSB is set to 1 if the calculated
//  signature does not match the signature stored in DF.
//  n = mac_read(0x0005, 2);
//  printf("0x0005 %-60s: 0x%04X\n", "Static DF Signature", data[4] + (data[3] << 8));

//  14.1.7 ManufacturerAccess() 0x0006 Chemical ID
//  This command returns the chemical ID of the OCV tables used in the gauging algorithm. The chemical ID
//  returns on a subsequent read on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0006, 2);
//  printf("0x0006 %-60s: 0x%04X\n", "Chemical ID", data[4] + (data[3] << 8));

//  14.1.8 ManufacturerAccess() 0x0008 Static Chem DF Signature
//  The bq40z50-R2 device can return the data flash checksum. The signature of all static chemistry DF
//  returns on subsequent read on ManufacturerBlockAccess() or ManufacturerData(). MSB is set to 1 if the
//  calculated signature does not match the signature stored in DF.
//  n = mac_read(0x0008, 2);
//  printf("0x0008 %-60s: 0x%04X\n", "Static Chem DF Signature", data[4] + (data[3] << 8));

//  14.1.9 ManufacturerAccess() 0x0009 All DF Signature
//  The bq40z50-R2 device can return the data flash checksum. The signature of all DF parameters returns
//  on a subsequent read on ManufacturerBlockAccess() or ManufacturerData(). MSB is set to 1 if the
//  calculated signature does not match the signature stored in DF. It is expected that this signature will
//  change due to updates of lifetime, gauging, and other information.
//  n = mac_read(0x0009, 2);
//  printf("0x0009 %-60s: 0x%04X\n", "All DF Signature", data[4] + (data[3] << 8));

/* This is no-mans-land, keep out! */
/*  Wolfijzers en schietgeweren!   */

//  14.1.10 ManufacturerAccess() 0x0010 SHUTDOWN Mode
//  To reduce power consumption, the device can be sent to SHUTDOWN mode before shipping. After
//  sending this command, the OperationStatus()[SDM] = 1, an internal counter will start, and the CHG and
//  DSG FETs will be turned off when the counter reaches Ship FET Off Time. When the counter reaches
//  Ship Delay time, the device will enter SHUTDOWN mode if no charger present is detected.
//  If the device is SEALED, this feature requires the command to be sent twice in a row within 4 seconds (for
//  safety purposes). If the device is in UNSEALED or FULL ACCESS mode, sending the command the
//  second time will cancel the delay and enter shutdown immediately.
//  To wake up the device, a voltage > Charger Present Threshold must apply to the PACK pin. The
//  bq40z50-R2 device will power up and a full reset is applied.
//  n = mac_read(0x0010, 2);
//  printf("0x0010 %-60s: 0x%02X\n", "SHUTDOWN Mode", data[4] + (data[3] << 8));

//  14.1.11 ManufacturerAccess() 0x0011 SLEEP Mode
//  If the sleep conditions are met, the device can be sent to sleep with ManufacturerAccess().
//  Status Condition Action
//  Enable 0x0011 to ManufacturerAccess() OperationStatus()[SLEEPM] = 1
//  Activate
//  DA Configuration[NR] = 0 AND
//  OperationStatus()[PRES] = 0 AND
//  |Current()| < Power:Sleep Current
//  Turn off CHG FET, DSG FET, PCHG FET
//  The device goes to sleep.
//  The device wakes up every Power:Sleep Voltage Time period to measure voltage
//  and temperature.
//  The device wakes up every Power:Sleep Current Time period to measure current.
//  Status Condition Action
//  Activate DA Configuration[NR] = 1 AND
//  |Current()| < Power:Sleep Current
//  Turn off PCHG FET
//  Turn off CHG FET if DA Configuration[SLEEPCHG] = 0
//  The device goes to sleep.
//  The device wakes up every Power:Sleep Voltage Time period to measure voltage
//  and temperature.
//  The device wakes up every Power:Sleep Current Time period to measure current.
//  Exit DA Configuration[NR] = 0 AND
//  OperationStatus()[PRES] = 1
//  OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  Exit |Current()| > Configuration:Sleep Current OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  Exit Wake Comparator trips OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  Exit SafetyAlert() flag or PFAlert() flag set OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  n = mac_read(0x0011, 2);
//  printf("0x0011 %-60s: 0x%02X\n", "SLEEP Mode", data[4] + (data[3] << 8));

//  14.1.12 ManufacturerAccess() 0x0013 AutoCCOffset
//  This command manually starts an Auto CC Offset calibration. The calibration takes about 16 s.
//  This value is updated to CC Auto Offset, and is used for cell current measurement when the device is in
//  CHARGING or DISCHARGING state. This offset is not used during RELAX mode. The cell current
//  measurement is a current measurement taken simultaneously as the cell voltage measurement.
//  n = mac_read(0x0013, 2);
//  printf("0x0013 %-60s: 0x%02X\n", "AutoCCOfset", data[4] + (data[3] << 8));

//  14.1.13 ManufacturerAccess() 0x001D Fuse Toggle
//  This command manually activates/deactivates the FUSE output to ease testing during manufacturing. If
//  the OperationStatus()[FUSE] = 0 indicates the FUSE output is low. Sending this command toggles the
//  FUSE output to be high and the OperationStatus()[FUSE] = 1.
//  n = mac_read(0x001D, 2);
//  printf("0x001D %-60s: 0x%02X\n", "Fuse Toggle", data[4] + (data[3] << 8));

//  14.1.14 ManufacturerAccess() 0x001E PCHG FET Toggle
//  This command turns on/off the PCHG FET drive function to ease testing during manufacturing. If the
//  ManufacturingStatus()[PCHG_TEST] = 0, sending this command will turn on the PCHG FET and the
//  ManufacturingStatus()[PCHG_TEST] = 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus()[FET_EN] = 0, indicating an FW FET control is not active and manual control is
//  allowed. A reset clears the [PCHG_TEST] flag and turns off the PCHG FET.
//  n = mac_read(0x001E, 4);
//  printf("0x001E %-60s: 0x%08x\n", "PCHG FET Toggle", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.15 ManufacturerAccess() 0x001F CHG FET Toggle
//  This command turns on/off the CHG FET drive function to ease testing during manufacturing. If the
//  ManufacturingStatus()[CHG_TEST] = 0, sending this command turns on the CHG FET and the
//  ManufacturingStatus()[CHG_TEST] = 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus()[FET_EN] = 0, indicating an FW FET control is not active and manual control is
//  allowed. A reset clears the [CHG_TEST] flag and turns off the CHG FET.
//  n = mac_read(0x001F, 4);
//  printf("0x001F %-60s: 0x%08X\n", "CHG FET Toggle", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.16 ManufacturerAccess() 0x0020 DSG FET Toggle
//  This command turns on/off DSG FET drive function to ease testing during manufacturing. If the
//  ManufacturingStatus()[DSG_TEST] = 0, sending this command turns on the DSG FET and the
//  ManufacturingStatus()[DSG_TEST] = 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus()[FET_EN] = 0, indicating an FW FET control is not active and manual control is
//  allowed. A reset clears the [DSG_TEST] flag and turns off the DSG FET.
//  n = mac_read(0x0020, 4);
//  printf("0x0020 %-60s: 0x%08X\n", "DSG FET Toggle", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.17 ManufacturerAccess() 0x0021 Gauging
//  This command enables or disables the gauging function to ease testing during manufacturing. The initial
//  setting is loaded from Mfg Status Init[GAUGE_EN]. If the ManufacturingStatus()[GAUGE_EN] = 0,
//  sending this command will enable gauging and the ManufacturingStatus()[GAUGE_EN] = 1 and vice
//  versa. In UNSEALED mode, the ManufacturingStatus()[GAUGE_EN] status is copied to Mfg Status
//  Init[GAUGE_EN] when the command is received by the gauge. The bq40z50-R2 device remains on its
//  latest gauging status prior to a reset.
//  n = mac_read(0x0021, 4);
//  printf("0x0021 %-60s: 0x%08X\n", "Gauging", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.18 ManufacturerAccess() 0x0022 FET Control
//  This command disables/enables control of the CHG, DSG, and PCHG FET by the firmware. The initial
//  setting is loaded from Mfg Status Init[FET_EN]. If the ManufacturingStatus()[FET_EN] = 0, sending this
//  command allows the FW to control the PCHG, CHG, and DSG FETs and the
//  ManufacturingStatus()[FET_EN] = 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus()[FET_EN] status is copied to Mfg Status Init[FET_EN]
//  when the command is received by the gauge. The bq40z50-R2 device remains on its latest FET control
//  status prior to a reset.
//  n = mac_read(0x0022, 4);
//  printf("0x0022 %-60s: 0x%08X\n", "FET Control", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.19 ManufacturerAccess() 0x0023 Lifetime Data Collection
//  This command disables/enables Lifetime Data Collection to help streamline production testing. The initial
//  setting is loaded from Mfg Status Init[LF_EN]. If the ManufacturingStatus()[LF_EN] = 0, sending this
//  command starts the Lifetime Data Collection and the ManufacturingStatus()[LF_EN] = 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus()[LF_EN] status is copied to Mfg Status Init[LF_EN] when
//  the command is received by the gauge. The bq40z50-R2 device remains on its latest Lifetime Data
//  Collection setting prior to a reset.
//  n = mac_read(0x0023, 4);
//  printf("0x0023 %-60s: 0x%08X\n", "Lifetime Data Collection", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.20 ManufacturerAccess() 0x0024 Permanent Failure
//  This command disables/enables Permanent Failure to help streamline production testing.
//  The initial setting is loaded from Mfg Status Init[PF_EN]. If the ManufacturingStatus()[PF_EN] = 0,
//  sending this command enables Permanent Failure protections and the ManufacturingStatus()[PF_EN] = 1
//  and vice versa.
//  In UNSEALED mode, ManufacturingStatus()[PF_EN] status is copied to Mfg Status Init[PF_EN] when the
//  command is received by the gauge. The bq40z50-R2 device remains on its PF enable/disable setting prior
//  to a reset.
//  n = mac_read(0x0024, 4);
//  printf("0x0024 %-60s: 0x%08X\n", "Permanent Failure", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.21 ManufacturerAccess() 0x0025 Black Box Recorder
//  This command enables/disables Black Box Recorder function to help streamline production testing. The
//  initial setting is loaded from Mfg Status Init[BBR_EN]. If the ManufacturingStatus()[BBR_EN] = 0,
//  sending this command enables the Black Box Recorder and the ManufacturingStatus()[BBR_EN] = 1 and
//  vice versa.
//  In UNSEALED mode, the ManufacturingStatus()[BBR_EN] status is copied to Mfg Status Init[BBR_EN]
//  when the command is received by the gauge. The bq40z50-R2 device remains on its latest Black Box
//  Recorder enable/disable setting prior to a reset.
//  n = mac_read(0x0025, 4);
//  printf("0x0025 %-60s: 0x%08X\n", "Black Box Recorder", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.22 ManufacturerAccess() 0x0026 Fuse
//  This command disables/enables firmware-based fuse activation to ease testing during manufacturing. The
//  initial setting is loaded from Mfg Status Init[FUSE_EN]. If the ManufacturingStatus()[FUSE_EN] = 0,
//  sending this command allows the FW to control the FUSE output and the
//  ManufacturingStatus()[FUSE_EN] = 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus()[FUSE_EN] status is copied to Mfg Status
//  Init[FUSE_EN] when the command is received by the gauge. The bq40z50-R2 device remains on its
//  latest Fuse Control setting prior to a reset.
//  n = mac_read(0x0026, 4);
//  printf("0x0026 %-60s: 0x%08X\n", "Fuse", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.23 ManufacturerAccess() 0x0027 LED DISPLAY Enable
//  This command enables or disables the LED display function to ease testing during manufacturing. The
//  initial setting is loaded from Mfg Status Init[LED_EN]. If the ManufacturingStatus()[LED_EN] = 0, sending
//  this command will enable the LED display and the ManufacturingStatus()[LED_EN] = 1 and vice versa. In
//  UNSEALED mode, the ManufacturingStatus()[LED_EN] status is copied to Mfg Status Init[LED_EN]
//  when the command is received by the gauge. The bq40z50-R2 device remains on its latest setting prior to
//  a reset.
//  n = mac_read(0x0027, 4);
//  printf("0x0027 %-60s: 0x%08X\n", "LED DISPLAY Enable", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.24 ManufacturerAccess() 0x0028 Lifetime Data Reset
//  Sending this command resets Lifetime Data in data flash to help streamline production testing.
//  n = mac_read(0x0028, 4);
//  printf("0x0028 %-60s: 0x%08X\n", "Lifetime Data Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.25 ManufacturerAccess() 0x0029 Permanent Fail Data Reset
//  Sending this command resets PF data in data flash to help streamline production testing.
//  n = mac_read(0x0029, 4);
//  printf("0x0029 %-60s: 0x%08X\n", "Permanent Fail Data Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.26 ManufacturerAccess() 0x002A Black Box Recorder Reset
//  Sending this command resets the Black Box Recorder data in data flash to help streamline production
//  testing.
//  n = mac_read(0x002A, 4);
//  printf("0x002A %-60s: 0x%08X\n", "Black Box Recorder Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.27 ManufacturerAccess() 0x002B LED TOGGLE
//  This command toggles the LED display on or off to help streamline testing during manufacturing. When
//  the LED display is off, the OperationStatus()[LED] = 0. Sending this command turns on all LED displays
//  with OperationStatus()[LED] set to 1, and vice versa.
//  n = mac_read(0x002B, 4);
//  printf("0x002B %-60s: 0x%08X\n", "LED TOGGLE", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.28 ManufacturerAccess() 0x002C LED DISPLAY PRESS
//  This command simulates a low-high-low detection of the DISP pin, activating the LED display according to
//  the LED Support data flash setting. This command forces RSOC to 100% in order to demonstrate all
//  LEDs in use, the full speed, and the brightness.
//  n = mac_read(0x002C, 2);
//  printf("0x002C %-60s: 0x%02X\n", "LED DISPLAY PRESS", data[4] + (data[3] << 8));

//  14.1.29 ManufacturerAccess() 0x002D CALIBRATION Mode
//  This command disables/enables entry into CALIBRATION mode. Status is indicated by the
//  ManufacturingStatus()[CAL_EN] flag. CALIBRATION mode is disabled upon a reset.
//  Status Condition Action
//  Disable ManufacturingStatus()[CAL_EN] = 1 AND
//  0x002D to ManufacturerAccess()
//  ManufacturingStatus()[CAL_EN] = 0
//  Disable output of ADC and CC raw data on ManufacturingData()
//  Enable ManufacturingStatus()[CAL_EN] = 0 AND
//  0x002D to ManufacturerAccess()
//  ManufacturingStatus()[CAL_EN] = 1
//  Enable output of ADC and CC raw data on ManufacturingData(),
//  controllable with 0xF081 and 0xF082 on ManufacturerAccess()
//  n = mac_read(0x002D, 4);
//  printf("0x002D %-60s: 0x%08X\n", "CALIBRATION Mode", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.30 ManufacturerAccess() 0x002E Lifetime Data Flush
//  This command flushes the RAM Lifetime Data to data flash to help streamline evaluation testing.
//  n = mac_read(0x002E, 4);
//  printf("0x002E %-60s: 0x%08X\n", "Lifetime Data Flash", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.31 ManufacturerAccess() 0x002F Lifetime Data SPEED UP Mode
//  For ease of evaluation testing, this command enables a lifetime SPEED UP mode where every 1 s in real
//  time counts as 2 hours in FW time. When the lifetime SPEED UP mode is enabled, the
//  ManufacturingStatus()[LT_TEST] = 1.
//  The SPEED UP mode will be disabled if this command is sent again when [LT_TEST] = 1, the MAC
//  LifetimeDataReset() command is sent, the MAC SealDevice() command is sent, or the device is reset.
//  n = mac_read(0x002F, 4);
//  printf("0x002F %-60s: 0x%08X\n", "Lifetime Data SPEED UP Mode", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.32 ManufacturerAccess() 0x0030 Seal Device
//  This command seals the device for the field, disabling certain SBS commands and access to data flash.
//  See Table 14-1 and Chapter 14 for details.
//  When the device is sealed, the OperationStatus()[SEC1, SEC0] = 1,1. All the test features in
//  ManufacturingStatus() will also be disabled.
//  n = mac_read(0x0030, 4);
//  printf("0x0030 %-60s: 0x%08X\n", "Seal Device", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.33 ManufacturerAccess() 0x0035 Security Keys
//  This is a read/write command for 2-word UNSEAL and FULL ACCESS keys.
//  When reading the keys, data can be read from ManufacturerData() or ManufacturerBlockAccess(). The
//  keys are returned in the following format: aaAAbbBBccCCddDD, where:
//  Value Description
//  AAaa First word of the UNSEAL key
//  BBbb Second word of the UNSEAL key
//  CCcc First word of the FULL ACCESS key
//  DDdd Second word of the FULL ACCESS key
//  The default UNSEAL key is 0x0414 and 0x3672. The default FULL ACCESS key is 0xFFFF and 0xFFFF.
//  It is highly recommended to change the UNSEAL and FULL ACCESS keys from default.
//  The keys can only be changed through the ManufacturerBlockAccess().
//  Example: Change UNSEAL key to 0x1234, 0x5678, and leave the FULL ACCESS as default.
//  Send an SMBus block write with Command = 0x44.
//  Data = MAC command + New UNSEAL key + New FULL ACCESS KEY
//  = 35 00 34 12 78 56 FF FF FF FF
//  NOTE: The first word of the keys cannot be the same. That means an UNSEAL key with 0xABCD
//  0x1234 and FULL ACCESS key with 0xABCD 0x5678 are not valid because the first word is
//  the same.
//  This is because the first word is used as a “detection” for the right command. This also
//  means the first word cannot be the same as any existing MAC command.
//  n = mac_read(0x0035, 8);
//  printf("0x0035 %-60s: 0x%08X\n", "Security Keys", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- [1:0]  %-58s: 0x%04X\n", "First word of the UNSEAL key", data[4] + (data[3] << 8));
//  printf("- [3:2]  %-58s: 0x%04X\n", "Second word of the UNSEAL key", data[6] + (data[5] << 8));
//  printf("- [5:4]  %-58s: 0x%04X\n", "First word of the FULL ACCESS key", data[8] + (data[7] << 8));
//  printf("- [7:6]  %-58s: 0x%04X\n", "Second word of the FULL ACCESS key", data[9] + (data[8] << 8));

//  14.1.34 ManufacturerAccess() 0x0037 Authentication Key
//  This command enables the update of the authentication key into the device. The bq40z50-R2 device must
//  be in FULL ACCESS mode for the authentication key to update.
//  To update a new authentication key:
//  • Send the AuthenticationKey() + the new 128-bit authentication key to ManufacturerBlockAccess() OR
//  • Send the AuthenticationKey() to ManufacturerAccess(), then send the 128-bit authentication key to
//  Authentication().
//  There is no direct read access to the authentication key. After writing the new authentication to the gauge,
//  the gauge will generate an all-zero challenge and provide the corresponding response for verification.
//  To verify the new authentication key:
//  • Read the response from ManufacturerBlockAccess() after updating the new authentication key OR
//  • Read the response from Authentication() after updating the new authentication key.
//  n = mac_read(0x0037, 4);
//  printf("0x0037 %-60s: 0x%08X\n", "Authentication Key", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.35 ManufacturerAccess() 0x0041 Device Reset
//  This command resets the device.
//  NOTE: Command 0x0012 also resets the device (for backwards compatibility with the bq30zxy
//  device).
//  n = mac_read(0x0041, 4);
//  printf("0x0041 %-60s: 0x%08X\n", "Device Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

/* This is the end of no-mans land, keep out! */
/*        Wolfijzers en schietgeweren!        */

//  14.1.36 ManufacturerAccess() 0x0050 SafetyAlert
//  This command returns the SafetyAlert() flags on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0050, 4);
//  printf("0x0050 %-60s: 0x%08X\n", "SafetyAlert", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- RSVD       [31] %-49s: %d\n", "Reserved - Do not use
//  printf("- RSVD       [30] %-49s: %d\n", "Reserved - Do not use
//  printf("- OCDL       [29] %-49s: %d\n", "Overcurrent in Discharge
//  printf("- COVL       [28] %-49s: %d\n", "Cell Overvoltage
//  printf("- UTD        [27] %-49s: %d\n", "Undertemperature During Discharge
//  printf("- UTC        [26] %-49s: %d\n", "Undertemperature During Charge
//  printf("- PCHGC      [25] %-49s: %d\n", "Over-Precharge Current
//  printf("- CHGV       [24] %-49s: %d\n", "Overcharging Voltage
//  printf("- CHGC       [23] %-49s: %d\n", "Overcharging Current
//  printf("- OC         [22] %-49s: %d\n", "Overcharge
//  printf("- CTOS       [21] %-49s: %d\n", "Charge Timeout Suspend
//  printf("- CTO        [20] %-49s: %d\n", "Charge Timeout
//  printf("- PTOS       [19] %-49s: %d\n", "Precharge Timeout Suspend
//  printf("- PTO        [18] %-49s: %d\n", "Precharge Timeout
//  printf("- RSVD       [17] %-49s: %d\n", "Reserved. Do not use
//  printf("- OTF        [16] %-49s: %d\n", "Overtemperature FET
//  printf("- RSVD       [15] %-49s: %d\n", "Reserved. Do not use
//  printf("- CUVC       [14] %-49s: %d\n", "Cell Undervoltage Compensated
//  printf("- OTD        [13] %-49s: %d\n", "Overtemperature During Discharge
//  printf("- OTC        [12] %-49s: %d\n", "Overtemperature During Charge
//  printf("- ASCDL      [11] %-49s: %d\n", "Short-Circuit During Discharge Latch
//  printf("- RSVD       [10] %-49s: %d\n", "Reserved. Do not use
//  printf("- ASCCL      [9]  %-49s: %d\n", "Short-Circuit During Charge Latch
//  printf("- RSVD       [8]  %-49s: %d\n", "Reserved. Do not use
//  printf("- AOLDL      [7]  %-49s: %d\n", "Overload During Discharge Latch
//  printf("- RSVD       [6]  %-49s: %d\n", "Reserved. Do not use
//  printf("- OCD2       [5]  %-49s: %d\n", "Overcurrent During Discharge 2
//  printf("- OCD1       [4]  %-49s: %d\n", "Overcurrent During Discharge 1
//  printf("- OCC2       [3]  %-49s: %d\n", "Overcurrent During Charge 2
//  printf("- OCC1       [2]  %-49s: %d\n", "Overcurrent During Charge 1
//  printf("- COV        [1]  %-49s: %d\n", "Cell Overvoltage
//  printf("- CUV        [0]  %-49s: %d\n", "Cell Undervoltage

//  14.1.37 ManufacturerAccess() 0x0051 SafetyStatus
//  This command returns the SafetyStatus() flags on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0051, 4);
//  printf("0x0051 %-60s: 0x%08X\n", "SafetyStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- RSVD       [31] %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [30] %-49s: %d\n", "Reserved. Do not use.
//  printf("- OCDL       [29] %-49s: %d\n", "Overcurrent in Discharge
//  printf("- COVL       [28] %-49s: %d\n", "Cell Overvoltage
//  printf("- UTD        [27] %-49s: %d\n", "Undertemperature During Discharge
//  printf("- UTC        [26] %-49s: %d\n", "Undertemperature During Charge
//  printf("- PCHGC      [25] %-49s: %d\n", "Over-Precharge Current
//  printf("- CHGV       [24] %-49s: %d\n", "Overcharging Voltage
//  printf("- CHGC       [23] %-49s: %d\n", "Overcharging Current
//  printf("- OC         [22] %-49s: %d\n", "Overcharge
//  printf("- RSVD       [21] %-49s: %d\n", "Reserved. Do not use.
//  printf("- CTO        [20] %-49s: %d\n", "Charge Timeout
//  printf("- RSVD       [19] %-49s: %d\n", "Reserved. Do not use.
//  printf("- PTO        [18] %-49s: %d\n", "Precharge Timeout
//  printf("- RSVD       [17] %-49s: %d\n", "Reserved. Do not use.
//  printf("- OTF        [16] %-49s: %d\n", "Overtemperature FET
//  printf("- RSVD       [15] %-49s: %d\n", "Reserved. Do not use.
//  printf("- CUVC       [14] %-49s: %d\n", "Cell Undervoltage Compensated
//  printf("- OTD        [13] %-49s: %d\n", "Overtemperature During Discharge
//  printf("- OTC        [12] %-49s: %d\n", "Overtemperature During Charge
//  printf("- ASCDL      [11] %-49s: %d\n", "Short-circuit During Discharge Latch
//  printf("- ASCD       [10] %-49s: %d\n", "Short-circuit During Discharge
//  printf("- ASCCL      [9]  %-49s: %d\n", "Short-circuit During Charge Latch
//  printf("- ASCC       [8]  %-49s: %d\n", "Short-circuit During Charge
//  printf("- AOLDL      [7]  %-49s: %d\n", "Overload During Discharge Latch
//  printf("- AOLD       [6]  %-49s: %d\n", "Overload During Discharge
//  printf("- OCD2       [5]  %-49s: %d\n", "Overcurrent During Discharge 2
//  printf("- OCD1       [4]  %-49s: %d\n", "Overcurrent During Discharge 1
//  printf("- OCC2       [3]  %-49s: %d\n", "Overcurrent During Charge 2
//  printf("- OCC1       [2]  %-49s: %d\n", "Overcurrent During Charge 1
//  printf("- COV        [1]  %-49s: %d\n", "Cell Overvoltage
//  printf("- CUV        [0]  %-49s: %d\n", "Cell Undervoltage

//  14.1.38 ManufacturerAccess() 0x0052 PFAlert
//  This command returns the PFAlert() flags on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0052, 4);
//  printf("0x0052 %-60s: 0x%08X\n", "PFAlert", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- TS4        [31]  %-49s: %d\n", " Open Thermistor–TS4 Failure
//  printf("- TS3        [30]  %-49s: %d\n", "Open Thermistor–TS3 Failure
//  printf("- TS2        [29]  %-49s: %d\n", "Open Thermistor–TS2 Failure
//  printf("- TS1        [28]  %-49s: %d\n", "Open Thermistor–TS1 Failure
//  printf("- RSVD       [27]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [26]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [25]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [24]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [23]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- 2LVL       [22]  %-49s: %d\n", "Second Level Protector Failure
//  printf("- AFEC       [21]  %-49s: %d\n", "AFE Communication Failure
//  printf("- AFER       [20]  %-49s: %d\n", "AFE Register Failure
//  printf("- FUSE       [19]  %-49s: %d\n", "Chemical Fuse Failure
//  printf("- OCDL       [18]  %-49s: %d\n", "Overcurrent in Discharge
//  printf("- DFETF      [17]  %-49s: %d\n", "Discharge FET Failure
//  printf("- CFETF      [16]  %-49s: %d\n", "Charge FET Failure
//  printf("- ASCDL      [15]  %-49s: %d\n", "Short Circuit in Discharge
//  printf("- ASCCL      [14]  %-49s: %d\n", "Short Circuit in Charge
//  printf("- AOLDL      [13]  %-49s: %d\n", "Overload in Discharge
//  printf("- VIMA       [12]  %-49s: %d\n", "Voltage Imbalance While Pack Is Active Failure
//  printf("- VIMR       [11]  %-49s: %d\n", "Voltage Imbalance While Pack Is At Rest Failure
//  printf("- CD         [10]  %-49s: %d\n", "Capacity Degradation Failure
//  printf("- IMP        [9]   %-49s: %d\n", "Impedance Failure
//  printf("- CB         [8]   %-49s: %d\n", "Cell Balancing Failure
//  printf("- QIM        [7]   %-49s: %d\n", "QMax Imbalance Failure
//  printf("- SOTF       [6]   %-49s: %d\n", "Safety Overtemperature FET Failure
//  printf("- COVL       [5]   %-49s: %d\n", "Cell Overvoltage
//  printf("- SOT        [4]   %-49s: %d\n", "Safety Overtemperature Cell Failure
//  printf("- SOCD       [3]   %-49s: %d\n", "Safety Overcurrent in Discharge
//  printf("- SOCC       [2]   %-49s: %d\n", "Safety Overcurrent in Charge
//  printf("- SOV        [1]   %-49s: %d\n", "Safety Cell Overvoltage Failure
//  printf("- SUV        [0]   %-49s: %d\n", "Safety Cell Undervoltage Failure

//  14.1.39 ManufacturerAccess() 0x0053 PFStatus
//  This command returns the PFStatus() flags on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0053, 4);
//  printf("0x0053 %-60s: 0x%08X\n", "PFStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- TS4        [31]   %-49s: %d\n", "Open Thermistor–TS4 Failure
//  printf("- TS3        [30]   %-49s: %d\n", "Open Thermistor–TS3 Failure
//  printf("- TS2        [29]   %-49s: %d\n", "Open Thermistor–TS2 Failure
//  printf("- TS1        [28]   %-49s: %d\n", "Open Thermistor–TS1 Failure
//  printf("- RSVD       [27]   %-49s: %d\n", "Reserved. Do not use.
//  printf("- DFW        [26]   %-49s: %d\n", "Data Flash Wearout Failure
//  printf("- RSVD       [25]   %-49s: %d\n", "Reserved. Do not use.
//  printf("- IFC        [24]   %-49s: %d\n", "Instruction Flash Checksum Failure
//  printf("- PTC        [23]   %-49s: %d\n", "PTC Failure
//  printf("- 2LVL       [22]   %-49s: %d\n", "Second Level Protector Failure
//  printf("- AFEC       [21]   %-49s: %d\n", "AFE Communication Failure
//  printf("- AFER       [20]   %-49s: %d\n", "AFE Register Failure
//  printf("- FUSE       [19]   %-49s: %d\n", "Chemical Fuse Failure
//  printf("- OCDL       [18]   %-49s: %d\n", "Overcurrent in Discharge
//  printf("- DFETF      [17]   %-49s: %d\n", "Discharge FET Failure
//  printf("- CFETF      [16]   %-49s: %d\n", "Charge FET Failure
//  printf("- ASCDL      [15]   %-49s: %d\n", "Short Circuit in Discharge
//  printf("- ASCCL      [14]   %-49s: %d\n", "Short Circuit in Charge
//  printf("- AOLDL      [13]   %-49s: %d\n", "Overload in Discharge
//  printf("- VIMA       [12]   %-49s: %d\n", "Voltage Imbalance While Pack Is Active Failure
//  printf("- VIMR       [11]   %-49s: %d\n", "Voltage Imbalance while Pack At Rest Failure
//  printf("- CD         [10]   %-49s: %d\n", "Capacity Degradation Failure
//  printf("- IMP        [9]    %-49s: %d\n", "Impedance Failure
//  printf("- CB         [8]    %-49s: %d\n", "Cell Balancing Failure
//  printf("- QIM        [7]    %-49s: %d\n", "QMax Imbalance Failure
//  printf("- SOTF       [6]    %-49s: %d\n", "Safety Overtemperature FET Failure
//  printf("- COVL       [5]    %-49s: %d\n", "Cell Overvoltage
//  printf("- SOT        [4]    %-49s: %d\n", "Safety Overtemperature Cell Failure
//  printf("- SOCD       [3]    %-49s: %d\n", "Safety Overcurrent in Discharge
//  printf("- SOCC       [2]    %-49s: %d\n", "Safety Overcurrent in Charge
//  printf("- SOV        [1]    %-49s: %d\n", "Safety Cell Overvoltage Failure
//  printf("- SUV        [0]    %-49s: %d\n", "Safety Cell Undervoltage Failure

//  14.1.40 ManufacturerAccess() 0x0054 OperationStatus
//  This command returns the OperationStatus() flags on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0054, 4);
//  printf("0x0054 %-60s: 0x%08X\n", "OperationStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- RSVD       [31]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [30]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- EMSHUT     [29]  %-49s: %d\n", "Emergency FET Shutdown
//  printf("- CB         [28]  %-49s: %d\n", "Cell balancing status
//  printf("- SLPCC      [27]  %-49s: %d\n", "CC Measurement in SLEEP mode
//  printf("- SLPAD      [26]  %-49s: %d\n", "ADC Measurement in SLEEP mode
//  printf("- SMBLCAL    [25]  %-49s: %d\n", "Auto CC calibration when the bus is low. This bit may not be read by the host
//  because the FW will clear it when a communication is detected.
//  1 = Auto CC calibration starts
//  0 = When the bus is high or communication is detected for the case of
//  [IN_SYSTEM_SLEEP] = 1.
//  printf("- INIT       [24]  %-49s: %d\n", "Initialization after full reset
//  printf("- SLEEPM     [23]  %-49s: %d\n", "SLEEP mode triggered via command
//  printf("- XL         [22]  %-49s: %d\n", "400-kHz SMBus mode
//  printf("- CAL_OFFSET [21]  %-49s: %d\n", "Calibration Output (raw CC offset data) when MAC OutputShortedCCADCCal() is sent and the raw shorted CC data for calibration is available.
//  0 = When the raw shorted CC data for calibration is not available.
//  printf("- CAL        [20]  %-49s: %d\n", "Calibration Output (raw ADC and CC data) when either the MAC OutputCCADCCal() or OutputShortedCCADCCal() is sent and
//  the raw CC and ADC data for calibration is available.
//  0 = When the raw CC and ADC data for calibration is not available.
//  printf("- AUTOCALM   [19]  %-49s: %d\n", "Auto CC Offset Calibration by MAC AutoCCOffset()
//  1 = The gauge receives the MAC AutoCCOffset() and starts the Auto CC Offset calibration.
//  0 = Clear when the calibration is completed.
//  printf("- AUTH       [18]  %-49s: %d\n", "Authentication in progress
//  printf("- LED        [17]  %-49s: %d\n", "LED Display
//  1 = LED display is on.
//  0 = LED display is off.
//  printf("- SDM        [16]  %-49s: %d\n", "Shutdown triggered via command
//  printf("- SLEEP      [15]  %-49s: %d\n", "SLEEP mode conditions met
//  printf("- XCHG       [14]  %-49s: %d\n", "Charging disabled
//  printf("- XDSG       [13]  %-49s: %d\n", "Discharging disabled
//  printf("- PF         [12]  %-49s: %d\n", "PERMANENT FAILURE mode status
//  printf("- SS         [11]  %-49s: %d\n", "SAFETY status. This is the ORd value of all the Safety Status bits.
//  printf("- SDV        [10]  %-49s: %d\n", "Shutdown triggered via low pack voltage
//  printf("- SEC1       [9]   %-49s: %d\n", "SECURITY mode
//  printf("- SEC0       [8]   %-49s: %d\n", "SECURITY mode
//  0, 0 = Reserved
//  0, 1 = Full Access
//  1, 0 = Unsealed
//  1, 1 = Sealed
//  printf("- BTP_INT    [7]   %-49s: %d\n", "Battery Trip Point Interrupt. Setting and clearing this bit depends on various conditions.
//  See Section 6.9 for details.
//  printf("- RSVD       [6]   %-49s: %d\n", "Reserved. Do not use.
//  printf("- FUSE       [5]   %-49s: %d\n", "Fuse status
//  printf("- RSVD       [4]   %-49s: %d\n", "Reserved. Do not use.
//  printf("- PCHG       [3]   %-49s: %d\n", "Precharge FET status
//  printf("- CHG        [2]   %-49s: %d\n", "CHG FET status
//  printf("- DSG        [1]   %-49s: %d\n", "DSG FET status
//  printf("- PRES       [0]   %-49s: %d\n", "System present low

//  14.1.41 ManufacturerAccess() 0x0055 ChargingStatus
//  This command returns the ChargingStatus() and Temperature Range flags on ManufacturerBlockAccess()
//  or ManufacturerData().
//  n = mac_read(0x0055, 4);
//  printf("0x0055 %-60s: 0x%08X\n", "ChargingStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- RSVD       [23]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [22]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [21]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [20]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- NCT        [19]  %-49s: %d\n", "Near Charge Termination. This flag indicates the pack may be within 40 seconds of charge
//  termination. When smoothing is enabled and while NCT is high, RemainingCapacity() will be smoothed
//  to 100% over the next 40 seconds.
//  printf("- CCC        [18]  %-49s: %d\n", "Charging Loss Compensation
//  printf("- CVR        [17]  %-49s: %d\n", "Charging Voltage Rate of Change
//  printf("- CCR        [16]  %-49s: %d\n", "Charging Current Rate of Change
//  printf("- VCT        [15]  %-49s: %d\n", "Charge Termination
//  printf("- MCHG       [14]  %-49s: %d\n", "Maintenance Charge
//  printf("- SU         [13]  %-49s: %d\n", "Suspend Charge
//  printf("- IN         [12]  %-49s: %d\n", "Charge Inhibit
//  printf("- HV         [11]  %-49s: %d\n", "High Voltage Region
//  printf("- MV         [10]  %-49s: %d\n", "Mid Voltage Region
//  printf("- LV         [9]   %-49s: %d\n", "Low Voltage Region
//  printf("- PV         [8]   %-49s: %d\n", "Precharge Voltage Region
//  Temperature Range Flags (Bits 7–0):
//  printf("- RSVD       [7]   %-49s: %d\n", "Reserved. Do not use.
//  printf("- OT         [6]   %-49s: %d\n", "Overtemperature Region
//  printf("- HT         [5]   %-49s: %d\n", "High Temperature Region
//  printf("- STH        [4]   %-49s: %d\n", "Standard Temperature High Region
//  printf("- RT         [3]   %-49s: %d\n", "Recommended Temperature Region
//  printf("- STL        [2]   %-49s: %d\n", "Standard Temperature Low Region
//  printf("- LT         [1]   %-49s: %d\n", "Low Temperature Region
//  printf("- UT         [0]   %-49s: %d\n", "Undertemperature Region

//  14.1.42 ManufacturerAccess() 0x0056 GaugingStatus
//  This command returns the GaugingStatus() flags on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0056, 3);
//  printf("0x0056 %-60s: 0x%08X\n", "GaugingStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- RSVD       [23]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [22]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- RSVD       [21]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- OCVFR      [20]  %-49s: %d\n", "Open Circuit Voltage in Flat Region (during RELAX)
//  printf("- LDMD       [19]  %-49s: %d\n", "LOAD mode
//  1 = Constant Power
//  0 = Constant Current
//  printf("- RX         [18]  %-49s: %d\n", "Resistance Update (toggles after every resistance update)
//  printf("- QMax       [17]  %-49s: %d\n", "QMax Update (toggles after every QMax update)
//  printf("- VDQ        [16]  %-49s: %d\n", "Discharge Qualified for Learning (opposite of the R_DIS flag)
//  printf("- NSFM       [15]  %-49s: %d\n", "Negative Scale Factor Mode
//  1 = Negative Ra Scaling Factor Detected
//  0 = Negative Ra Scaling Factor Not Detected
//  printf("- RSVD       [14]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- SLPQMax    [13]  %-49s: %d\n", "OCV update in SLEEP mode. OCV reading in process. Completed OCV reading
//  printf("- QEN        [12]  %-49s: %d\n", "Impedance Track Gauging (Ra and QMax updates are enabled.)
//  printf("- VOK        [11]  %-49s: %d\n", "Voltages are OK for QMax update. This flag is updated at exit of the RELAX mode.
//  1 = A DOD is saved for next QMax update.
//  0 = No DOD saved and QMax update is not possible.
//  printf("- R_DIS      [10]  %-49s: %d\n", "Resistance Updates
//  printf("- RSVD       [9]   %-49s: %d\n", "Reserved. Do not use.
//  printf("- REST       [8]   %-49s: %d\n", "Rest
//  1 = OCV Reading Taken
//  0 = OCV Reading Not Taken or Not in RELAX
//  printf("- CF         [7]   %-49s: %d\n", "Condition Flag
//  1 = MaxError() > Max Error Limit (condition cycle needed)
//  0 = MaxError() < Max Error Limit (condition cycle not needed)
//  printf("- DSG        [6]   %-49s: %d\n", "Discharge/Relax
//  1 = Charging Not Detected
//  0 = Charging Detected
//  printf("- EDV        [5]   %-49s: %d\n", "End-of-Discharge Termination Voltage
//  1 = Termination voltage reached during discharge
//  0 = Termination voltage not reached, or not in DISCHARGE mode
//  printf("- BAL_EN     [4]   %-49s: %d\n", "Cell Balancing
//  1 = Cell balancing is possible if enabled.
//  0 = Cell balancing is not allowed.
//  printf("- TC         [3]   %-49s: %d\n", "Terminate Charge
//  printf("- TD         [2]   %-49s: %d\n", "Terminate Discharge
//  printf("- FC         [1]   %-49s: %d\n", "Fully Charged
//  printf("- FD         [0]   %-49s: %d\n", "Fully Discharged

//  14.1.43 ManufacturerAccess() 0x0057 ManufacturingStatus
//  This command returns the ManufacturingStatus() flags on ManufacturerBlockAccess() or
//  ManufacturerData().
//  n = mac_read(0x0057, 2);
//  printf("0x0057 %-60s: 0x%08X\n", "ManufacturingStatus", data[4] + (data[3] << 8));

//  printf("- CAL_TEST   [15]  %-49s: %d\n", "CALIBRATION mode
//  printf("- LT_TEST    [14]  %-49s: %d\n", "LIFETIME SPEED UP mode
//  printf("- RSVD       [13]  %-49s: %d\n", "Reserved. Do not use.
//  printf("- LED_EN     [12]  %-49s: %d\n", "LED display is enabled with the push button.
//  printf("- LED_EN     [11]  %-49s: %d\n", "LED display is enabled with the push button.
//  printf("- LED_EN     [10]  %-49s: %d\n", "LED display is enabled with the push button.
//  printf("- LED_EN     [9]   %-49s: %d\n", "LED display is enabled with the push button.
//  1 = LED display is on when the push button is pressed.
//  0 = LED display is off when the push button is pressed.
//  printf("- FUSE_EN    [8]   %-49s: %d\n", "Fuse action
//  printf("- BBR_EN     [7]   %-49s: %d\n", "Black Box Recorder
//  printf("- PF_EN      [6]   %-49s: %d\n", "Permanent Failure
//  printf("- LF_EN      [5]   %-49s: %d\n", "Lifetime Data Collection
//  printf("- FET_EN     [4]   %-49s: %d\n", "All FET Action
//  printf("- GAUGE_EN   [3]   %-49s: %d\n", "Gas Gauging
//  printf("- DSG_EN     [2]   %-49s: %d\n", "Discharge FET test
//  1 = Discharge FET test activated
//  printf("- CHG_EN     [1]   %-49s: %d\n", "Charge FET test
//  1 = Charge FET test activated
//  printf("- PCHG_EN    [0]   %-49s: %d\n", "Precharge FET test
//  1 = Precharge FET test activated

//  14.1.44 ManufacturerAccess() 0x0058 AFE Register
//  This command returns the AFERegister() values on ManufacturerBlockAccess() or ManufacturerData().
//  These are the AFE hardware registers and are intended for internal debug use only.
//  n = mac_read(0x0058, 22);
//  printf("0x0058 %-60s: 0x%08X\n", "AFE Register", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  Status Condition
//  Activate 0x0058 to ManufacturerAccess()
//  Action: Output AFE Register values on ManufacturerBlockAccess() or ManufacturerData() in the following
//  format: AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUU where:
//  Value Description
//  AA AFE Interrupt Status. AFE Hardware interrupt status (for example, wake time, push-button, and so on)
//  BB AFE FET Status. AFE FET status (for example, CHG FET, DSG FET, PCHG FET, FUSE input, and so on)
//  CC AFE RXIN. AFE I/O port input status
//  DD AFE Latch Status. AFE protection latch status
//  EE AFE Interrupt Enable. AFE interrupt control settings
//  FF AFE Control. AFE FET control enable setting
//  GG AFE RXIEN. AFE I/O input enable settings
//  HH AFE RLOUT. AFE I/O pins output status
//  II AFE RHOUT. AFE I/O pins output status
//  JJ AFE RHINT. AFE I/O pins interrupt status
//  KK AFE Cell Balance. AFE cell balancing enable settings and status
//  LL AFE ADC/CC Control. AFE ADC/CC Control settings
//  MM AFE ADC Mux Control. AFE ADC channel selections
//  NN AFE LED Control
//  OO AFE Control. AFE control on various HW based features
//  PP AFE Timer Control. AFE comparator and timer control
//  QQ AFE Protection. AFE protection delay time control
//  RR AFE OCD. AFE OCD settings
//  SS AFE SCC. AFE SCC settings
//  TT AFE SCD1. AFE SCD1 settings
//  UU AFE SCD2. AFE SCD2 settings

//  14.1.45 ManufacturerAccess() 0x005A NoLoadRemCap
//  This read-only word command returns the equivalent of RemainingCapacity() under a no load condition.
//  (a) RemainingCapacity() is calculated by the device with compensation based on Load Select (for
//  example, max, average, current last run, and so on).
//  (b) Because the RTC power consumption is expected to be relatively small, the new parameter provides a
//  better representation of how much actual capacity is available when only powering the RTC circuit.
//  EDV
//  OCV
//  Vload
//  FCC Qmax
//  dod@EOC
//  Present
//  dod
//  NoLoadRC
//  RC
//  Excluded capacity due to IR
//  drop at charge termination
//  Figure 14-1. No Load
//  n = mac_read(0x005A, 32);
//  printf("0x005A %-60s: 0x%08X\n", "NoLoadRemCap", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.46 ManufacturerAccess() 0x0060 Lifetime Data Block 1
//  This command returns the Lifetime Data with the following format:
//  n = mac_read(0x0060, 32);
//  printf("0x0060 %-60s: 0x%08X\n", "Lifetime Data Block 1", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  aaAAbbBBccCCddDDeeEEffFFggGGhhHHiiIIjjJJkkKKllLLmmMMNNOOPPQQRRSS.
//  Value Description
//  AAaa Cell 1 Max Voltage
//  BBbb Cell 2 Max Voltage
//  CCcc Cell 3 Max Voltage
//  DDdd Cell 4 Max Voltage
//  EEee Cell 1 Min Voltage
//  FFff Cell 2 Min Voltage
//  GGgg Cell 3 Min Voltage
//  HHhh Cell 4 Min Voltage
//  IIii Max Delta Cell Voltage
//  JJjj Max Charge Current
//  KKkk Max Discharge Current
//  LLll Max Avg Dsg Current
//  MMmm Max Avg Dsg Power
//  NN Max Temp Cell
//  OO Min Temp Cell
//  PP Max Delta Cell Temperature
//  QQ Max Temp Int Sensor
//  RR Min Temp Int Sensor
//  SS Max Temp FET

//  14.1.47 ManufacturerAccess() 0x0061 Lifetime Data Block 2
//  This command returns the Lifetime Data with the following format:
//  n = mac_read(0x0061, 8);
//  printf("0x0061 %-60s: 0x%08X\n", "Lifetime Data Block 2", data[3]);

//  AABBCCDDEEFFGGHH.
//  Value Description
//  AA No. of Shutdowns
//  BB No. of Partial Resets
//  CC No. of Full Resets
//  DD No. of WDT resets
//  
//  Value Description
//  EE CB Time Cell 1
//  FF CB Time Cell 2
//  GG CB Time Cell 3
//  HH CB Time Cell 4

//  14.1.48 ManufacturerAccess() 0x0062 Lifetime Data Block 3
//  This command returns the Lifetime Data with the following format:
//  n = mac_read(0x0062, 16);
//  printf("0x0062 %-60s: 0x%08X\n", "Lifetime Data Block 3", data[4] + (data[3] << 8));

//  aaAAbbBBccCCddDDeeEEffFFggGGhhHH.
//  Value Description
//  AAaa Total FW Runtime
//  BBbb Time Spent in UT
//  CCcc Time Spent in LT
//  DDdd Time Spent in STL
//  EEee Time Spent in RT
//  FFff Time Spent in STH
//  GGgg Time Spent in HT
//  HHhh Time Spent in OT

//  14.1.49 ManufacturerAccess() 0x0063 Lifetime Data Block 4
//  This command returns the Lifetime Data with the following format:
//  n = mac_read(0x0063, 32);
//  printf("0x0063 %-60s: 0x%08X\n", "Lifetime Data Block 4", data[4] + (data[3] << 8));

//  aaAAbbBBccCCddDDeeEEffFFggGGhhHHllLLmmMMnnNNooOOppPP.
//  Value Description
//  AAaa No. of COV Events
//  BBbb Last COV Event
//  CCcc No. of CUV Events
//  DDdd Last CUV Event
//  EEee No. of OCD1 Events
//  FFff Last OCD1 Event
//  GGgg No. of OCD2 Events
//  HHhh Last OCD2 Event
//  IIii No. of OCC1 Events
//  JJjj Last OCC1 Event
//  KKkk No. of OCC2 Events
//  LLll Last OCC2 Event
//  MMmm No. of AOLD Events
//  NNnn Last AOLD Event
//  OOoo No. of ASCD Events
//  PPpp Last ASCD Event

//  14.1.50 ManufacturerAccess() 0x0064 Lifetime Data Block 5
//  This command returns the Lifetime Data with the following format:
//  n = mac_read(0x0064, 32);
//  printf("0x0064 %-60s: 0x%08X\n", "Lifetime Data Block 5", data[4] + (data[3] << 8));

//  aaAAbbBBccCCddDDeeEEffFFggGGhhHHllLLmmMMnnNNooOOppPP.
//  Value Description
//  AAaa No. of ASCC Events
//  BBbb Last ASCC Event
//  CCcc No. of OTC Events
//  Value Description
//  DDdd Last OTC Event
//  EEee No. of OTD Events
//  FFff Last OTD Event
//  GGgg No. of OTF Events
//  HHhh Last OTF Event
//  IIii No. Valid Charge Term
//  JJjj Last Valid Charge Term
//  KKkk No. of Qmax Updates
//  LLll Last Qmax Update
//  MMmm No. of Ra Updates
//  NNnn Last Ra Update
//  OOoo No. of Ra Disable
//  PPpp Last Ra Disable

//  14.1.51 ManufacturerAccess() 0x0070 ManufacturerInfo
//  This command returns ManufacturerInfo on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0070, 32);
//  printf("0x0070 %-60s: 0x%08X\n", "ManufacturerInfo", data[4] + (data[3] << 8));

//  Status Condition Action
//  Activate 0x0070 to ManufacturerAccess()
//  Output 32 bytes of ManufacturerInfo on ManufacturerBlockAccess() or ManufacturerData() in
//  the following format: AABBCCDDEEFFGGHHIIJJKKLLMMNN
//  OOPPQQRRSSTTUUVVWWXXVVZZ112233 445566

//  14.1.52 ManufacturerAccess() 0x0071 DAStatus1
//  This command returns the cell voltages, pack voltage, bat voltage, cell currents, cell powers, power, and
//  average power on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0071, 32);
//  printf("0x0071 %-60s: 0x%08X\n", "DAStatus1", data[4] + (data[3] << 8));

//  Status Condition
//  Activate 0x0071 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 32 bytes of data on ManufacturerBlockAccess() or ManufacturerData() in the following
//  format: aaAAbbBBccCCddDDeeEEffFFggGGhhHHiiIIjjJJkkKKllLLmmMMnnNNooOOppPP where:
//  Value Description Unit
//  AAaa Cell Voltage 1 mV
//  BBbb Cell Voltage 2 mV
//  CCcc Cell Voltage 3 mV
//  DDdd Cell Voltage 4 mV
//  EEee BAT Voltage. Voltage at the BAT pin. This is different than Voltage(), which is the sum of all the
//  cell voltages.
//  mV
//  FFff PACK Voltage mV
//  GGgg Cell Current 1. Simultaneous current measured during Cell Voltage1 measurement mA
//  HHhh Cell Current 2. Simultaneous current measured during Cell Voltage2 measurement mA
//  IIii Cell Current 3. Simultaneous current measured during Cell Voltage3 measurement mA
//  JJjj Cell Current 4. Simultaneous current measured during Cell Voltage 4 measurement mA
//  KKkk Cell Power 1. Calculated using Cell Voltage1 and Cell Current 1 data mA
//  LLll Cell Power 2. Calculated using Cell Voltage2 and Cell Current 2 data cW
//  MMmm Cell Power 3. Calculated using Cell Voltage3 and Cell Current 3 data cW
//  NNnn Cell Power 4. Calculated using Cell Voltage4 and Cell Current 4 data cW
//  OOoo Power calculated by Voltage() × Current() cW
//  PPpp Average Power cW

//  14.1.53 ManufacturerAccess() 0x0072 DAStatus2
//  This command returns the internal temperature sensor, TS1, TS2, TS3, TS4, Cell Temp, and FET Temp
//  on ManufacturerBlockAccess() or ManufacturerData().
    n = mac_read(0x0072, 14);
    printf("0x0072 %-60s: 0x%08X\n", "DAStatus2", data[4] + (data[3] << 8));

//  Status Condition
//  Activate 0x0072 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 14 bytes of temperature data values on ManufacturerBlockAccess() or ManufacturerData()
//  in the following format: aaAAbbBBccCCddDDeeEEffFFggGG where:
//  Value Description Unit
//  AAaa Int Temperature 0.1°K
//  BBbb TS1 Temperature 0.1°K
//  CCcc TS2 Temperature 0.1°K
//  DDdd TS3 Temperature 0.1°K
//  EEee TS4 Temperature 0.1°K
//  FFff Cell Temperature 0.1°K
//  GGgg FET Temperature 0.1°K

//  14.1.54 ManufacturerAccess() 0x0073 GaugeStatus1
//  This command instructs the device to return Impedance Track related gauging information on
//  ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0073, 32);
//  printf("0x0073 %-60s: 0x%08X\n", "GaugeStatus1", data[4] + (data[3] << 8));

//  Status Condition
//  Activate 0x0073 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 32 bytes of IT data values on ManufacturerBlockAccess() or ManufacturerData() in the
//  following format: aaAAbbBBccCCddDDeeEEffFFggGGhhHHIiiIIjjJJkkKKllLLmmMMnnNNooOOppPPqqQQ
//  where:
//  Value Description Unit
//  AAaa True Rem Q. True remaining capacity in mAh from IT simulation before any filtering or
//  smoothing function. This value can be negative or higher than FCC. mAh
//  BBbb True Rem E. True remaining energy in cWh from IT simulation before any filtering or smoothing
//  function. This value can be negative or higher than FCC. cWh
//  CCcc Initial Q. Initial capacity calculated from IT simulation mAh
//  DDdd Initial E. Initial energy calculated from IT simulation cWh
//  EEee True FCC Q. True full charge capacity from IT simulation without the effects of any smoothing
//  function mAh
//  FFff True FCC E. True full charge energy from IT simulation without the effects of any smoothing
//  function cWh
//  GGgg T_sim. Temperature during the last simulation run. 0.1°K
//  HHhh T_ambient. Current assumed ambient temperature used by the IT algorithm for thermal modeling 0.1°K
//  IIii RaScale 0. Ra table scaling factor of Cell 1 —
//  JJjj RaScale 1. Ra table scaling factor of Cell 2 —
//  KKkk RaScale 2. Ra table scaling factor of Cell 3 —
//  LLll RaScale 3. Ra table scaling factor of Cell 4 —
//  MMmm CompRes 0. Last temperature compensated Resistance of Cell 1 2–10 Ω
//  NNnn CompRes 1. Last temperature compensated Resistance of Cell 2 2–10 Ω
//  OOoo CompRes 2. Last temperature compensated Resistance of Cell 3 2–10 Ω
//  PPpp CompRes 3. Last temperature compensated Resistance of Cell 4 2–10 Ω

//  14.1.55 ManufacturerAccess() 0x0074 GaugeStatus2
//  This command instructs the device to return Impedance Track related gauging information on
//  ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0074, 32);
//  printf("0x0074 %-60s: 0x%08X\n", "GaugeStatus2", data[4] + (data[3] << 8));

//  Status Condition
//  Activate 0x0074 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 32 bytes of IT data values on ManufacturerBlockAccess() or ManufacturerData() in the
//  following format: AABBCCDDEEFFggGGhhHHiiIIjjJJkkKKllLLmmMMnnNNooOOppPPqqQQrrRRssSS
//  where:
//  Value Description Unit
//  AA
//  Pack Grid. Active pack grid point (minimum of CellGrid0 to Cell Grid3). This data is only valid
//  during DISCHARGE mode when [R_DIS] = 0. If [R_DIS] = 1 or not discharging, this value is not
//  updated.
//  —
//  BB
//  BB: LStatus—Learned status of resistance table
//  Bit 3 | Bit 2 | Bit 1| Bit 0
//  QMax | ITEN | CF1 | CF0
//  CF1, CF0: QMax Status
//  0,0 = Battery OK
//  0,1 = QMax is first updated in learning cycle.
//  1,0 = QMax and resistance table updated in learning cycle
//  ITEN: IT enable
//  0 = IT disabled
//  1 = IT enabled
//  QMax: QMax update in field
//  0 = QMax has not been updated in the field.
//  1= QMax updated in the field.
//  —
//  CC Cell Grid 0. Active grid point of Cell 1. This data is only valid during DISCHARGE mode when
//  [R_DIS] = 0. If [R_DIS] = 1 or not discharging, this value is not updated. —
//  DD Cell Grid 1. Active grid point of Cell 2. This data is only valid during DISCHARGE mode when
//  [R_DIS] = 0. If [R_DIS] = 1 or not discharging, this value is not updated. —
//  EE Cell Grid 2. Active grid point of Cell 3. This data is only valid during DISCHARGE mode when
//  [R_DIS] = 0. If [R_DIS] = 1 or not discharging, this value is not updated. —
//  FF Cell Grid 3. Active grid point of Cell 4. This data is only valid during DISCHARGE mode when
//  [R_DIS] = 0. If [R_DIS] = 1 or not discharging, this value is not updated. —
//  GGggHHhh State Time. Time passed since last state change (DISCHARGE, CHARGE, REST) s
//  IIii DOD0_0. Depth of discharge for Cell 1 —
//  JJjj DOD0_1. Depth of discharge for Cell 2 —
//  KKkk DOD0_2. Depth of discharge for Cell 3 —
//  LLll DOD0_3. Depth of discharge for Cell 4 —
//  MMmm DOD0 Passed Q. Passed capacity since the last DOD0 update mAh
//  NNnn DOD0 Passed E. Passed energy since last DOD0 update cWh
//  OOoo DOD0 Time. Time passed since the last DOD0 update hr/16
//  PPpp DODEOC 0. Depth of discharge at end of charge of Cell 1 —
//  QQqq DODEOC 1. Depth of discharge at end of charge of Cell 2 —
//  RRrr DODEOC 2. Depth of discharge at end of charge of Cell 3 —
//  SSss DODEOC 3. Depth of discharge at end of charge of Cell 4 —

//  14.1.56 ManufacturerAccess() 0x0075 GaugeStatus3
//  This command instructs the device to return Impedance Track related gauging information on
//  ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0075, 24);
//  printf("0x0075 %-60s: 0x%08X\n", "GaugeStatus3", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  Status Condition
//  Activate 0x0075 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 24 bytes of IT data values on ManufacturerBlockAccess() or ManufacturerData() in the
//  following format: aaAAbbBBccCCddDDeeEEffFFggGGhhHHIiiIIjjJJkkKKllLL where:
//  Value Description Unit
//  AAaa QMax 0. QMax of Cell 1 mAh
//  BBbb QMax 1. QMax of Cell 2 mAh
//  CCcc QMax 2. QMax of Cell 3 mAh
//  DDdd QMax 3. QMax of Cell 4 mAh
//  EEee QMax DOD0_0. DOD0 saved to be used for next QMax update of Cell 1. The value is only valid
//  when [VOK] = 1. —
//  FFff QMax DOD0_1. DOD0 saved to be used for next QMax update of Cell 2. The value is only valid
//  when [VOK] = 1. —
//  GGgg QMax DOD0_2. DOD0 saved to be used for next QMax update of Cell 3 . The value is only valid
//  when [VOK] = 1. —
//  HHhh QMax DOD0_3. DOD0 saved to be used for next QMax update of Cell 4. The value is only valid
//  when [VOK] = 1. —
//  IIii QMax Passed Q. Pass capacity since last QMax DOD value is saved. mAh
//  JJjj QMax Time. Time passed since last QMax DOD value is saved. hr/16
//  KKkk Temp k. Thermal Model temperature factor —
//  LLll Temp a. Thermal Model temperature —

//  14.1.57 ManufacturerAccess() 0x0076 CBStatus
//  This command instructs the device to return cell balance time information on ManufacturerBlockAccess()
//  or ManufacturerData().
//  n = mac_read(0x0076, 32);
//  printf("0x0076 %-60s: 0x%08X\n", "CBStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  Status Condition
//  Activate 0x0076 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 8 bytes of IT data values on ManufacturerBlockAccess() or ManufacturerData() in the
//  following format: aaAAbbBBccCCddDD where:
//  Value Description Unit
//  AAaa Cell balance time 0. Calculated cell balancing time of Cell 1 s
//  BBbb Cell balance time 1. Calculated cell balancing time of Cell 2 s
//  CCcc Cell balance time 2. Calculated cell balancing time of Cell 3 s
//  DDdd Cell balance time 3. Calculated cell balancing time of Cell 4 s

//  14.1.58 ManufacturerAccess() 0x0077 State-of-Health
//  This command returns the state-of-health FCC in mAh and energy in cWh with the following format:
//  n = mac_read(0x0077, 4);
//  printf("0x0077 %-60s: %d\n", "State of Health FFC in mAh", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));
//  printf("0x0077 %-60s: %d\n", "State of Health energy in cWh", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  aaAAbbBB.
//  Value Description Unit
//  AAaa State-of-Health FCC mAh
//  BBbb State-of-Health energy cWh

//  14.1.59 ManufacturerAccess() 0x0078 FilterCapacity
//  This command instructs the device to return the filtered remaining capacity and full charge capacity even if
//  [SMOOTH] = 0 on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x0078, 4);
//  printf("0x0078 %-60s: %d\n", "FilterCapacity", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  Status Condition
//  Activate 0x0078 to ManufacturerBlockAccess() or ManufacturerAccess()
//  Action: Output 8 bytes of IT data values on ManufacturerBlockAccess() or ManufacturerData() in the
//  following format: aaAAbbBBccCCddDD where:
//  Value Description Unit
//  AAaa Filtered remaining capacity mAh
//  BBbb Filtered remaining energy mWh
//  CCcc Filtered full charge capacity mAh
//  DDdd Filtered full charge energy mWh

//  14.1.60 ManufacturerAccess() 0x0079 RSOC_WRITE
//  This command is typically used for testing purposes and will allow a specific value to be loaded into
//  RSOC. However, subsequent IT simulation can overwrite this value. This command works only in
//  UNSEALED mode. Additionally, this command will work with or without smoothing enabled.
//  n = mac_read(0x0079, 4);
//  printf("0x0079 %-60s: %d\n", "RSOC_WRITE", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));


//  14.1.61 ManufacturerAccess() 0x007A ManufacturerInfoB
//  This command returns ManufacturerInfoB on ManufacturerBlockAccess() or ManufacturerData().
//  n = mac_read(0x007A, 4);
//  printf("0x007A %-60s: %d\n", "ManufacturerInfoB", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  Status Condition Action
//  Activate 0x007A to ManufacturerAccess()
//  Output 4 bytes of ManufacturerInfo2 on
//  ManufacturerBlockAccess() or ManufacturerData() in the following
//  format: AABBCCDD

//  14.1.62 ManufacturerAccess() 0x00F0 IATA_SHUTDOWN
//  This command, when used in conjunction with the [IATA_SHUT] bit in the IATA Flag register, enables the
//  gauge to enter IATA shutdown (provided certain other requirements are met).
//  n = mac_read(0x00F0, 4);
//  printf("0x00F0 %-60s: %d\n", "IATA_SHUTDOWN", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.63 ManufacturerAccess() 0x00F1 IATA_RM
//  This command is used in relation to IATA to read out the stored IATA_RM value.
//  n = mac_read(0x00F1, 4);
//  printf("0x00F1 %-60s: %d\n", "IATA_RM", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.64 ManufacturerAccess() 0x00F2 IATA_FCC
//  This command is used in relation to IATA to read out the stored IATA_FCC value.
//  n = mac_read(0x00F2, 4);
//  printf("0x00F2 %-60s: %d\n", "IATA_FCC", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.65 ManufacturerAccess() 0x0F00 ROM Mode
//  This command sends the device into ROM mode in preparation for firmware reprogramming. To enter
//  ROM mode, the device must be in FULL ACCESS mode. To return from ROM mode to FW mode, issue
//  the SMBus command 0x08.
//  NOTE: Command 0x0033 also puts the device in ROM mode (for backwards compatibility with the
//  bq30zxy device).
//  n = mac_read(0x0F00, 4);
//  printf("0x0F00 %-60s: %d\n", "ROM Mode", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.66 ManufacturerAccess() 0x3008 WRITE_TEMP
//  This command, available in SEALED and UNSEALED modes, is used to write the temperature register
//  (when enabled by setting [SMB_CELL_TEMP] = 1 in the SBS Configuration register. In this case, the
//  gauge’s cell temperature inputs (TS1 through TS3) are ignored.
//  NOTE: When this feature is used, the temperature must be written in 0.1°K.
//  n = mac_read(0x3008, 4);
//  printf("0x3008 %-60s: %d\n", "WRITE_TEMP", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  14.1.67 0x4000–0x5FFF Data Flash Access()
//  Accessing data flash (DF) is only supported by the ManufacturerBlockAccess() by addressing the physical
//  address.
//  To write to the DF, send the starting address, followed by the DF data block. The DF data block is the
//  intended revised DF data to be updated to DF. The size of the DF data block ranges from 1 byte to 32
//  bytes. All individual data must be sent in little endian.
//  Write to DF example:
//  Assuming: data1 locates at address 0x4000 and data2 locates at address 0x4002.
//  Both data1 and data2 are U2 type.
//  To update data1 and data2, send an SMBus block write with command = 0x44
//  block = starting address + DF data block
//  = 0x00 + 0x40 + data1_LowByte + data1_HighByte + data2_LowByte + data2_HighByte
//  To read the DF, send an SMBus block write to the ManufacturerBlockAccess(), followed by the starting
//  address, then send an SMBus block read to the ManufacturerBlockAccess(). The return data contains the
//  starting address followed by 32 bytes of DF data in little endian.
//  Read from DF example:
//  Taking the same assuming from the read DF example, to read DF,
//  a. Send SMBus write block with command 0x44, block = 0x00 + 0x40
//  b. Send SMBus read block with command 0x44
//  The returned block = a starting address + 32 bytes of DF data
//  = 0x00 + 0x40 + data1_LowByte + data1_HighByte + data2_LowByte + data2_HighByte....
//  data32_LowByte + data32_HighByte
//  The gauge supports an auto-increment on the address during a DF read. This greatly reduces the time
//  required to read out the entire DF. Continue with the read from the DF example. If another SMBus read
//  block is sent with command 0x44, the gauge returns another 32 bytes of DF data, starting with address
//  0x4020.

//  14.1.68 ManufacturerAccess() 0xF080 Exit Calibration Output Mode
//  This command stops the output of calibration data to the ManufacturerBlockAccess() or
//  ManufacturerData() command. Any other MAC command sent to the gauge will also stop the output of the
//  calibration data.
//  n = mac_read(0xF080, 2);
//  printf("0xF080 %-60s: 0x%02X\n", "Exit Calibration Output Mode", data[4] + (data[3] << 8));

//  Status Condition Action
//  Activate
//  ManufacturerBlockAccess() OR
//  ManufacturerData() = 1 AND
//  0xF080 to ManufacturerAccess()
//  Stop output of ADC or CC data on ManufacturerBlockAccess() or
//  ManufacturerData()

//  14.1.69 ManufacturerAccess() 0xF081 Output CCADC Cal
//  This command instructs the device to output the raw values for calibration purposes on
//  ManufacturerBlockAccess() or ManufacturerData(). All values are updated every 250 ms and the format of
//  each value is 2's complement, MSB first.
//  n = mac_read(0xF081, 2);
//  printf("0xF081 %-60s: 0x%02X\n", "Output CC and ADC for Calibration", data[4] + (data[3] << 8));

//  Status Condition
//  Disable ManufacturingStatus()[CAL] = 1 AND
//  0xF080 to ManufacturerAccess()
//  Action: OperationStatus()[CAL] = 0, [CAL_OFFSET] = 0
//  Stop output of ADC and CC data on ManufacturerBlockAccess() or ManufacturerData()
//  Status Condition
//  Enable 0xF081 to ManufacturerAccess()
//  Action: OperationStatus()[CAL] = 1, [CAL_OFFSET] = 0
//  Outputs the raw CC and AD values on ManufacturerBlockAccess() or ManufacturerData() in the format of
//  ZZYYaaAAbbBBccCCddDDeeEEffFFggGGhhHHiiIIjjJJkkKK:
//  Value Description
//  ZZ Rolling 8-bit counter, increments when values are refreshed.
//  YY Status, 1 when ManufacturerAccess() = 0xF081, 2 when ManufacturerAccess() = 0xF082
//  AAaa Current (coulomb counter)
//  BBbb Cell Voltage 1
//  CCcc Cell Voltage 2
//  DDdd Cell Voltage 3
//  EEee Cell Voltage 4
//  FFff PACK Voltage
//  GGgg BAT Voltage
//  HHhh Cell Current 1
//  IIii Cell Current 2
//  JJjj Cell Current 3
//  KKkk Cell Current 4

//  14.1.70 ManufacturerAccess() 0xF082 Output Shorted CCADC Cal
//  This command instructs the device to output the raw values for calibration purposes on
//  ManufacturerBlockAccess() or ManufacturerData(). All values are updated every 250 ms and the format of
//  each value is 2's complement, MSB first. This mode includes an internal short on the coulomb counter
//  inputs for measuring offset.
//  n = mac_read(0xF082, 2);
//  printf("0xF082 %-60s: 0x%02X\n", "Output CC and ADC for Calibration", data[4] + (data[3] << 8));

//  Status Condition
//  Disable ManufacturingStatus()[CAL] = 1 AND
//  0xF080 to ManufacturerAccess()
//  Action: OperationStatus()[CAL] = 0, [CAL_OFFSET] = 0
//  Stop output of ADC and CC data on ManufacturerBlockAccess() or ManufacturerData()
//  Status Condition
//  Enable 0xF081 to ManufacturerAccess()
//  Action: OperationStatus()[CAL] = 1, [CAL_OFFSET] = 1
//  Outputs the raw CC and AD values on ManufacturerBlockAccess() or ManufacturerData() in the format of
//  ZZYYaaAAbbBBccCCddDDeeEEffFFggGGhhHHiiIIjjJJkkKK:
//  Value Description
//  ZZ Rolling 8-bit counter, increments when values are refreshed.
//  YY Status, 1 when ManufacturerAccess() = 0xF081, 2 when ManufacturerAccess() = 0xF082
//  AAaa Current (coulomb counter)
//  BBbb Cell Voltage 1
//  CCcc Cell Voltage 2
//  DDdd Cell Voltage 3
//  EEee Cell Voltage 4
//  FFff PACK Voltage
//  GGgg BAT Voltage
//  HHhh Cell Current 1
//  IIii Cell Current 2
//  JJjj Cell Current 3
//  KKkk Cell Current 4

//  14.2 0x01 RemainingCapacityAlarm()
//  This read/write word function sets a low capacity alarm threshold for the cell stack.
//  0x01 RemainingCapacityAlarm() R/W Word U2 0 700 300
//  mAh
//  10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
//  readWord("RemainingCapacityAlarm", "mAh/10 mWh", 0x01, 0, 700, 300);

//  14.3 0x02 RemainingTimeAlarm()
//  This read/write word function sets a low remaining time-to-fully discharge alarm threshold for the cell
//  stack.
//  0x02 RemainingTimeAlarm() R/W Word U2 0 30 10 min
//  readWord("RemainingTimeAlarm", "min", 0x02, 0, 30, 10);

//  14.4 0x03 BatteryMode()
//  This read/write word function sets various battery operating mode options.
//  readWord("BatteryMode", "", 0x03, 0x0000, 0xFFFF, 0);

//  0x03 BatteryMode() R/W Word H2 0x0000 0xFFFF —
//  15 14 13 12 11 10 9 8
//  CAPM CHGM AM RSVD RSVD RSVD PB CC
//  7 6 5 4 3 2 1 0
//  CF RSVD RSVD RSVD RSVD RSVD PBS ICC
//  CAPM [15): CAPACITY Mode (R/W)
//  0 = Report in mA or mAh (default)
//  1 = Report in 10 mW or 10 mWh
//  CHGM [14): CHARGER Mode (R/W)
//  0 = Enables ChargingVoltage() and ChargingCurrent() broadcasts to host and smart battery
//  charger
//  1 = Disables ChargingVoltage() and ChargingCurrent() broadcasts to host and smart battery
//  charger (default)
//  AM [13): ALARM Mode (R/W)
//  0 = Enables AlarmWarning broadcasts to host and smart battery charger (default)
//  1 = Disables Alarm Warning broadcasts to host and smart battery charger
//  RSVD (Bits 12–10): Reserved. Do not use.
//  PB [9): Primary Battery
//  0 = Battery operating in its secondary role (default)
//  1 = Battery operating in its primary role
//  CC [8): Charge Controller Enabled (R/W)
//  0 = Internal charge controller disabled (default)
//  1 = Internal charge controller enabled
//  CF [7): Condition Flag (R)
//  0 = Battery OK
//  1 = Conditioning cycle requested
//  RSVD (Bits 6–2): Reserved. Do not use.
//  PBS [1): Primary Battery Support (R)
//  0 = Function not supported (default)
//  1 = Primary or Secondary Battery Support
//  ICC [0): Internal Charge Controller (R)
//  0 = Function not supported (default)
//  1 = Function supported

//  14.5 0x04 AtRate()
//  This read/write word function sets the value used in calculating AtRateTimeToFull() and
//  AtRateTimeToEmpty().
//  0x04 AtRate() R/W Word I2 –32768 32767 0
//  mA
//  10 mW
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mA.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mW.
//  readWord("AtRate", "mA/10mW", 0x04, -32768, 32767, 0);

//  14.6 0x05 AtRateTimeToFull()
//  This word read function returns the remaining time-to-fully charge the battery stack.
//  0x05 AtRateTimeToFull() R Word U2 0 65535 min
//  NOTE: 65535 indicates not being charged.
//  readWord("AtRateTimeToFull", "min", 0x05, 0, 65535, 0);

//  14.7 0x06 AtRateTimeToEmpty()
//  This word read function returns the remaining time-to-fully discharge the battery stack.
//  0x06 AtRateTimeToEmpty() R Word U2 0 65535 min
//  NOTE: 65535 indicates not being charged.
//  readWord("AtRateTimeToEmpty", "min", 0x06, 0, 65535, 0);

//  14.8 0x07 AtRateOK()
//  This read-word function returns a Boolean value that indicates whether the battery can deliver AtRate() for
//  at least 10 s.
//  0x07 AtRateOK() R Word U2 0 65535 —
//  NOTE: 0 = False. The gauge cannot deliver energy for 10 s, based on the discharge rate indicated
//  in AtRate().
//  > than 0 = True. The gauge can deliver energy for 10 s, based on the discharge rate
//  indicated in AtRate().
//  readWord("AtRateOK", "0.1°K", 0x07, 0, 65535, 0);

//  14.9 0x08 Temperature()
//  This read-word function returns the temperature in units 0.1°K.
//  0x08 Temperature() R Word U2 0 65535 0.1°K
//  readWord("Temperature", "0.1°K", 0x08, 0, 65535, 0);

//  14.10 0x09 Voltage()
//  This read-word function returns the sum of the measured cell voltages.
//  0x09 Voltage() R Word U2 0 65535 mV
//  readWord("Voltage", "mV", 0x09, 0, 65535, 0);
//  readWord("Current", "mA", 0x0A, -32767, 32768, 0);

//  14.11 0x0A Current()
//  This read-word function returns the measured current from the coulomb counter. If the input to the device
//  exceeds the maximum value, the value is clamped at the maximum and does not roll over.
//  0x0A Current() R Word I2 –32767 32768 mA
//  readWord("AverageCurrent", "mA", 0x0B, -32767, 32768, 0);

//  14.12 0x0B AverageCurrent()
//  0x0B AverageCurrent() R Word I2 –32767 32768 mA
//  readWord("AverageCurrent", "mA", 0x0B, -32767, 32768, 0);

//  14.13 0x0C MaxError()
//  This read-word function returns the expected margin of error, in %, in the state-of-charge calculation with
//  a range of 1 to 100%.
//  readWord("MaxError", "%", 0x0C, 0, 100, 0);

//  0x0C MaxError() R Word U1 0 100 %
//  Condition Action
//  Full device reset MaxError() = 100%
//  RA-table only updated MaxError() = 5%
//  QMax only updated MaxError() = 3%
//  RA-table and QMax updated MaxError() = 1%
//  Each CycleCount() increment after last valid QMax update MaxError() increment by 0.05%
//  The Configuration:Max Error Time Cycle Equivalent period passed
//  since the last valid QMax update
//  MaxError() increment by 0.05%.

//  14.14 0x0D RelativeStateOfCharge()
//  This read-word function returns the predicted remaining battery capacity as a percentage of
//  FullChargeCapacity().
//  0x0D RelativeStateOfCharge() R Word U1 0 100 %
//  readWord("RelativeStateOfCharge", "%", 0x0D, 0, 100, 0);

//  14.15 0x0E AbsoluteStateOfCharge()
//  This read-word function returns the predicted remaining battery capacity as a percentage.
//  0x0E AbsoluteStateOfCharge() R Word U1 0 100 %
//  readWord("AbsoluteStateOfCharge", "%", 0x0E, 0, 100, 0);

//  14.16 0x0F RemainingCapacity()
//  This read-word function returns the predicted remaining battery capacity.
//  0x0F RemainingCapacity() R R R Word U2 0 65535
//  mAh
//  10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
//  readWord("RemainingCapacity", "mAh/10 mWh", 0x0F, 0, 65535, 0);

//  14.17 0x10 FullChargeCapacity()
//  This read-word function returns the predicted battery capacity when fully charged. The value returned will
//  not be updated during charging.
//  0x10 FullChargeCapacity() R R R Word U2 0 65535
//  mAh
//  10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
//  readWord("FullChargeCapacity", "mAh/10 mWh", 0x10, 0, 65535, 0);

//  14.18 0x11 RunTimeToEmpty()
//  This read-word function returns the predicted remaining battery capacity based on the present rate of
//  discharge.
//  0x11 RunTimeToEmpty() R R R Word U2 0 65535 min
//  NOTE: 65535 = Battery is not being discharged.
//  readWord("RunTimeToEmpty", "min", 0x11, 0, 65535, 0);

//  14.19 0x12 AverageTimeToEmpty()
//  This read-word function returns the predicted remaining battery capacity based on AverageCurrent().
//  0x12 AverageTimeToEmpty() R R R Word U2 0 65535 min
//  NOTE: 65535 = Battery is not being discharged.
//  readWord("AverageTimeToEmpty", "min", 0x12, 0, 65535, 0);

//  14.20 0x13 AverageTimeToFull()
//  This read-word function returns the predicted time-to-full charge based on AverageCurrent().
//  0x13 AverageTimeToFull() R R R Word U2 0 65535 min
//  NOTE: 65535 = Battery is not being discharged.
//  readWord("AverageTimeToFull", "min", 0x13, 0, 65535, 0);

//  14.21 0x14 ChargingCurrent()
//  This read-word function returns the desired charging current.
//  0x14 ChargingCurrent() R R R Word U2 0 65535 mA
//  NOTE: 65535 = Request maximum current
//  readWord("ChargingCurrent", "mA", 0x14, 0, 65535, 0);

//  14.22 0x15 ChargingVoltage()
//  This read-word function returns the desired charging voltage.
//  0x15 ChargingVoltage() R R R Word U2 0 65535 mV
//  NOTE: 65535 = Request maximum voltage
//  readWord("ChargingVoltage", "mV", 0x15, 0, 65535, 0);

//  14.23 0x16 BatteryStatus()
//  This read-word function returns various battery status information.
//  readWord("BatteryStatus", "", 0x16, 0, 65535, 0);

//  0x16 BatteryStatus() R R R Word H2 — —
//  15 14 13 12 11 10 9 8
//  OCA TCA RSVD OTA TDA RSVD RCA RTA
//  7 6 5 4 3 2 1 0
//  INIT DSG FC FD EC3 EC2 EC1 EC0
//  OCA [15): Overcharged Alarm
//  TCA [14): Terminate Charge Alarm
//  RSVD [13): Undefined
//  OTA [12): Overtemperature Alarm
//  TDA [11): Terminate Discharge Alarm
//  RSVD [10): Undefined
//  RCA [9): Remaining Capacity Alarm
//  1 = RemainingCapacity() < RemainingCapacityAlarm() when in DISCHARGE or RELAX mode
//  0 = RemainingCapacity() ≥ RemainingCapacityAlarm()
//  RTA [8): Remaining Time Alarm
//  1 = AverageTimeToEmpty() < RemainingTimeAlarm() or
//  0 = AverageTimeToEmpty() ≥ RemainingTimeAlarm()
//  INIT [7): Initialization
//  1 = Gauge initialization is complete.
//  0 = Initialization is in progress.
//  DSG [6): Discharging or Relax
//  1 = Battery is in DISCHARGE or RELAX mode.
//  0 = Battery is in CHARGE mode.
//  FC [5): Fully Charged
//  1 = Battery fully charged when GaugingStatus()[FC] = 1
//  0 = Battery not fully charged
//  FD [4): Fully Discharged
//  1 = Battery fully depleted
//  0 = Battery not depleted
//  EC3,EC2,EC1,EC0 (Bits 3–0): Error Code
//  0x0 = OK
//  0x1 = Busy
//  0x2 = Reserved Command
//  0x3 = Unsupported Command
//  0x4 = AccessDenied
//  0x5 = Overflow/Underflow
//  0x6 = BadSize
//  0x7 = UnknownError

//  14.24 0x17 CycleCount()
//  This read-word function returns the number of discharge cycles the battery has experienced. The default
//  value is stored in the data flash value Cycle Count, which is updated in runtime.
//  0x17 CycleCount() R R/W R/W Word U2 0 65535 cycles
//  readWord("CycleCount", "cycles", 0x17, 0, 65535, 0);

//  14.25 0x18 DesignCapacity()
//  This read-word function returns the theoretical pack capacity. The default value is stored in the data flash
//  value Design Capacity mAh or Design Capacity cWh.
//  readWord("DesignCapacity", "mAh/10 mWh", 0x18, 65535, 0, (data[4] & 0x40) > 0);

//  0x18 DesignCapacity() R R/W R/W Word U2 0 65535
//  4400 mAh
//  6336 10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.

//  14.26 0x19 DesignVoltage()
//  This read-word function returns the theoretical pack voltage. The default value is stored in data flash value
//  Design Voltage.
//  0x19 DesignVoltage() R R/W R/W Word U2 7000 18000 14400 mV
//  readWord("DesignVoltage", "mV", 0x19, 7000, 18000, 14400);

//  14.27 0x1A SpecificationInfo()
//  0x1A SpecificationInfo() R R/W R/W Word H2 0x0000 0xFFFF
//  15 14 13 12 11 10 9 8
//  IPScale IPScale IPScale IPScale VScale VScale VScale VScale
//  7 6 5 4 3 2 1 0
//  Version Version Version Version Revision Revision Revision Revision
//  IPScale (Bits 15–12): IP Scale Factor
//  Not supported by the gas gauge
//  MUST be set to 0, 0, 0, 0.
//  VScale (Bits 11–8): Voltage Scale Factor
//  Not supported by the gas gauge
//  MUST be set to 0, 0, 0, 0.
//  Version (Bits 7–4): Version
//  0,0,0,1 = Version 1.0
//  0,0,1,1 = Version 1.1
//  0,0,1,1 = Version 1.1 with optional PEC support
//  Revision (Bits 3–0): Revision
//  0,0,0,1 = Version 1.0 and 1.1 (default)

//  14.28 0x1B ManufacturerDate()
//  This read-word function returns the pack's manufacturer date.
//  0x1B ManufacturerDate() R R/W R/W Word U2 65535 0
//  NOTE: ManufacturerDate() value in the following format: Day + Month*32 + (Year–1980)*512
    readWord("ManufacturerDate", "", 0x1B, 0, 65535, 0);

//  14.29 0x1C SerialNumber()
//  This read-word function returns the assigned pack serial number.
//  0x1C SerialNumber() R R/W R/W Word H2 0x0000 0xFFFF 0x0001
//  readWord("SerialNumber", "", 0x1C, 0x0000, 0xFFFF, 0x0001);

//  14.30 0x20 ManufacturerName()
//  This read-block function returns the pack manufacturer's name.
//  0x20 ManufacturerName() R R R Block S20+1 — — Texas Inst. ASCII
//  readWord("ManufacturerName", "ASCII", 0x20, 0, 0, 0);

//  14.31 0x21 DeviceName()
//  This read-block function returns the assigned pack name.
//  0x21 DeviceName() R R R Block S20+1 — — bq40z50-R2 ASCII
//  readWord("DeviceName", "ASCII", 0x21, 0, 0 ,0);

//  14.32 0x22 DeviceChemistry()
//  This read-block function returns the battery chemistry used in the pack.
//  0x22 DeviceChemistry() R R R Block S4+1 — — LION ASCII
//  readWord("DeviceChemistry", "ASCII", 0x22, 0, 0, 0);

//  14.33 0x23 ManufacturerData()
//  This read-block function returns ManufacturerInfo by default. The command also returns a response to
//  MAC command in order to maintain compatibility of the MAC system in bq30zxy family.
//  0x23 ManufacturerData() R R R Block Mixed — — —
//  readWord("ManufacturerData()/CalibrationData", "", 0x23, 0, 0, 0);

//  14.34 0x2F Authenticate()
//  This read/write block function provides SHA-1 authentication to send the challenge and read the response
//  in the default mode. It is also used to input a new authentication key when the MAC AuthenticationKey() is
//  used.
//  0x2F Authenticate() R/W R/W R/W Block H20+1 — — —
//  readWord("Authenticate()/ManufacturerInput()", "", 0x2F, 0, 0, 0);

//  14.35 0x3C CellVoltage4()
//  This read-word function returns the Cell 4 voltage.
//  0x3C CellVoltage4() R R R Word U2 — 65535 0 mV
//  readWord("CellVoltage4", "mV", 0x3C, 0, 65535, 0);

//  14.36 0x3D CellVoltage3()
//  This read-word function returns the Cell 3 voltage.
//  0x3D CellVoltage3() R R R Word U2 — 65535 0 mV
//  readWord("CellVoltage3", "mV", 0x3D, 0, 65535, 0);

//  14.37 0x3E CellVoltage2()
//  This read-word function returns the Cell 2 voltage.
//  0x3E CellVoltage2() R R R Word U2 — 65535 0 mV
//  readWord("CellVoltage2", "mV", 0x3E, 0, 65535, 0);

//  14.38 0x3F CellVoltage1()
//  This read-word function returns the Cell 1 voltage.
//  0x3F CellVoltage1() R R R Word U2 — 65535 0 mV
//  readWord("CellVoltage1", "mV", 0x3F, 0, 65535, 0);

//  14.39 0x4A BTPDischargeSet()
//  This read/write word command updates the BTP set threshold for DISCHARGE mode for the next BTP
//  interrupt, deasserts the present BTP interrupt, and clears the OperationStatus()[BTP_INT] bit.
//  0x4A BTPDischargeSet() R/W R/W R/W Signed Int 2 — 65535 150 mAh
//  readWord("InitDischargeSet", "mAh", 0x4A, 0, 65535, 150);

//  14.40 0x4B BTPChargeSet()
//  The read/write word command updates the BTP set threshold for CHARGE mode for the next BTP
//  interrupt, deasserts the present BTP interrupt, and clears the OperationStatus()[BTP_INT] bit.
//  0x4B BTPChargeSet() R/W R/W R/W Signed Int 2 — 65535 175 mAh
//  readWord("InitChargeSet", "mAh", 0x4B, 0, 65535, 175);

//  14.41 0x4F State-of-Health (SOH)
//  This read word command returns the SOH information of the battery in percentage of Design Capacity
//  and Design Energy.
//  readWord("State of Health", "%", 0x4F, 0, 0, 0);

//  14.42 0x50 SafetyAlert
//  This command returns the SafetyAlert() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x50 SafetyAlert() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
    readWord("SafetyAlert", "", 0x50, 0x00000000, 0xFFFFFFFF, 0);


//  14.43 0x51 SafetyStatus
//  This command returns the SafetyStatus() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x51 SafetyStatus() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
//  readWord("SafetyStatus", "", 0x51, 0, 0x00000000, 0xFFFFFFFF);


//  14.44 0x52 PFAlert
//  This command returns the PFAlert() flags. For a description of each bit flag, see the ManufacturerAccess()
//  version of the same command in Section 14.1.
//  0x52 PFAlert() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
//  readWord("PFAlert", "", 0x52, 0x00000000, 0xFFFFFFFF, 0);

//  14.45 0x53 PFStatus
//  This command returns the PFStatus() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x53 PFStatus() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
//  readWord("PFStatus", "", 0x53, 0x00000000, 0xFFFFFFFF, 0);

//  14.46 0x54 OperationStatus
//  This command returns the OperationStatus() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x54 OperationStatus() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
//  readWord("OperationStatus", "", 0x54, 0x00000000, 0xFFFFFFFF, 0);

//  14.47 0x55 ChargingStatus
//  This command returns the ChargingStatus() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x55 ChargingStatus() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
//  readWord("ChargingStatus", "", 0x55, 0x00000000, 0xFFFFFFFF, 0);

//  14.48 0x56 GaugingStatus
//  This command returns the GaugingStatus() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x56 GaugingStatus() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
//  readWord("GaugingStatus", "", 0x56, 0x00000000, 0xFFFFFFFF, 0);

//  14.49 0x57 ManufacturingStatus
//  This command returns the ManufacturingStatus() flags. For a description of each bit flag, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x57 ManufacturingStatus() — R R Block H4 0x000000
//  00
//  0xFFFFF
//  FFF — —
    readWord("ManufacturingStatus", "", 0x57, 0x00000000, 0xFFFFFFFF, 0);

//  14.50 0x58 AFE Register
//  This command returns a snapshot of the AFE register settings. For a description of returned data values,
//  see the ManufacturerAccess() version of the same command in Section 14.1.
//  0x58 AFERegister() — R R Block — — — — —
//  readWord("AFERegister", "", 0x58, 0, 0, 0);

//  14.51 0x59 MaxTurboPwr()
//  This command reads the maximal peak power value for 10-ms pulse occurring on top of 10-s 2 C-rate
//  pulse.
//  0x59 MaxTurboPwr() R/W R/W R/W Word — — — — cW
//  readWord("TURBO_POWER", "cW", 0x59, 0, 0, 0);

//  14.52 0x5A SusTurboPwr()
//  This command reads the maximal peak power value for 10-s pulse, sustained turbo power, in cW.
//  0x5A SusTurboPwr() R/W R/W R/W Word — — — — cW
//  readWord("TURBO_FINAL", "cW", 0x59, 0, 0, 0);

//  14.53 0x5B TURBO_PACK_R
//  TURBO_PACK_R() sets the Pack Resistance value of the battery pack serial resistance, including
//  resistance associated with FETs, traces, sense resistors, and so on TURBO_PACK_R() accesses to the
//  data flash value Pack Resistance.
//  0x5B TURBO_PACK_R() R/W R/W R/W Word mΩ
//  readWord("TURBO_PACK_R", "mΩ", 0x5B, 0, 0, 0);

//  14.54 0x5C TURBO_SYS_R
//  TURBO_SYS_R() sets the System Resistance value of the system serial resistance along the path from
//  battery to system power converter input that includes FETs, traces, sense resistors, and so on
//  TURBO_SYS_R() accesses to the data flash value System Resistance.
//  0x5C TURBO_SYS_R() R/W R/W R/W Word mΩ
//  readWord("TURBO_SYS_R", "mΩ", 0x5C, 0, 0, 0);

//  14.55 0x5D TURBO_EDV
//  TURBO_EDV() sets the minimal voltage at the system power converter input at which the system will still
//  operate. TURBO_EDV() is written to the data flash value Terminate Voltage. Write it once on first use to
//  adjust for possible changes in system design from the time the battery pack was designed.
//  0x5D MIN_SYS_V() R/W R/W R/W Word mV
//  readWord("TURBO_EDV", "mV", 0x5D, 0, 0, 0);

//  14.56 0x5E MaxTurboCurr()
//  This command reads the maximal peak current value, max turbo current, in mA. The gauge computes a
//  new RAM value of max turbo current every second. Max turbo current is initialized to present the value of
//  max turbo current on reset or power up.
//  0x5E MaxTurboCurr() R/W R/W R/W Word — — — — mA
//  readWord("TURBO_CURRENT3", "mAh", 0x5E, 0, 0, 0);

//  14.57 0x5F SusTurboCurr()
//  This command reads the sustained peak current value, sustained turbo current, in mA. The gauge
//  computes a new RAM value sustained turbo current every second. Sustained turbo current is initialized to
//  the present value of max turbo current on reset or power up.
//  0x5F SusTurboCurr() — R/W R/W Word — — — — mA
//  readWord("SusTurboCurr", "mAh", 0x5F, 0, 0, 0);

//  14.58 0x60 Lifetime Data Block 1
//  This command returns the first block of Lifetime Data. For a description of returned data values, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x60 LifeTimeDataBlock1() — R R Block — — — — —
//  readWord("Lifetime Data Block 1", "", 0x60, 0, 0, 0);

//  14.59 0x61 Lifetime Data Block 2
//  This command returns the second block of Lifetime Data. For a description of returned data values, see
//  the ManufacturerAccess() version of the same command in Section 14.1.
//  0x61 LifeTimeDataBlock2() — R R Block — — — — —
    readWord("Lifetime Data Block 2", "", 0x61, 0, 0, 0);

//  14.60 0x62 Lifetime Data Block 3
//  This command returns the third block of Lifetime Data. For a description of returned data values, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  Protocol Type Min Max Default Unit
//  SE US FA
//  0x62 LifeTimeDataBlock3() — R R Block — — — — —
//  readWord("Lifetime Data Block 3", "", 0x62, 0, 0, 0);

//  14.61 0x63 Lifetime Data Block 4
//  This command returns the third block of Lifetime Data. For a description of returned data values, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x63 LifeTimeDataBlock4() — R R Block — — — — —
//  readWord("Lifetime Data Block 4", "", 0x63, 0, 0, 0);

//  14.62 0x64 Lifetime Data Block 5
//  This command returns the third block of Lifetime Data. For a description of returned data values, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x64 LifeTimeDataBlock5() — R R Block — — — — —
//  readWord("Lifetime Data Block 5", "", 0x64, 0, 0, 0);

//  14.63 0x70 ManufacturerInfo
//  This command returns manufacturer information. For a description of returned data values, see the
//  ManufacturerAccess() version of the same command in Section 14.1.
//  0x70 ManufacturerInfo() R R/W R/W Block — — — — —
//  readWord("ManufacturerInfo", "", 0x70, 0, 0, 0);

//  14.64 0x71 DAStatus1
//  This command returns the Cell Voltages, Pack Voltage, Bat Voltage, Cell Currents, Cell Powers, Power,
//  and Average Power. For a description of returned data values, see the ManufacturerAccess() version of
//  the same command in Section 14.1.
//  0x71 DAStatus1() — R R Block — — — — —
//  readWord("DAStatus1", "hex", 0x71, 0, 0, 0);

//  14.65 0x72 DAStatus2
//  This command returns the internal temperature sensor, TS1, TS2, TS3, TS4, Cell Temp, and FET Temp.
//  For a description of returned data values, see the ManufacturerAccess() version of the same command in
//  Section 14.1.
//  0x72 DAStatus2() — R R Block — — — — —
//  readWord("DAStatus2", "hex", 0x72, 0, 0, 0);

//  14.66 0x73 GaugeStatus1
//  This command instructs the device to return Impedance Track related gauging information. For a
//  description of returned data values, see the ManufacturerAccess() version of the same command in
//  Section 14.1.
//  0x73 GaugeStatus1() — R R Block — — — — —
//  readWord("GaugeStatus1", "hex", 0x73, 0, 0, 0);

//  14.67 0x74 GaugeStatus2
//  This command instructs the device to return Impedance Track related gauging information. For a
//  description of returned data values, see the ManufacturerAccess() version of the same command in
//  Section 14.1.
//  0x74 GaugeStatus2() — R R Block — — — — —
//  readWord("GaugeStatus2", "hex", 0x74, 0, 0, 0);

//  14.68 0x75 GaugeStatus3
//  This command instructs the device to return Impedance Track related gauging information. For a
//  description of returned data values, see the ManufacturerAccess() version of the same command in
//  Section 14.1.
//  0x75 GaugeStatus3() — R R Block — — — — —
//  readWord("GaugeStatus3", "hex", 0x75, 0, 0, 0);

//  14.69 0x76 CBStatus
//  This command instructs the device to return cell balance time information. For a description of returned
//  data values, see the ManufacturerAccess() version of the same command in Section 14.1.
//  0x76 CBStatus() — R R Block — — — — —
//  readWord("CBStatus", "", 0x76, 0, 0, 0);

//  14.70 0x77 State-of-Health
//  This command instructs the device to return the state-of-health full charge capacity and energy. For a
//  description of returned data values, see the ManufacturerAccess() version of the same command in
//  Section 14.1.
//  0x77 State-of-Health() — R R Block — — — —
//  readWord("CBStatus", "", 0x77, 0, 0, 0);

//  Seal device
//  n = mac_read(0x35, 8);

    printf("\nTotal number of SMBus reads         : = %d\n", numberofreads);
    printf("Total number of SMBus writes        : = %d\n", numberofwrites);
    printf("Total number of SMBus failed reads  : = %d\n", numberoffailedreads);
    printf("Total number of SMBus failed writes : = %d\n", numberoffailedwrites);

    printf("\nRun ended normally\n");

    gpioTerminate();

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("CPU time: %0.2f seconds\n", cpu_time_used);

    current_time = time(NULL);
    c_time_string = ctime(&current_time);
    printf("%s", c_time_string);

    return 0;
}
