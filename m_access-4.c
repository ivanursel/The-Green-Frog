//
//  Copyright 2016-2018 Ivo J. L. A. Van Ursel
//
//  v0.9a - 22/08/18 15:24
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
#define PI_BAD_SOCKET_PORT  -28  // socket port not 1024-32000
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

    printf("\n*** Texas Instruments bq40z60 status tool v0.9a - 22/08/18 15:24 ***\n\n");

    if (gpioInitialise() < 0) {
      printf("Failure: pigpio initialization failed\n");
      return -1;
    }
    else
    	printf("pigpio initialization OK\n");

    i2cHandle = i2cOpen(1, 0x0b, 0);

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
//  n = i2cWriteWordData(i2cHandle, 0x00, 0x30);
//  printf("%d\n", n);

// Operation Status
    n = mac_read(0x54, 4);
    sealed = data[4] & 0b00000011;

    switch (sealed) {
      case 3:
        printf("3: sealed\n");
        break;
      case 2:
        printf("2: unsealed\n");
        break;
      case 1:
        printf("1: full access\n");
        break;
      default:
        printf("%d\n", sealed);
        break;
    }

    while (i2cWriteWordData(i2cHandle, 0x00, 0x1991) < 0);
    while (i2cWriteWordData(i2cHandle, 0x00, 0x1609) < 0);
    while (i2cWriteWordData(i2cHandle, 0x00, 0x2014) < 0);
    while (i2cWriteWordData(i2cHandle, 0x00, 0x1310) < 0);
 
// Security Keys
    n = mac_read(0x35, 8);
    usleep(1000000);

    printf("Key 1 = 0x%04X\n", data[3] + (data[4] << 8));    // 0x1991
    printf("Key 2 = 0x%04X\n", data[5] + (data[6] << 8));    // 0x1609
    printf("Key 3 = 0x%04X\n", data[7] + (data[8] << 8));    // 0x2014
    printf("Key 4 = 0x%04X\n\n", data[9] + (data[10] << 8)); // 0x1310

//  11.1.1 ManufacturerAccess() 0x0000
//  A read word on this command returns the low word (16 bits) OperationStatus() data.
//  n = mac_read(0x0000, 2);
//  printf("0x0000 %-60s: 0x%02X\n", "", data[4] + (data[3] << 8));

//  printf("- SLEEP      [15] %-49s: %d\n", "Sleep mode conditions met", (data[4] & 0x80) > 0);
//  printf("- XCHG       [14] %-49s: %d\n", "Charging disabled", (data[4] & 0x40) > 0);
//  printf("- XDSG       [13] %-49s: %d\n", "Discharging disabled", (data[4] & 0x20) > 0);
//  printf("- PF         [12] %-49s: %d\n", "Permanent Fault mode", (data[4] & 0x10) > 0);
//  printf("- SS         [11] %-49s: %d\n", "Safety mode", (data[4] & 0x08) > 0);
//  printf("- SDV        [10] %-49s: %d\n", "Shutdown triggered via low pack voltage", (data[4] & 0x04) > 0);
//  printf("- SEC[1]     [9]  %-49s: %d\n", "Security Status", (data[4] & 0x02) > 0);
//  printf("- SEC[0]     [8]  %-49s: %d\n", "Security Status", (data[4] & 0x01) > 0);
//  printf("- BTP_INT    [7]  %-49s: %d\n", "Battery Trip Point interrupt", (data[3] & 0x80) > 0)
//  printf("- ACLW       [6]  %-49s: %d\n", "AC Voltage below threshold", (data[3] & 0x40) > 0);
//  printf("- FUSE       [5]  %-49s: %d\n", "Fuse status", (data[3] & 0x20) > 0);
//  printf("- ACFET      [4]  %-49s: %d\n", "AC FET status", (data[3] & 0x10) > 0);
//  printf("- PCHG       [3]  %-49s: %d\n", "Pre-charge FET status", (data[3] & 0x08) > 0);
//  printf("- CHG        [2]  %-49s: %d\n", "Charge FET status", (data[3] & 0x04) > 0);
//  printf("- DSG        [1]  %-49s: %d\n", "Discharge FET status", (data[3] & 0x02) > 0);
//  printf("- PRES       [0]  %-49s: %d\n\n", "System Present", (data[3] & 0x01) > 0);

//  11.1.2 ManufacturerAccess() 0x0001 Device Type
//  The device can be checked for the IC part number via this command that returns 2 bytes in Little Endian.
//  n = mac_read(0x0001, 2);
//  printf("0x0001 %-60s: 0x%04X\n", "Device Type", data[4] + (data[3] << 8));

//  11.1.3 ManufacturerAccess() 0x0002 Firmware Version
//  The device can be checked for the firmware version of the IC via this command that returns 11 bytes.
//  n = mac_read(0x0002, 11);

//  printf("- [1:0]  %-58s: 0x%04X\n", "Device Number", data[4] + (data[3] << 8));
//  printf("- [3:2]  %-58s: 0x%04X\n", "Version", data[6] + (data[5] << 8));
//  printf("- [5:4]  %-58s: 0x%04X\n", "Build Number", data[8] + (data[7] << 8));
//  printf("- [6]    %-58s: 0x%02X\n", "Firmware Type", data[9]);
//  printf("- [8:7]  %-58s: 0x%04X\n", "Impedance Track Version", data[11] + (data[10] << 8));
//  printf("- [9]    %-58s: 0x%02X\n", "Reserved - Do not use", data[12]);
//  printf("- [10]   %-58s: 0x%02X\n\n", "Reserved - Do not use", data[13]);

//  11.1.4 ManufacturerAccess() 0x0003 Hardware Version
//  The hardware revision is returned on a subsequent read.
//  n = mac_read(0x0003, 2);
//  printf("0x0003 %-60s: 0x%04X\n", "Hardware Version", data[4] + (data[3] << 8));

//  11.1.5 ManufacturerAccess() 0x0004 Instruction Flash Signature
//  The IF signature returns on a subsequent read after a wait time of 250 ms.
//  n = mac_read(0x0004, 2);
//  printf("0x0004 %-60s: 0x%02X\n", "Instruction Flash Signature", data[4] + (data[3] << 8));

//  11.1.6 ManufacturerAccess() 0x0005 Static DF Signature
//  The 2-byte signature of all static DF returns after a wait time of 250 ms.
//  NOTE: MSB is set to 1 if the calculated signature does not match the signature stored in DF.
//  n = mac_read(0x0005, 2);
//  printf("0x0005 %-60s: 0x%04X\n", "Static DF Signature", data[4] + (data[3] << 8));

//  11.1.7 ManufacturerAccess() 0x0006 Chemical ID
//  The 2 byte chemical ID of the OCV tables used in the gauging algorithm is returned.
//  n = mac_read(0x0006, 2);
//  printf("0x0006 %-60s: 0x%04X\n", "Chemical ID", data[4] + (data[3] << 8));

//  11.1.8 ManufacturerAccess() 0x0008 Static Chem DF Signature
//  The 2-byte signature of all static chemistry DF returns after a wait time of 250 ms.
//  NOTE: MSB is set to 1 if the calculated signature does not match the signature stored in DF.
//  n = mac_read(0x0008, 2);
//  printf("0x0008 %-60s: 0x%04X\n", "Static Chem DF Signature", data[4] + (data[3] << 8));

//  11.1.9 ManufacturerAccess() 0x0009 All DF Signature
//  The 2-byte signature of all DF parameters returns after a wait time of 250 ms.
//  NOTE: MSB is set to 1 if the calculated signature does not match the signature stored in DF, but it
//  is normally expected that this signature will change due to update of lifetime, gauging, and
//  other information.
//  n = mac_read(0x0009, 2);
//  printf("0x0009 %-60s: 0x%04X\n", "All DF Signature", data[4] + (data[3] << 8));

/* This is no-mans-land, keep out! */
/*  Wolfijzers en schietgeweren!   */

//  11.1.10 ManufacturerAccess() 0x0010 SHUTDOWN Mode
//  To reduce power consumption, the device can be sent to SHUTDOWN mode before shipping. After
//  sending this command, OperationStatus()[SDM] sets to 1, an internal counter will start and the CHG and
//  s will be turned off when the counter reaches Ship FET Off Time. When the counter reaches
//  Ship Delay time, the device will enter SHUTDOWN mode if no charger is detected.
//  If the device is sealed, this feature requires the command to be sent twice in a row within 4 seconds (for
//  safety purposes).
//  To wake up the device, a voltage > Charger Present Threshold must apply to the VACP pin. The device
//  will power up and a full reset is applied.
//  n = mac_read(0x0010, 2);
//  printf("0x0010 %-60s: 0x%02X\n", "SHUTDOWN Mode", data[4] + (data[3] << 8));

//  11.1.11 ManufacturerAccess() 0x0011 SLEEP Mode
//  If the sleep conditions are met, the device can be sent to sleep with ManufacturerAccess().
//  n = mac_read(0x0011, 2);
//  printf("0x0011 %-60s: 0x%02X\n", "SLEEP Mode", data[4] + (data[3] << 8));

//  STATUS CONDITION ACTION
//  Enable 0x0011 to ManufacturerAccess() OperationStatus()[SLEEPM] = 1
//  Activate
//  DA Configuration[NR] = 0 AND
//  OperationStatus()[PRES] = 0 AND
//  | Current() | < Power:Sleep Current
//  Turn off CHG FET, DSG FET, PCHG FET
//  Device goes to sleep.
//  Device wakes up every Power:Sleep Voltage Time period to measure voltage
//  and temperature.
//  Device wakes up every Power:Sleep Current Time period to measure current.
//  Activate DA Configuration[NR] = 1 AND
//  | Current() | < Power:Sleep Current
//  Turn off DSG FET, PCHG FET
//  Turn off CHG FET
//  Device goes to sleep.
//  Device wakes up every Power:Sleep Voltage Time period to measure voltage and
//  temperature.
//  Device wakes up every Power:Sleep Current Time period to measure current.
//  Exit DA Configuration[NR] = 0 AND
//  OperationStatus()[PRES] = 1
//  OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  Exit | Current() | > Configuration:Sleep Current OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  Exit Wake Comparator trips OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode
//  Exit SafetyAlert()flag or PFAlert() flag set OperationStatus()[SLEEPM] = 0
//  Return to NORMAL mode

//  11.1.12 ManufacturerAccess() 0x0013 AutoCCOfset
//  This command manually starts an Auto CC Offset calibration, which takes approximately 16 s. After
//  completion this value is updated to CC Auto Offset and is used for cell current measurement. The cell
//  current measurement is a current measurement taken simultaneously as the cell voltage measurement.
//  n = mac_read(0x0013, 2);
//  printf("0x0013 %-60s: 0x%02X\n", "AutoCCOfset", data[4] + (data[3] << 8));

//  11.1.13 ManufacturerAccess() 0x001D Fuse Toggle
//  This command manually activates/deactivates the FUSE output for testing during manufacturing. If
//  OperationStatus()[FUSE] = 0, indicating the FUSE output is low, sending this command toggles the FUSE
//  output to be high, and OperationStatus()[FUSE] is set to 1. OperationStatus()[FUSE] will be cleared to 0 if
//  this command is sent when OperationStatus()[FUSE] is 1.
//  n = mac_read(0x001D, 2);
//  printf("0x001D %-60s: 0x%02X\n", "Fuse Toggle", data[4] + (data[3] << 8));

//  11.1.14 ManufacturerAccess() 0x001E PCHG FET Toggle
//  This command turns on/off PCHG FET drive function for testing during manufacturing. If
//  ManufacturingStatus[PCHG_TEST] = 0, sending this command will turn on the PCHG FET and set
//  ManufacturingStatus[PCHG_TEST] to 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus[FET_EN] = 0, indicating a FW FET control is not active and manual control is
//  allowed. A reset clears the ManufacturingStatus[PCHG_TEST] flag to 0 and turns off the PCHG FET.
//  n = mac_read(0x001E, 4);
//  printf("0x001E %-60s: 0x%08X\n", "PCHG FET Toggle", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.15 ManufacturerAccess() 0x001F CHG FET Toggle
//  This command turns on/off CHG FET drive function for testing during manufacturing. If
//  ManufacturingStatus[CHG_TEST] = 0, sending this command turns on the CHG FET and
//  ManufacturingStatus[CHG_TEST] is set to 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus[FET_EN] = 0, indicating a FW FET control is not active and manual control is
//  allowed. A reset clearsManufacturingStatus[CHG_TEST] flag to 0 and turns off the CHG FET.
//  n = mac_read(0x001F, 4);
//  printf("0x001F %-60s: 0x%08X\n", "CHG FET Toggle", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.16 ManufacturerAccess() 0x0020 DSG FET Toggle
//  This command turns on/off DSG FET drive function for testing during manufacturing. If the
//  ManufacturingStatus[DSG_TEST] = 0, sending this command turns on the DSG FET and the
//  ManufacturingStatus[DSG_TEST] = 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus[FET_EN] = 0, indicating a FW FET control is not active and manual control is
//  allowed. A reset clears the ManufacturingStatus[DSG_TEST] flag to 0 and turns off the DSG FET.
//  n = mac_read(0x0020, 4);
//  printf("0x0020 %-60s: 0x%08X\n", "DSG FET Toggle", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.17 ManufacturerAccess() 0x0021 Gauging
//  This command enables or disables the gauging function for testing during manufacturing. The initial
//  setting is loaded from MfgStatusInit[GAUGE_EN]. If ManufacturingStatus[GAUGE_EN] = 0, sending this
//  command will enable gauging and ManufacturingStatus[GAUGE_EN] is set to 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus[GAUGE_EN] status is copied to
//  MfgStatusInit[GAUGE_EN] on a reset. Therefore, the device remains on its latest gauging status prior to a
//  reset.
//  n = mac_read(0x0021, 4);
//  printf("0x0021 %-60s: 0x%08X\n", "Gauging", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.18 ManufacturerAccess() 0x0022 FET Control
//  This command disables/enables control of the CHG, DSG, and PCHG FET by the firmware. The initial
//  setting is loaded from MfgStatusInit[FET_EN]. If ManufacturingStatus[FET_EN] = 0, sending this
//  command allows the FW to control the PCHG, CHG, and DSG FETs and the
//  ManufacturingStatus[FET_EN] is set to 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus[FET_EN] status is copied to MfgStatusInit[FET_EN] on a
//  reset. Hence, the device will remain on its latest FET control status prior to a reset.
//  n = mac_read(0x0022, 4);
//  printf("0x0022 %-60s: 0x%08X\n", "FET Control", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.19 ManufacturerAccess() 0x0023 Lifetime Data Collection
//  This command disables/enables Lifetime data collection to help streamline production testing. The initial
//  setting is loaded from MfgStatusInit[LF_EN]. If the ManufacturingStatus[LF_EN] = 0, sending this
//  command starts the Lifetime Data collection and ManufacturingStatus[LF_EN] is set to 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus[LF_EN] status is copied to MfgStatusInit[LF_EN] on a
//  reset. Therefore, the device remains on its latest Lifetime Data Collection setting prior to a reset.
//  n = mac_read(0x0023, 4);
//  printf("0x0023 %-60s: 0x%08X\n", "Lifetime Data Collection", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.20 ManufacturerAccess() 0x0024 Permanent Failure
//  This command disables/enables Permanent Failure to help streamline production testing.
//  The initial setting is loaded from MfgStatusInit[PF_EN]. If ManufacturingStatus[PF_EN] = 0, sending this
//  command enables Permanent Failure protections and ManufacturingStatus[PF_EN] is set to 1 and vice versa.
//  In UNSEALED mode, ManufacturingStatus[PF_EN] status is copied to MfgStatusInit[PF_EN] on a reset.
//  Therefore, the device remains at its PF enable/disable setting prior to a reset.
//  n = mac_read(0x0024, 4);
//  printf("0x0024 %-60s: 0x%08X\n", "Permanent Failure", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.21 ManufacturerAccess() 0x0025 Black Box Recorder
//  This command enables/disables black box recorder function to help streamline production testing. The
//  initial setting is loaded from MfgStatusInit[BBR_EN]. If ManufacturingStatus[BBR_EN] = 0, sending this
//  command enables the Black Box Recorder and ManufacturingStatus[BBR_EN] is set to 1 and vice versa.
//  In UNSEALED mode, the ManufacturingStatus[BBR_EN] status is copied to MfgStatusInit[BBR_EN] on a
//  reset. Therefore, the device remains on its latest Black Box Recorder enable/disable setting prior to a
//  reset.
//  n = mac_read(0x0025, 4);
//  printf("0x0025 %-60s: 0x%08X\n", "Black Box Recorder", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.22 ManufacturerAccess() 0x0026 Fuse
//  This command disables/enables firmware-based fuse activation for testing during manufacturing. The
//  initial setting is loaded from MfgStatusInit[FUSE_EN]. If ManufacturingStatus[FUSE_EN] = 0, sending this
//  command allows the FW to control the FUSE output and the ManufacturingStatus[FUSE_EN] is set to 1
//  and vice versa.
//  In UNSEALED mode, the ManufacturingStatus[FUSE_EN] status is copied to MfgStatusInit[FUSE_EN] on
//  a reset. Therefore, the device remains on its latest Fuse Control setting prior to a reset.
//  n = mac_read(0x0026, 4);
//  printf("0x0026 %-60s: 0x%08X\n", "Fuse", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.23 ManufacturerAccess() 0x0027 LED DISPLAY Enable
//  This command enables or disables the LED display function to ease testing during manufacturing. The
//  initial setting is loaded from MfgStatusInit[LED_EN]. If the ManufacturingStatus[LED_EN] = 0, sending this
//  command will enable LED display and the ManufacturingStatus[LED_EN] = 1 and vice versa. In
//  UNSEALED mode, the ManufacturingStatus[LED_EN] status is copied to MfgStatusInit[LED_EN] on a
//  reset. Therefore, the device remains to its latest setting prior to a reset.
//  n = mac_read(0x0027, 4);
//  printf("0x0027 %-60s: 0x%08X\n", "LED DISPLAY Enable", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.24 ManufacturerAccess() 0x0028 Lifetime Data Reset
//  If ManufacturingStatus[LF_EN] = 1, sending this command resets Lifetime data in data flash to help
//  streamline production testing.
//  n = mac_read(0x0028, 4);
//  printf("0x0028 %-60s: 0x%08X\n", "Lifetime Data Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.25 ManufacturerAccess() 0x0029 Permanent Fail Data Reset
//  If ManufacturerAccess[PF_EN] = 1, sending this command resets PF data in data flash to help streamline production testing.
//  n = mac_read(0x0029, 4);
//  printf("0x0029 %-60s: 0x%08X\n", "Permanent Fail Data Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.26 ManufacturerAccess() 0x002A Black Box Recorder Reset
//  If ManufacturingStatus[BBR_EN] = 1, sending this command resets the black box recorder data in data
//  flash to help streamline production testing.
//  n = mac_read(0x002A, 4);
//  printf("0x002A %-60s: 0x%08X\n", "Black Box Recorder Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.27 ManufacturerAccess() 0x002B LED TOGGLE
//  This command toggles the LED display on or off to help streamline testing during manufacturing. When
//  the LED display is off, the OperationStatus[LED] = 0. Sending this command turns on all LED displays
//  with OperationStatus[LED] set to 1, and vice versa.
//  n = mac_read(0x002B, 4);
//  printf("0x002B %-60s: 0x%08X\n", "LED TOGGLE", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.28 ManufacturerAccess() 0x002C LED DISPLAY PRESS
//  This command simulates a low-high-low detection of the DISP pin, activating the LED display according to
//  the LED Support data flash setting.
//  n = mac_read(0x002C, 2);
//  printf("0x002C %-60s: 0x%02X\n", "LED DISPLAY PRESS", data[4] + (data[3] << 8));

//  11.1.29 ManufacturerAccess() 0x002D CALIBRATION Mode
//  This command disables/enables entry into CALIBRATION mode. Status is indicated by the
//  ManufacturingStatus()[CAL_EN] flag. CALIBRATION mode is disabled upon a reset.
//  n = mac_read(0x002D, 4);
//  printf("0x002D %-60s: 0x%08X\n", "CALIBRATION Mode", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  STATUS CONDITION ACTION
//  Disable ManufacturingStatus()[CAL_EN] = 1 AND
//  0x002D to ManufacturerAccess()
//  ManufacturingStatus()[CAL_EN] = 0
//  Disable output of ADC and CC raw data on ManufacturingData()
//  Enable ManufacturingStatus()[CAL_EN] = 0 AND
//  0x002D to ManufacturerAccess()
//  ManufacturingStatus()[CAL_EN] = 1
//  Enable output of ADC and CC raw data on ManufacturingData(),
//  controllable with 0xF081 and 0xF082 on ManufacturerAccess()

//  11.1.30 ManufacturerAccess() 0x002E Lifetime Data Flash
//  This command flushes the RAM lifetime data-to-data flash to help streamline evaluation testing.
//  n = mac_read(0x002E, 4);
//  printf("0x002E %-60s: 0x%08X\n", "Lifetime Data Flash", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.31 ManufacturerAccess() 0x002F Lifetime Data SPEED UP Mode
//  Lifetime Data generally updates at 10-hr intervals. For ease of evaluation testing, this command enables a
//  lifetime SPEED UP mode, and Lifetime Data will be updated approximately every 5 s. When the lifetime
//  SPEED UP mode is enabled, ManufacturingStatus[LT_TEST] = 1.
//  To disable SPEED UP mode, send the command again.
//  n = mac_read(0x002F, 4);
//  printf("0x002F %-60s: 0x%08X\n", "Lifetime Data SPEED UP Mode", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.32 ManufacturerAccess() 0x0030 Seal Device
//  This command seals the device for the field, disabling certain SBS commands and access to data flash.
//  See the SBS commands description for details.
//  When the device is sealed, OperationStatus()[SEC1, SEC0] = 2'b11.
//  n = mac_read(0x0030, 4);
//  printf("0x0030 %-60s: 0x%08X\n", "Seal Device", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.33 ManufacturerAccess() 0x0035 Security Keys
//  This is a read/write command for the 8 bytes of UNSEAL and FULL ACCESS keys.
//  When reading the keys, data can be read from ManufacturerData() or Alternate ManufacturerAccess().
//  The keys are return in the following format: aaAAbbBBccCCddDD, where:
//  n = mac_read(0x0035, 8);
//  printf("0x0035 %-60s: 0x%08X\n", "Security Keys", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- [1:0]  %-58s: 0x%04X\n", "First word of the UNSEAL key", data[4] + (data[3] << 8));
//  printf("- [3:2]  %-58s: 0x%04X\n", "Second word of the UNSEAL key", data[6] + (data[5] << 8));
//  printf("- [5:4]  %-58s: 0x%04X\n", "First word of the FULL ACCESS key", data[8] + (data[7] << 8));
//  printf("- [7:6]  %-58s: 0x%04X\n\n", "Second word of the FULL ACCESS key", data[10] + (data[9] << 8));

//  The default UNSEAL key is 0x0414 and 0x3672. The default FULL ACCESS key is 0xFFFF and 0xFFFF.
//  NOTE: It is highly recommend to change the UNSEAL and FULL ACCESS keys from default.
//  The keys can only be changed through the Alternate ManufacturerAccess().
//  The first word of the keys cannot be the same or match any existing MAC command. That
//  means an UNSEAL key with 0xABCD 0x1234 and FULL ACCESS key with 0xABCD 0x5678
//  are not valid because the first word is the same.

//  Example: Change UNSEAL key to 0x1234, 0x5678, and leave the FULL ACCESS as default.
//  Send an SMBus block write with Command = 0x44.
//  Data = MAC command + New UNSEAL key + New FULL ACCESS KEY
//  = 35 00 34 12 78 56 FF FF FF FF

//  11.1.34 ManufacturerAccess() 0x0037 Authentication Key
//  This command enters a new authentication key into the device.
//  n = mac_read(0x0037, 4);
//  printf("0x0037 %-60s: 0x%08X\n", "Authentication Key", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  STATUS CONDITION ACTION
//  Initiate OperationStatus()[SEC1,SEC0]= 0,1 AND
//  0x0037 to ManufacturerAccess()
//  OperationStatus()[AUTH]= 1
//  160-bit random number available at ManufacturerInput()
//  Enter Key Correct 128-bit Key written to ManufacturerInput() in LSB to
//  MSB format
//  Wait time 250 ms
//  OperationStatus()[AUTH] = 0
//  Device returns 160-bit HMAC digest at ManufacturerInput() in LSB to
//  MSB format. The HMAC digest was calculated using the random
//  number + key.
//  Compare with own calculations, check the validity of the key.

//  11.1.35 ManufacturerAccess() 0x0041 Device Reset
//  This command resets the device.
//  NOTE: Command 0x0012 also resets the device, providing backwards compatibility with thebq30z5x family of devices.
//  n = mac_read(0x0041, 4);
//  printf("0x0041 %-60s: 0x%08X\n", "Device Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

/* This is the end of no-mans land, keep out! */
/*        Wolfijzers en schietgeweren!        */

//  11.1.36 ManufacturerAccess() 0x0050 SafetyAlert
//  This command returns the 4 bytes of SafetyAlert() flags on AlternateManufacturerAccess() or ManufacturerData().
//  n = mac_read(0x0050, 4);
//  printf("0x0050 %-60s: 0x%08X\n", "SafetyAlert", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.36.1 SafetyAlert() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  RSVD RSVD ACOV COT UTD UTC PCHGC CHGV

//  printf("- RSVD       [31] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x80) > 0);
//  printf("- RSVD       [30] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x40) > 0);
//  printf("- ACOV       [29] %-49s: %d\n", "n/a", (data[6] & 0x20) > 0);
//  printf("- COT        [28] %-49s: %d\n", "n/a", (data[6] & 0x10) > 0);
//  printf("- UTD        [27] %-49s: %d\n", "Under temperature During Discharge", (data[6] & 0x08) > 0);
//  printf("- UTC        [26] %-49s: %d\n", "Under temperature During Charge", (data[6] & 0x04) > 0);
//  printf("- PCHGC      [25] %-49s: %d\n", "Over Pre-Charge Current", (data[6] & 0x02) > 0);
//  printf("- CHGV       [24] %-49s: %d\n", "Over Charging Voltage", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  CHGC OC RSVD CTO PTOS RSVD RSVD OTF

//  printf("- CHGC       [23] %-49s: %d\n", "Over Charging Current", (data[5] & 0x80) > 0);
//  printf("- OC         [22] %-49s: %d\n", "Over Charge", (data[5] & 0x40) > 0);
//  printf("- RSVD       [21] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x20) > 0);
//  printf("- CTO        [20] %-49s: %d\n", "Charge Timeout", (data[5] & 0x10) > 0);
//  printf("- PTOS       [19] %-49s: %d\n", "Precharge Timeout Suspend", (data[5] & 0x08) > 0);
//  printf("- RSVD       [18] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x04) > 0);
//  printf("- RSVD       [17] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x02) > 0);
//  printf("- OTF        [16] %-49s: %d\n", "n/a", (data[5] & 0x01) > 0);

//  11.1.36.2 SafetyAlert() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD CUVC OTD OTC ASCDL RSVD ASCCL RSVD

//  printf("- RSVD       [15] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x80) > 0);
//  printf("- CUVC       [14] %-49s: %d\n", "Cell Undervoltage Compensated", (data[4] & 0x40) > 0);
//  printf("- OTD        [13] %-49s: %d\n", "Over Temperature during Discharge", (data[4] & 0x20) > 0);
//  printf("- OTC        [12] %-49s: %d\n", "Over Temperature during Charge", (data[4] & 0x10) > 0);
//  printf("- ASCDL      [11] %-49s: %d\n", "Short-circuit during Discharge Latch", (data[4] & 0x08) > 0);
//  printf("- RSVD       [10] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x04) > 0);
//  printf("- ASCCL      [9]  %-49s: %d\n", "Short-circuit during Charge Latch", (data[4] & 0x02) > 0);
//  printf("- RSVD       [8]  %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  AOLDL AOLD OCD2 OCD1 OCC2 OCC1 COV CUV

//  printf("- AOLDL      [7]  %-49s: %d\n", "Overload during Discharge Latch", (data[3] & 0x80) > 0);
//  printf("- AOLD       [6]  %-49s: %d\n", "Overload during Discharge 1", (data[3] & 0x40) > 0);
//  printf("- OCD2       [5]  %-49s: %d\n", "Over Current during Discharge 2", (data[3] & 0x20) > 0);
//  printf("- OCD1       [4]  %-49s: %d\n", "Over Current during Discharge 1", (data[3] & 0x10) > 0);
//  printf("- OCC2       [3]  %-49s: %d\n", "Over Current during Charge 2", (data[3] & 0x08) > 0);
//  printf("- OCC1       [2]  %-49s: %d\n", "Over Current during Charge 1", (data[3] & 0x04) > 0);
//  printf("- COV        [1]  %-49s: %d\n", "Cell Over Voltage", (data[3] & 0x02) > 0);
//  printf("- CUV        [0]  %-49s: %d\n\n", "Cell Under Voltage", (data[3] & 0x01) > 0);

//  11.1.37 ManufacturerAccess() 0x0051 SafetyStatus
//  This command returns the 4 bytes of SafetyStatus() flags.
//  n = mac_read(0x0051, 4);
//  printf("0x0051 %-60s: 0x%08X\n", "SafetyStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.37.1 SafetyStatus() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  RSVD RSVD ACOV COT UTD UTC PCHGC CHGV

//  printf("- RSVD       [31] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x80) > 0);
//  printf("- RSVD       [30] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x40) > 0);
//  printf("- ACOV       [29] %-49s: %d\n", "n/a", (data[6] & 0x20) > 0);
//  printf("- COT        [28] %-49s: %d\n", "n/a", (data[6] & 0x10) > 0);
//  printf("- UTD        [27] %-49s: %d\n", "Under temperature During Discharge", (data[6] & 0x08) > 0);
//  printf("- UTC        [26] %-49s: %d\n", "Under temperature During Charge", (data[6] & 0x04) > 0);
//  printf("- PCHGC      [25] %-49s: %d\n", "Over Pre-Charge Current", (data[6] & 0x02) > 0);
//  printf("- CHGV       [24] %-49s: %d\n", "Over Charging Voltage", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  CHGC OC RSVD CTO PTOS RSVD RSVD OTF

//  printf("- CHGC       [23] %-49s: %d\n", "Over Charging Current", (data[5] & 0x80) > 0);
//  printf("- OC         [22] %-49s: %d\n", "Over Charge", (data[5] & 0x40) > 0);
//  printf("- RSVD       [21] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x20) > 0);
//  printf("- CTO        [20] %-49s: %d\n", "Charge Timeout", (data[5] & 0x10) > 0);
//  printf("- PTOS       [19] %-49s: %d\n", "Precharge Timeout Suspend", (data[5] & 0x08) > 0);
//  printf("- RSVD       [18] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x04) > 0);
//  printf("- RSVD       [17] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x02) > 0);
//  printf("- OTF        [16] %-49s: %d\n", "n/a", (data[5] & 0x01) > 0);

//  11.1.37.2 SafetyStatus() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD CUVC OTD OTC ASCDL RSVD ASCCL RSVD

//  printf("- RSVD       [15] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x80) > 0);
//  printf("- CUVC       [14] %-49s: %d\n", "Cell Undervoltage Compensated", (data[4] & 0x40) > 0);
//  printf("- OTD        [13] %-49s: %d\n", "Over Temperature during Discharge", (data[4] & 0x20) > 0);
//  printf("- OTC        [12] %-49s: %d\n", "Over Temperature during Charge", (data[4] & 0x10) > 0);
//  printf("- ASCDL      [11] %-49s: %d\n", "Short-circuit during Discharge Latch", (data[4] & 0x08) > 0);
//  printf("- RSVD       [10] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x04) > 0);
//  printf("- ASCCL      [9]  %-49s: %d\n", "Short-circuit during Charge Latch", (data[4] & 0x02) > 0);
//  printf("- RSVD       [8]  %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  AOLDL AOLD OCD2 OCD1 OCC2 OCC1 COV CUV

//  printf("- AOLDL      [7]  %-49s: %d\n", "Overload during Discharge Latch", (data[3] & 0x80) > 0);
//  printf("- AOLD       [6]  %-49s: %d\n", "Overload during Discharge", (data[3] & 0x40) > 0);
//  printf("- OCD2       [5]  %-49s: %d\n", "Over Current during Discharge 2", (data[3] & 0x20) > 0);
//  printf("- OCD1       [4]  %-49s: %d\n", "Over Current during Discharge 1", (data[3] & 0x10) > 0);
//  printf("- OCC2       [3]  %-49s: %d\n", "Over Current during Charge 2", (data[3] & 0x08) > 0);
//  printf("- OCC1       [2]  %-49s: %d\n", "Over Current during Charge 1", (data[3] & 0x04) > 0);
//  printf("- COV        [1]  %-49s: %d\n", "Cell Over Voltage", (data[3] & 0x02) > 0);
//  printf("- CUV        [0]  %-49s: %d\n\n", "Cell Under Voltage", (data[3] & 0x01) > 0);

//  11.1.38 ManufacturerAccess() 0x0052 PFAlert
//  This command, returns indications of pending safety issues, such as temperature
//  or voltages that have risen high enough to trigger a PFAlert failure. 4 bytes are returned.
//  n = mac_read(0x0052, 4);
//  printf("0x0052 %-60s: 0x%08X\n", "PFAlert", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.38.1 PFAlert() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  TS4 TS3 TS2 TS1 RSVD RSVD OPNC RSVD

//  printf("- TS4        [31] %-49s: %d\n", "Open Thermistor - TS4 Failure", (data[6] & 0x80) > 0);
//  printf("- TS3        [30] %-49s: %d\n", "Open Thermistor - TS3 Failure", (data[6] & 0x40) > 0);
//  printf("- TS2        [29] %-49s: %d\n", "Open Thermistor - TS2 Failure", (data[6] & 0x20) > 0);
//  printf("- TS1        [28] %-49s: %d\n", "Open Thermistor - TS1 Failure", (data[6] & 0x10) > 0);
//  printf("- RSVD       [27] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x08) > 0);
//  printf("- RSVD       [26] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x04) > 0);
//  printf("- OPNC       [25] %-49s: %d\n", "Open Cell Tab Connection Failure", (data[6] & 0x02) > 0);
//  printf("- RSVD       [24] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD 2LVL AFEC AFER FUSE RSVD DFETF CFETF

//  printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use.", (data[5] & 0x80) > 0);
//  printf("- 2LVL       [22] %-49s: %d\n", "Second Level Protector Failure", (data[5] & 0x40) > 0);
//  printf("- AFEC       [21] %-49s: %d\n", "AFE Communication Failure", (data[5] & 0x20) > 0);
//  printf("- AFER       [20] %-49s: %d\n", "AFE Register Failure", (data[5] & 0x10) > 0);
//  printf("- FUSE       [19] %-49s: %d\n", "Chemical Fuse Failure", (data[5] & 0x08) > 0);
//  printf("- RSVD       [18] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x04) > 0);
//  printf("- DFETF      [17] %-49s: %d\n", "Discharge FET Failure", (data[5] & 0x02) > 0);
//  printf("- CFETF      [16] %-49s: %d\n", "Charge FET Failure", (data[5] & 0x01) > 0);

//  11.1.38.2 PFAlert() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD RSVD VIMA VIMR CD IMP CB

//  printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
//  printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
//  printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x20) > 0);
//  printf("- VIMA       [12] %-49s: %d\n", "Voltage Imbalance while Pack Active", (data[4] & 0x10) > 0);
//  printf("- VIMR       [11] %-49s: %d\n", "Voltage Imbalance while Pack Resting", (data[4] & 0x08) > 0);
//  printf("- CD         [10] %-49s: %d\n", "Capacity Degradation Failure", (data[4] & 0x04) > 0);
//  printf("- IMP        [9]  %-49s: %d\n", "Impedance Failure", (data[4] & 0x02) > 0);
//  printf("- CB         [8]  %-49s: %d\n", "Cell Balancing Failure", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  QIM SOTF RSVD SOT SOCD SOCC SOV SUV

//  printf("- QIM        [7]  %-49s: %d\n", "QMax Imbalance Failure", (data[3] & 0x80) > 0);
//  printf("- SOTF       [6]  %-49s: %d\n", "Safety Over-Temperature Failure", (data[3] & 0x40) > 0);
//  printf("- RSVD       [5]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
//  printf("- SOT        [4]  %-49s: %d\n", "Safety Over-Temperature Cell Failure", (data[3] & 0x10) > 0);
//  printf("- SOCD       [3]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x08) > 0);
//  printf("- SOCC       [2]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x04) > 0);
//  printf("- SOV        [1]  %-49s: %d\n", "Safety Cell Over-Voltage Failure", (data[3] & 0x02) > 0);
//  printf("- SUV        [0]  %-49s: %d\n\n", "Safety Cell Under-Voltage Failure", (data[3] & 0x01) > 0);

//  11.1.39 ManufacturerAccess() 0x0053 PFStatus
//  This command returns the 4 bytes of PFStatus() flags.
//  n = mac_read(0x0053, 4);
//  printf("0x0053 %-60s: 0x%08X\n", "PFStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.39.1 PFStatus() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  TS4 TS3 TS2 TS1 RSVD RSVD OPNC RSVD

//  printf("- TS4        [31] %-49s: %d\n", "Open Thermistor - TS4 Failure", (data[6] & 0x80) > 0);
//  printf("- TS3        [30] %-49s: %d\n", "Open Thermistor - TS3 Failure", (data[6] & 0x40) > 0);
//  printf("- TS2        [29] %-49s: %d\n", "Open Thermistor - TS2 Failure", (data[6] & 0x20) > 0);
//  printf("- TS1        [28] %-49s: %d\n", "Open Thermistor - TS1 Failure", (data[6] & 0x10) > 0);
//  printf("- RSVD       [27] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x08) > 0);
//  printf("- RSVD       [26] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x04) > 0);
//  printf("- OPNC       [25] %-49s: %d\n", "Open Cell Tab Connection Failure", (data[6] & 0x02) > 0);
//  printf("- RSVD       [24] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD 2LVL AFEC AFER FUSE RSVD DFETF CFETF

//  printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x80) > 0);
//  printf("- 2LVL       [22] %-49s: %d\n", "Second Level Protector Failure", (data[5] & 0x40) > 0);
//  printf("- AFEC       [21] %-49s: %d\n", "AFE Communication Failure", (data[5] & 0x20) > 0);
//  printf("- AFER       [20] %-49s: %d\n", "AFE Register Failure", (data[5] & 0x10) > 0);
//  printf("- FUSE       [19] %-49s: %d\n", "Chemical Fuse Failure", (data[5] & 0x08) > 0);
//  printf("- RSVD       [18] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x04) > 0);
//  printf("- DFETF      [17] %-49s: %d\n", "Discharge FET Failure", (data[5] & 0x02) > 0);
//  printf("- CFETF      [16] %-49s: %d\n", "Charge FET Failure", (data[5] & 0x01) > 0);

//  11.1.39.2 PFStatus() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD RSVD VIMA VIMR CD IMP CB

//  printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
//  printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
//  printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x20) > 0);
//  printf("- VIMA       [12] %-49s: %d\n", "Voltage Imbalance while Pack Active", (data[4] & 0x10) > 0);
//  printf("- VIMR       [11] %-49s: %d\n", "Voltage Imbalance while Pack Resting", (data[4] & 0x08) > 0);
//  printf("- CD         [10] %-49s: %d\n", "Capacity Degradation Failure", (data[4] & 0x04) > 0);
//  printf("- IMP        [9]  %-49s: %d\n", "Impedance Failure", (data[4] & 0x02) > 0);
//  printf("- CB         [8]  %-49s: %d\n", "Cell Balancing Failure", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  QIM SOTF RSVD SOT SOCD SOCC SOV SUV

//  printf("- QIM        [7]  %-49s: %d\n", "QMax Imbalance Failure", (data[3] & 0x80) > 0);
//  printf("- SOTF       [6]  %-49s: %d\n", "Safety Over-Temperature Failure", (data[3] & 0x40) > 0);
//  printf("- RSVD       [5]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
//  printf("- SOT        [4]  %-49s: %d\n", "Safety Over-Temperature Cell Failure", (data[3] & 0x10) > 0);
//  printf("- SOCD       [3]  %-49s: %d\n", "n/a", (data[3] & 0x08) > 0);
//  printf("- SOCC       [2]  %-49s: %d\n", "n/a", (data[3] & 0x04) > 0);
//  printf("- SOV        [1]  %-49s: %d\n", "Safety Cell Over-Voltage Failure", (data[3] & 0x02) > 0);
//  printf("- SUV        [0]  %-49s: %d\n\n", "Safety Cell Under-Voltage Failure", (data[3] & 0x01) > 0);

//  11.1.40 ManufacturerAccess() 0x0054 OperationStatus
//  This command returns the 4 bytes of OperationStatus() flags.
//  n = mac_read(0x0054, 4);
//  printf("0x0054 %-60s: 0x%08X\n", "OperationStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  11.1.40.1 OperationStatus() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  RSVD RSVD EMSHUT CB SLPCC SLPAD SMBLCAL INIT

//  printf("- RSVD       [31] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x80) > 0);
//  printf("- RSVD       [30] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x40) > 0);
//  printf("- EMSHUT     [29] %-49s: %d\n", "Emergency Shutdown", (data[6] & 0x20) > 0);
//  printf("- CB         [28] %-49s: %d\n", "Cell Balancing", (data[6] & 0x10) > 0);
//  printf("- SLPCC      [27] %-49s: %d\n", "CC Measurement in SLEEP mode", (data[6] & 0x08) > 0);
//  printf("- SLPAD      [26] %-49s: %d\n", "ADC Measurement in SLEEP mode", (data[6] & 0x04) > 0);
//  printf("- SMBLCAL    [25] %-49s: %d\n", "Auto CC calibration when the bus is low", (data[6] & 0x02) > 0);
//  printf("- INIT       [24] %-49s: %d\n", "Initialization after full reset", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  SLEEPM XL CAL_OFFSET CAL AUTOCALM AUTH LED SDM

//  printf("- SLEEPM     [23] %-49s: %d\n", "SLEEP mode triggered via command", (data[5] & 0x80) > 0);
//  printf("- XL         [22] %-49s: %d\n", "400 kHz SMBus mode", (data[5] & 0x40) > 0);
//  printf("- CAL_OFFSET [21] %-49s: %d\n", "Calibration output (raw CC) ", (data[5] & 0x20) > 0);
//  printf("- CAL        [20] %-49s: %d\n", "Calibration output (raw ADC and CC) generated", (data[5] & 0x10) > 0);
//  printf("- AUTOCALM   [19] %-49s: %d\n", "Auto CC Offset Calibration by MAC AutoCCOffset()", (data[5] & 0x08) > 0);
//  printf("- AUTH       [18] %-49s: %d\n", "Authentication in progress", (data[5] & 0x04) > 0);
//  printf("- LED        [17] %-49s: %d\n", "LED Display", (data[5] & 0x02) > 0);
//  printf("- SDM        [16] %-49s: %d\n", "Shutdown triggered via command", (data[5] & 0x01) > 0);

//  11.1.40.2 OperationStatus() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  SLEEP XCHG XDSG PF SS SDV SEC[1] SEC[0]

//  printf("- SLEEP      [15] %-49s: %d\n", "Sleep mode conditions met", (data[4] & 0x80) > 0);
//  printf("- XCHG       [14] %-49s: %d\n", "Charging disabled", (data[4] & 0x40) > 0);
//  printf("- XDSG       [13] %-49s: %d\n", "Discharging disabled", (data[4] & 0x20) > 0);
//  printf("- PF         [12] %-49s: %d\n", "Permanent Fault mode", (data[4] & 0x10) > 0);
//  printf("- SS         [11] %-49s: %d\n", "Safety mode", (data[4] & 0x08) > 0);
//  printf("- SDV        [10] %-49s: %d\n", "Shutdown triggered via low pack voltage", (data[4] & 0x04) > 0);
//  printf("- SEC[1]     [9]  %-49s: %d\n", "Security Status", (data[4] & 0x02) > 0);
//  printf("- SEC[0]     [8]  %-49s: %d\n", "Security Status", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  BTP_INT ACLW FUSE ACFET PCHG CHG DSG PRES

//  printf("- BTP_INT    [7]  %-49s: %d\n", "Battery Trip Point interrupt", (data[3] & 0x80) > 0);
//  printf("- ACLW       [6]  %-49s: %d\n", "AC Voltage below threshold", (data[3] & 0x40) > 0);
//  printf("- FUSE       [5]  %-49s: %d\n", "Fuse status", (data[3] & 0x20) > 0);
//  printf("- ACFET      [4]  %-49s: %d\n", "AC FET status", (data[3] & 0x10) > 0);
//  printf("- PCHG       [3]  %-49s: %d\n", "Pre-charge FET status", (data[3] & 0x08) > 0);
//  printf("- CHG        [2]  %-49s: %d\n", "Charge FET status", (data[3] & 0x04) > 0);
//  printf("- DSG        [1]  %-49s: %d\n", "Discharge FET status", (data[3] & 0x02) > 0);
//  printf("- PRES       [0]  %-49s: %d\n\n", "System Present", (data[3] & 0x01) > 0);

//  11.1.41 ManufacturerAccess() 0x0055 ChargingStatus
//  This command returns the 1 byte of ChargerStatus() flags and 2 bytes of ChargingStatus() flags.
//  n = mac_read(0x0055, 4);
//  printf("0x0055 %-60s: 0x%08X\n", "ChargingStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD RSVD RSVD RSVD RSVD LCHG CHGSTAT CHRG

//  printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x80) > 0);
//  printf("- RSVD       [22] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x40) > 0);
//  printf("- RSVD       [21] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x20) > 0);
//  printf("- RSVD       [20] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x10) > 0);
//  printf("- RSVD       [19] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x08) > 0);
//  printf("- LCHG       [18] %-49s: %d\n", "Low Charge Current Mode ", (data[5] & 0x04) > 0);
//  printf("- CHGSTAT    [17] %-49s: %d\n", "Charger providing current to battery", (data[5] & 0x02) > 0);
//  printf("- CHRG       [16] %-49s: %d\n", "Charger Enable", (data[5] & 0x01) > 0);

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD CVRD MLC[2] MLC[1] MLC[0] CVR CCR

//  printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
//  printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
//  printf("- CVRD       [13] %-49s: %d\n", "Voltage/Current Override Mode", (data[4] & 0x20) > 0);
//  printf("- MLC[2]     [12] %-49s: %d\n", "Multi-level Charging Mode Not supported - ignore", (data[4] & 0x10) > 0);
//  printf("- MLC[1]     [11] %-49s: %d\n", "Multi-level Charging Mode Not supported - ignore", (data[4] & 0x08) > 0);
//  printf("- MLC[0]     [10] %-49s: %d\n", "Multi-level Charging Mode Not supported - ignore", (data[4] & 0x04) > 0);
//  printf("- CVR        [9]  %-49s: %d\n", "Charging Voltage Rate of Change", (data[4] & 0x02) > 0);
//  printf("- CCR        [8]  %-49s: %d\n", "Charging Current Rate of Change", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  VCT MCHG SU IN HV MV LV PV

//  printf("- VCT        [7]  %-49s: %d\n", "Charge Termination", (data[3] & 0x80) > 0);
//  printf("- MCHG       [6]  %-49s: %d\n", "Maintenance Charge", (data[3] & 0x40) > 0);
//  printf("- SU         [5]  %-49s: %d\n", "Charge Suspend", (data[3] & 0x20) > 0);
//  printf("- IN         [4]  %-49s: %d\n", "Charge Inhibit", (data[3] & 0x10) > 0);
//  printf("- HV         [3]  %-49s: %d\n", "High Cell Voltage Charge Conditions", (data[3] & 0x08) > 0);
//  printf("- MV         [2]  %-49s: %d\n", "Medium Cell Voltage Charge Conditions", (data[3] & 0x04) > 0);
//  printf("- LV         [1]  %-49s: %d\n", "Low Cell Voltage Charge Conditions", (data[3] & 0x02) > 0);
//  printf("- PV         [0]  %-49s: %d\n\n", "Pre-Charge Cell Voltage Charge Conditions", (data[3] & 0x01) > 0);

//  11.1.42 ManufacturerAccess() 0x0056 GaugingStatus
//  This command returns the 3 bytes of GaugingStatus() flags.
//  n = mac_read(0x0056, 4);
//  printf("0x0056 %-60s: 0x%08X\n", "GaugingStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD RSVD RSVD OCVFR LDMD RX QMAX VDQ

//  printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x80) > 0);
//  printf("- RSVD       [22] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x40) > 0);
//  printf("- RSVD       [21] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
//  printf("- OCVFR      [20] %-49s: %d\n", "Open Circuit Voltage Flat Region during RELAX", (data[3] & 0x10) > 0);
//  printf("- LDMD       [19] %-49s: %d\n", "LOAD mode - battery under load", (data[3] & 0x08) > 0);
//  printf("- RX         [18] %-49s: %d\n", "Resistance Update to DataFlash", (data[3] & 0x04) > 0);
//  printf("- QMAX       [17] %-49s: %d\n", "QMax update to DataFlash", (data[3] & 0x02) > 0);
//  printf("- VDQ        [16] %-49s: %d\n", "Discharge qualified for learning", (data[3] & 0x01) > 0);

//  11.1.42.1 GaugingStatus Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  NSFM RSVD SLPQMAX QEN VOK RDIS RSVD REST

//  printf("- NSFM       [15] %-49s: %d\n", "Negative Ra resistance scaling mode", (data[3] & 0x80) > 0);
//  printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x40) > 0);
//  printf("- SLPQMAX    [13] %-49s: %d\n", "OCV update in SLEEP Mode", (data[3] & 0x20) > 0);
//  printf("- QEN        [12] %-49s: %d\n", "Impedance Track - Ra and QMax updates occurring", (data[3] & 0x10) > 0);
//  printf("- VOK        [11] %-49s: %d\n", "Voltages Ok for QMax update.", (data[3] & 0x08) > 0);
//  printf("- RDIS       [10] %-49s: %d\n", "Resistance table updates in DataFlash", (data[3] & 0x04) > 0);
//  printf("- RSVD       [9]  %-49s: %d\n", "Reserved - Do not use", (data[3] & 0x02) > 0);
//  printf("- REST       [8]  %-49s: %d\n", "In RELAX mode and OCV updates taken", (data[3] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  CF DSG EDV BAL_EN TC TD FC FD

//  printf("- CF         [7]  %-49s: %d\n", "Condition Flag", (data[3] & 0x80) > 0);
//  printf("- DSG        [6]  %-49s: %d\n", "Discharge/Relax", (data[3] & 0x40) > 0);
//  printf("- EDV        [5]  %-49s: %d\n", "End-of-Discharge Voltage reached during discharge", (data[3] & 0x20) > 0);
//  printf("- BAL_EN     [4]  %-49s: %d\n", "Cell balancing if possible ", (data[3] & 0x10) > 0);
//  printf("- TC         [3]  %-49s: %d\n", "Terminate Charge", (data[3] & 0x08) > 0);
//  printf("- TD         [2]  %-49s: %d\n", "Terminate Discharge", (data[3] & 0x04) > 0);
//  printf("- FC         [1]  %-49s: %d\n", "Fully Charged", (data[3] & 0x02) > 0);
//  printf("- FD         [0]  %-49s: %d\n\n", "Fully Discharged", (data[3] & 0x01) > 0);

//  11.1.43 ManufacturerAccess() 0x0057 ManufacturingStatus
//  This command returns the 2 bytes of ManufacturingStatus() flags.
//  n = mac_read(0x0057, 2);
//  printf("0x0057 %-60s: 0x%08X\n", "ManufacturingStatus", data[4] + (data[3] << 8));

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD RSVD RSVD RSVD CHGR_EN LED_EN FUSE_EN

//  printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x80) > 0);
//  printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x40) > 0);
//  printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
//  printf("- RSVD       [12] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x10) > 0);
//  printf("- RSVD       [11] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x08) > 0);
//  printf("- CHGR_EN    [10] %-49s: %d\n", "Charger Enabled, independent of Adapter presences", (data[3] & 0x04) > 0);
//  printf("- LED_EN     [9]  %-49s: %d\n", "LED outputs", (data[3] & 0x02) > 0);
//  printf("- FUSE_EN    [8]  %-49s: %d\n", "Fuse control", (data[3] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  BBR_EN PF_EN LF_EN FET_EN GAUGE_EN RSVD RSVD RSVD

//  printf("- BBR_EN     [7]  %-49s: %d\n", "Black Box Recorder", (data[3] & 0x80) > 0);
//  printf("- PF_EN      [6]  %-49s: %d\n", "Permanent Faults", (data[3] & 0x40) > 0);
//  printf("- LF_EN      [5]  %-49s: %d\n", "Lifetime Recording", (data[3] & 0x20) > 0);
//  printf("- FET_EN     [4]  %-49s: %d\n", "FET Control by firmware", (data[3] & 0x10) > 0);
//  printf("- GAUGE_EN   [3]  %-49s: %d\n", "Battery Fuel Gauging", (data[3] & 0x08) > 0);
//  printf("- RSVD       [2]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x04) > 0);
//  printf("- RSVD       [1]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x02) > 0);
//  printf("- RSVD       [0]  %-49s: %d\n\n", "Reserved - do not use", (data[3] & 0x01) > 0);

//  11.1.44 ManufacturerAccess() 0x0058 AFE Register
//  This command returns the 21 byte AFERegister() values.
//  These are the AFE hardware registers and are intended for internal debug use only.
//  n = mac_read(0x0058, 22);
//  printf("0x0058 %-60s: 0x%08X\n", "AFE Register", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- [0]  %-60s: %d\n", "AFE Hardware interrupt status", data[3]);
//  printf("- [1]  %-60s: %d\n", "AFE FET status", data[4]);
//  printf("- [2]  %-60s: %d\n", "AFE RXIN. AFE I/O port input status", data[5]);
//  printf("- [3]  %-60s: %d\n", "AFE Latch Status. AFE protection latch status", data[6]);
//  printf("- [4]  %-60s: %d\n", "AFE Interrupt Enable", data[7]);
//  printf("- [5]  %-60s: %d\n", "AFE Control. AFE FET control enable setting", data[8]);
//  printf("- [6]  %-60s: %d\n", "AFE RXIEN. AFE I/O input enable settings", data[9]);
//  printf("- [7]  %-60s: %d\n", "AFE RLOUT. AFE I/O pins output status", data[10]);
//  printf("- [8]  %-60s: %d\n", "AFE RHOUT. AFE I/O pins output status", data[11]);
//  printf("- [9]  %-60s: %d\n", "AFE RHINT. AFE I/O pins interrupt status", data[12]);
//  printf("- [10] %-60s: %d\n", "AFE Cell Balance", data[13]);
//  printf("- [11] %-60s: %d\n", "AFE ADC/CC Control", data[14]);
//  printf("- [12] %-60s: %d\n", "AFE ADC Mux Control", data[15]);
//  printf("- [13] %-60s: %d\n", "AFE LED Control", data[16]);
//  printf("- [14] %-60s: %d\n", "AFE Control", data[17]);
//  printf("- [15] %-60s: %d\n", "AFE Timer Control", data[18]);
//  printf("- [16] %-60s: %d\n", "AFE Protection", data[19]);
//  printf("- [17] %-60s: %d\n", "AFE OCD", data[20]);
//  printf("- [18] %-60s: %d\n", "AFE SCC", data[21]);
//  printf("- [19] %-60s: %d\n", "AFE SCD1", data[22]);
//  printf("- [20] %-60s: %d\n\n", "AFE SCD2", data[23]);

//  11.1.45 ManufacturerAccess() 0x0060 Lifetime Data Block 1
//  This command returns the 31 bytes of Lifetime data.
//  n = mac_read(0x0060, 32); // <<--
//  printf("0x0060 %-60s: 0x%08X\n", "Lifetime Data Block 1", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8)); // <<--

//  printf("- [1:0]   %-57s: %d\n", "Cell 1 Max Voltage", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "Cell 2 Max Voltage", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Cell 3 Max Voltage", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Cell 4 Max Voltage", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "Cell 1 Min Voltage", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Cell 2 Min Voltage", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "Cell 3 Min Voltage", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "Cell 4 Min Voltage", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "Max Delta Cell Voltage", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Max Charge Current", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "Max Discharge Current", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n", "Max Avg Dsg Current", data[26] + (data[25] << 8));
//  printf("- [25:24] %-57s: %d\n", "Max Avg Dsg Power", data[28] + (data[27] << 8));
//  printf("- [26]    %-57s: %d\n", "Max Temp Cell", data[30] + (data[29] << 8));
//  printf("- [27]    %-57s: %d\n", "Min Temp Cell", data[32] + (data[31] << 8));
//  printf("- [28]    %-57s: %d\n", "Max Delta Cell temp", data[34] + (data[33] << 8));
//  printf("- [29]    %-57s: %d\n", "Max Temp Int Sensor", data[36] + (data[35] << 8));
//  printf("- [30]    %-57s: %d\n", "Min Temp Int Sensor", data[38] + (data[37] << 8));
//  printf("- [31]    %-57s: %d\n\n", "Max Temp Fet", data[40] + (data[39] << 8));

//  11.1.46 ManufacturerAccess() 0x0061 Lifetime Data Block 2
//  This command returns the 7 bytes of Lifetime data.
//  n = mac_read(0x0061, 8); // <<--
//  printf("0x0061 %-60s: 0x%08X\n", "Lifetime Data Block 2", data[3]); // <<--

//  printf("- [0]     %-57s: %d\n", "No. of Shutdowns", data[3]);
//  printf("- [1]     %-57s: %d\n", "No. of Partial Resets", data[4]);
//  printf("- [2]     %-57s: %d\n", "No. of Full Resets", data[5]);
//  printf("- [3]     %-57s: %d\n", "No. of WDT resets", data[6]);
//  printf("- [4]     %-57s: %d\n", "CB Time Cell 1", data[7]);
//  printf("- [5]     %-57s: %d\n", "CB Time Cell 2", data[8]);
//  printf("- [6]     %-57s: %d\n", "CB Time Cell 3", data[9]);
//  printf("- [7]     %-57s: %d\n\n", "CB Time Cell 4", data[10]);

//  11.1.47 ManufacturerAccess() 0x0062 Lifetime Data Block 3
//  This command returns the 16 bytes of Lifetime data.
//  n = mac_read(0x0062, 16); // <<--
//  printf("0x0062 %-60s: 0x%08X\n", "Lifetime Data Block 3", data[4] + (data[3] << 8)); // <<--

//  printf("- [1:0]   %-57s: %d\n", "Total FW Runtime", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "Time Spent in UT", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Time Spent in LT", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Time Spent in STL", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "Time Spent in RT", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Time Spent in STH", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "Time Spent in HT", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n\n", "Time Spent in OT", data[18] + (data[17] << 8));

//  11.1.48 ManufacturerAccess() 0x0063 Lifetime Data Block 4
//  This command returns the 31 bytes of Lifetime data.
//  n = mac_read(0x0063, 32);
//  printf("0x0063 %-60s: 0x%08X\n", "Lifetime Data Block 4", data[4] + (data[3] << 8));

//  printf("- [3:2]   %-57s: %d\n", "Last COV Event", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "No. of CUV Events", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Last CUV Event", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "No. of OCD1 Events", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Last OCD1 Event", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "No. of OCD2 Events", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "Last OCD2 Event", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "No. of OCC1 Events", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Last OCC1 Event", data[4] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "No. of OCC2 Events", data[22] + (data[3] << 8));
//  printf("- [23:22] %-57s: %d\n", "Last OCC2 Event", data[24] + (data[23] << 8));
//  printf("- [25:24] %-57s: %d\n", "No. of AOLD Events", data[26] + (data[25] << 8));
//  printf("- [27:26] %-57s: %d\n", "Last AOLD Event", data[28] + (data[27] << 8));
//  printf("- [29:28] %-57s: %d\n", "No. of ASCD Events", data[32] + (data[31] << 8));
//  printf("- [31:30] %-57s: %d\n\n", "Last ASCD Event", data[34] + (data[33] << 8));

//  11.1.49 ManufacturerAccess() 0x0064 Lifetime Data Block 5
//  This command returns the 31 bytes of Lifetime data.
//  n = mac_read(0x0064, 32);
//  printf("0x0064 %-60s: 0x%08X\n", "Lifetime Data Block 5", data[4] + (data[3] << 8));

//  printf("- [1:0]   %-57s: %d\n", "No. of ASCC Events", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "Last ASCC Event", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "No. of OTC Events", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Last OTC Event", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "No. of OTD Events", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Last OTD Event", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "No. of OTF Events", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "Last OTF Event", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "No. Valid Charge Term", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Last Valid Charge Term", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "No. of Qmax Updates", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n", "Last Qmax Update", data[26] + (data[25] << 8));
//  printf("- [25:24] %-57s: %d\n", "No. of Ra Updates", data[28] + (data[27] << 8));
//  printf("- [27:26] %-57s: %d\n", "Last Ra Update", data[30] + (data[29] << 8));
//  printf("- [29:28] %-57s: %d\n", "No. of Ra Disable", data[32] + (data[31] << 8));
//  printf("- [31:30] %-57s: %d\n\n", "Last Ra Disable", data[34] + (data[33] << 8));

//  11.1.50 ManufacturerAccess() 0x0070 ManufacturerInfo
//  This command returns the 32 bytes of ManufacturerInfo.
//  n = mac_read(0x0070, 32);
//  printf("0x0070 %-60s: 0x%08X\n", "ManufacturerInfo", data[4] + (data[3] << 8));

//  11.1.51 ManufacturerAccess() 0x0071 DAStatus1
//  This command returns 32 bytes containing CellVoltages, PackVoltage, BatVoltage, CellCurrents,
//  CellPowers, Power, and AveragePower on AlternateManufacturerAccess() or ManufacturerData().
//  n = mac_read(0x0071, 32);
//  printf("0x0071 %-60s: 0x%08X\n", "DAStatus1", data[4] + (data[3] << 8));

//  printf("- [1:0]   %-57s: %d\n", "Cell Voltage 1", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "Cell Voltage 2", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Cell Voltage 3", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Cell Voltage 4", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "Voltage at the BAT pin", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "PACK Voltage", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "Cell Current 1", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "Cell Current 2", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "Cell Current 3", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Cell Current 4", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "Cell Power 1", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n", "Cell Power 2", data[26] + (data[25] << 8));
//  printf("- [25:24] %-57s: %d\n", "Cell Power 3", data[28] + (data[27] << 8));
//  printf("- [27:26] %-57s: %d\n", "Cell Power 4", data[30] + (data[29] << 8));
//  printf("- [29:28] %-57s: %d\n", "Power calculated", data[32] + (data[31] << 8));
//  printf("- [31:30] %-57s: %d\n\n", "Average Power", data[34] + (data[33] << 8));

//  11.1.52 ManufacturerAccess() 0x0072 DAStatus2
//  This command returns 14 bytes containing the temperatures from the internal temp sensor, TS1, TS2,
//  TS3, TS4, Cell Temp, and FETTemp.
//  n = mac_read(0x0072, 14); // <<--
//  printf("0x0072 %-60s: 0x%08X\n", "DAStatus2", data[4] + (data[3] << 8)); // <<--

//  printf("- [1:0]   %-57s: %d\n", "Int Temperature", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "TS1 Temperature", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "TS2 Temperature", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "TS3 Temperature", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "TS4 Temperature", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Cell Temperature", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n\n", "FET Temperature", data[16] + (data[15] << 8));

//  11.1.53 ManufacturerAccess() 0x0073 GaugeStatus1
//  This command returns the 32 bytes of Impedance Track related gauging information.
//  n = mac_read(0x0073, 32);
//  printf("0x0073 %-60s: 0x%08X\n", "GaugeStatus1", data[4] + (data[3] << 8));

//  printf("- [1:0]   %-57s: %d\n", "True remaining capacity in mAh", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "True remaining energy in cWh", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Initial capacity calculated", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Initial energy calculated", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "Reserve Capacity", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Reserve Energy", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "Temperature during the last simulation run.", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "Current assumed ambient temperature", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "Ra table scaling factor of Cell 1", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Ra table scaling factor of Cell 2", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "Ra table scaling factor of Cell 3", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n", "Ra table scaling factor of Cell 4", data[26] + (data[25] << 8));
//  printf("- [25:24] %-57s: %d\n", "Last temperature compensated Resistance of Cell 1", data[28] + (data[27] << 8));
//  printf("- [27:26] %-57s: %d\n", "Last temperature compensated Resistance of Cell 2", data[30] + (data[29] << 8));
//  printf("- [29:28] %-57s: %d\n", "Last temperature compensated Resistance of Cell 3", data[32] + (data[31] << 8));
//  printf("- [31:30] %-57s: %d\n\n", "Last temperature compensated Resistance of Cell 4", data[34] + (data[33] << 8));

//  11.1.54 ManufacturerAccess() 0x0074 GaugeStatus2
//  This command returns the 32 bytes of Impedance Track related gauging information.
//  n = mac_read(0x0074, 32);
//  printf("0x0074 %-60s: 0x%08X\n", "GaugeStatus2", data[4] + (data[3] << 8));

//  0 Pack Grid. Active pack grid point (minimum of CellGrid0 to Cell Grid3)
//  1
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
//  0 = QMax has not been updated in the field
//  1= QMax updated in the field
//  printf("- [2]     %-57s: %d\n", "Cell Grid 0. Active grid point of Cell 1", data[3]);
//  printf("- [3]     %-57s: %d\n", "Cell Grid 1. Active grid point of Cell 2", data[4]);
//  printf("- [4]     %-57s: %d\n", "Cell Grid 2. Active grid point of Cell 3", data[5]);
//  printf("- [5]     %-57s: %d\n", "Cell Grid 3. Active grid point of Cell 4", data[6]);
//  printf("- [9:6]   %-57s: %d\n", "State Time. Time past since last state change (Discharge, Charge, Rest", data[8] + (data[7] << 8));
//  printf("- [11:10] %-57s: %d\n", "Depth of discharge for Cell 1", data[10] + (data[9] << 8));
//  printf("- [13:12] %-57s: %d\n", "Depth of discharge for Cell 2", data[12] + (data[11] << 8));
//  printf("- [15:14] %-57s: %d\n", "Depth of discharge for Cell 3", data[14] + (data[13] << 8));
//  printf("- [17:16] %-57s: %d\n", "Depth of discharge for Cell 4", data[16] + (data[15] << 8));
//  printf("- [19:18] %-57s: %d\n", "Passed capacity since the last DOD0 update", data[18] + (data[17] << 8));
//  printf("- [21:20] %-57s: %d\n", "Passed energy since last DOD0 update", data[20] + (data[19] << 8));
//  printf("- [23:22] %-57s: %d\n", "Time passed since the last DOD0 update", data[22] + (data[21] << 8));
//  printf("- [25:24] %-57s: %d\n", "Depth of discharge at end of charge of Cell 1", data[24] + (data[23] << 8));
//  printf("- [27:26] %-57s: %d\n", "Depth of discharge at end of charge of Cell 2", data[26] + (data[25] << 8));
//  printf("- [29:28] %-57s: %d\n", "2.Depth of discharge at end of charge of Cell 3", data[28] + (data[27] << 8));
//  printf("- [31:30] %-57s: %d\n", "3. Depth of discharge at end of charge of Cell 4", data[30] + (data[29] << 8));

//  11.1.55 ManufacturerAccess() 0x0075 GaugeStatus3
//  This command returns the 32 bytes Impedance Track related gauging information.
//  n = mac_read(0x0075, 24); // <<--
//  printf("0x0075 %-60s: 0x%08X\n", "GaugeStatus3", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8)); // <<--

//  printf("- [1:0]   %-57s: %d\n", "QMax 0. QMax of Cell 1", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "QMax 1. QMax of Cell 2", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "QMax 2. QMax of Cell 3", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "QMax 3. QMax of Cell 4", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "QMax DOD0_0. DOD0 at last QMax update of Cell 1", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "QMax DOD0_1. DOD0 at last QMax update of Cell 2", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "QMax DOD0_2. DOD0 at last QMax update of Cell 3", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "QMax DOD0_3. DOD0 at last QMax update of Cell 4", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "QMax Passed Q. Pass capacity since last QMax update", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "QMax Time. Time passed since last QMax update", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "Temp k. Thermal Model temperature factor", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n\n", "Temp a. Thermal Model temperature", data[26] + (data[25] << 8));

//  11.1.56 ManufacturerAccess() 0x0076 CBStatus
//  This command returns the 32 bytes of cell-balancing–related information.
//  n = mac_read(0x0076, 32);
//  printf("0x0076 %-60s: 0x%08X\n", "CBStatus", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

//  printf("- [1:0]   %-57s: %d\n", "Calculated cell balancing time of Cell 1", data[4] + (data[3] << 8));
//  printf("- [3:2]   %-57s: %d\n", "Calculated cell balancing time of Cell 2", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Calculated cell balancing time of Cell 3", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n\n", "Calculated cell balancing time of Cell 4", data[10] + (data[9] << 8));

//  11.1.57 ManufacturerAccess() 0x0077 State of Health
//  This command returns the 4 bytes of State of Health FCC in mAh and energy in cWh.
//  n = mac_read(0x0077, 4); // <<--
//  printf("0x0077 %-60s: %d\n", "State of Health FFC in mAh", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8)); // <<--
//  printf("0x0077 %-60s: %d\n\n", "State of Health energy in cWh", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8)); // <<--

//  11.1.58 ManufacturerAccess() 0x00C0 CHGR_EN Toggle
//  This command turns on/off the charge controller. If ManufacturingStatus[CHGR_EN] = 0, sending this
//  command sets ManufacturingStatus[CHGR_EN] to 1, allowing the charge controller to enable whenever
//  the adaptor voltage is present and valid. If ManufacturingStatus[CHGR_EN] = 1 this command will disable
//  the charger immediately and set ManufacturingStatus[CHGR_EN] to 0.
//  n = mac_read(0x00C0, 2);
//  printf("0x00C0 %-60s: 0x%02X\n", "CHGR_EN Toggle", data[4] + (data[3] << 8));

//  11.1.59 ManufacturerAccess() 0x00C1 CVRD_ARM Toggle
//  This command allows host control of the charger voltage and current settings. If Charging
//  Configuration[CVRD_EN] = 0, sending this command allows the host system to controller the charging
//  current and voltage, setting Charging Configuration[CVRD_EN] to 1 and vice versa.
//  n = mac_read(0x00C1, 2);
//  printf("0x00C1 %-60s: 0x%02X\n", "CVRD_ARM Toggle", data[4] + (data[3] << 8));

//  11.1.60 ManufacturerAccess() 0x00C2 ACFET_TEST Toggle
//  This command turns on/off AC FET drive function for testing during manufacturing. If
//  ManufacturingStatus[ACFET_TEST] = 0, sending this command turns on the AC FET and the
//  ManufacturingStatus[ACFET_TEST] is set to 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus[FET_EN] = 0, indicating a FW FET control is not active and manual control is
//  allowed. A reset clears ManufacturingStatus[ACFET_TEST] and turns off the AC FET.
//  n = mac_read(0x00C2, 2);
//  printf("0x00C2 %-60s: 0x%02X\n", "ACFET_TEST Toggle", data[4] + (data[3] << 8));

//  11.1.61 ManufacturerAccess() 0x00C3 CHGON_TEST Toggle
//  This command turns on/off Charger FET drive function to ease testing during manufacturing. If
//  ManufacturingStatus[CHGON_TEST] = 0, sending this command turns on the Charger FET's and the
//  ManufacturingStatus[CHGON_TEST] is set to 1 and vice versa. This toggling command is only enabled if
//  ManufacturingStatus[FET_EN] = 0, indicating a FW FET control is not active and manual control is
//  allowed. A reset clears ManufacturingStatus[CHGON_TEST] and turns off the CHG FET.
//  n = mac_read(0x00C3, 2);
//  printf("0x00C3 %-60s: 0x%02X\n", "CHGON_TEST Toggle", data[4] + (data[3] << 8));

//  11.1.62 ManufacturerAccess() 0x0F00 ROM Mode
//  This command sends the device into ROM mode in preparation for firmware re-programming. To enter
//  ROM mode, the device must be in FULL ACCESS mode. To return from ROM mode to FW mode, issue
//  the SMBus command 0x08.
//  n = mac_read(0x0F00, 2);
//  printf("0x0F00 %-60s: 0x%02X\n", "ROM Mode", data[4] + (data[3] << 8));

//  11.1.64 ManufacturerAccess() 0xF080 Exit Calibration Output Mode
//  This command stops the output of calibration data to the AlternateManufacturerAccess() or
//  ManufacturerData() command.
//  n = mac_read(0xF080, 2);
//  printf("0xF080 %-60s: 0x%02X\n", "Exit Calibration Output Mode", data[4] + (data[3] << 8));

//  11.1.65 ManufacturerAccess() 0xF081 Output CC and ADC for Calibration
//  This command instructs the device to output the raw values for calibration purposes on
//  AlternateManufacturerAccess() or ManufacturerData(). All values are updated every 250 ms and the
//  format of each value is 2's complement, MSB first.
//  n = mac_read(0xF081, 2);
//  printf("0xF081 %-60s: 0x%02X\n", "Output CC and ADC for Calibration", data[4] + (data[3] << 8));

//  printf("- [0]     %-57s: %d\n", "Rolling 8-bit counter", data[3]);
//  printf("- [1]     %-57s: %d\n", "Status, 1 = 0xF081, 2 = 0xF082", data[4]);
//  printf("- [3:2]   %-57s: %d\n", "Current (coulomb counter)", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Cell Voltage 1", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Cell Voltage 2", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "Cell Voltage 3", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Cell Voltage 4", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "PACK Voltage", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "BAT Voltage", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "Cell Current 1", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Cell Current 2", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "Cell Current 3", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n", "Cell Current 4", data[26] + (data[25] << 8));

//  11.1.66 ManufacturerAccess() 0xF082 Output Shorted CC and ADC for Calibration
//  This command instructs the device to output the raw values for calibration purposes on
//  AlternateManufacturerAccess() or ManufacturerData(). All values are updated every 250 ms and the
//  This command instructs the device to output the raw values for calibration purposes on
//  AlternateManufacturerAccess() or ManufacturerData(). All values are updated every 250 ms and the
//  format of each value is 2's complement, MSB first. This mode includes an internal short on the coulomb
//  counter inputs for measuring offset.format of each value is 2's complement, MSB first. This mode includes an internal short on the coulomb
//  counter inputs for measuring offset.
//  n = mac_read(0xF082, 2);
//  printf("0xF082 %-60s: 0x%02X\n", "Output CC and ADC for Calibration", data[4] + (data[3] << 8));

//  printf("- [0]     %-57s: %d\n", "Rolling 8-bit counter", data[3]);
//  printf("- [1]     %-57s: %d\n", "Status, 1 when = 0xF081, 2 when = 0xF082", data[4]);
//  printf("- [3:2]   %-57s: %d\n", "Current (coulomb counter)", data[6] + (data[5] << 8));
//  printf("- [5:4]   %-57s: %d\n", "Cell Voltage 1", data[8] + (data[7] << 8));
//  printf("- [7:6]   %-57s: %d\n", "Cell Voltage 2", data[10] + (data[9] << 8));
//  printf("- [9:8]   %-57s: %d\n", "Cell Voltage 3", data[12] + (data[11] << 8));
//  printf("- [11:10] %-57s: %d\n", "Cell Voltage 4", data[14] + (data[13] << 8));
//  printf("- [13:12] %-57s: %d\n", "PACK Voltage", data[16] + (data[15] << 8));
//  printf("- [15:14] %-57s: %d\n", "BAT Voltage", data[18] + (data[17] << 8));
//  printf("- [17:16] %-57s: %d\n", "Cell Current 1", data[20] + (data[19] << 8));
//  printf("- [19:18] %-57s: %d\n", "Cell Current 2", data[22] + (data[21] << 8));
//  printf("- [21:20] %-57s: %d\n", "Cell Current 3", data[24] + (data[23] << 8));
//  printf("- [23:22] %-57s: %d\n", "Cell Current 4", data[26] + (data[25] << 8));

//  11.2 0x01 RemainingCapacityAlarm()
//  This read/write word function sets a low capacity alarm threshold for the cell stack.
//  0x01 RemainingCapacityAlarm() R/W Word U2 0 700 300
//  mAh/10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
    readWord("RemainingCapacityAlarm", "mAh/10 mWh", 0x01, 0, 700, 300); // <<--

//  11.3 0x02 RemainingTimeAlarm()
//  This read/write word function sets a low remaining time to fully discharge alarm threshold for the cell stack.
    readWord("RemainingTimeAlarm", "min", 0x02, 0, 30, 10); // <<--

//  11.4 0x03 BatteryMode()
//  This read/write word function sets various battery operating mode options.
//  0x03 BatteryMode() R/W Word H2 0x0000 0xFFFF, 0);
    readWord("BatteryMode", "hex", 0x03, 0x0000, 0xFFFF, 0); // <<--

//  B15 B14 B13 B12 B11 B10 B9 B8

    printf("- CAPM       [15] %-49s: %d\n", "Capacity Mode", (data[4] & 0x80) > 0);
    printf("- CHGM       [14] %-49s: %d\n", "Manual Charge Control", (data[4] & 0x40) > 0);
    printf("- AM         [13] %-49s: %d\n", "Alarm Mode", (data[4] & 0x20) > 0);
    printf("- RSVD       [12] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x10) > 0);
    printf("- RSVD       [11] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x08) > 0);
    printf("- RSVD       [10] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x04) > 0);
    printf("- PB         [9]  %-49s: %d\n", "Not used in the bq40z60 - set to 0", (data[4] & 0x02) > 0);
    printf("- CC         [8]  %-49s: %d\n", "Internal Charge Controller", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

    printf("- CF         [7]  %-49s: %d\n", "Conditioning needed if MaxError()", (data[3] & 0x80) > 0);
    printf("- RSVD       [6]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x40) > 0);
    printf("- RSVD       [5]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
    printf("- RSVD       [4]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x10) > 0);
    printf("- RSVD       [3]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x08) > 0);
    printf("- RSVD       [2]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x04) > 0);
    printf("- PBS        [1]  %-49s: %d\n", "Primary battery support - unsupported", (data[3] & 0x02) > 0);
    printf("- ICC        [0]  %-49s: %d\n\n", "Internal Charge Controller enabled", (data[3] & 0x01) > 0);

//  11.5 0x04 AtRate()
//  This read/write word function sets the value used in calculating AtRateTimeToFull() and
//  AtRateTimeToEmpty().
    readWord("AtRate", "mA/10mW", 0x04, -32768, 32767, 0);

//  B15 B14 B13 B12 B11 B10 B9 B8

//  CAPM CHGM AM RSVD RSVD RSVD PB CC

    printf("- CAPM       [15] %-49s: %d\n", "Capacity Mode", (data[4] & 0x80) > 0);
    printf("- CHGM       [14] %-49s: %d\n", "Manual Charge Control", (data[4] & 0x40) > 0);
    printf("- AM         [13] %-49s: %d\n", "Alarm Mode", (data[4] & 0x20) > 0);
    printf("- RSVD       [12] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x10) > 0);
    printf("- RSVD       [11] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x08) > 0);
    printf("- RSVD       [10] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x04) > 0);
    printf("- PB         [9]  %-49s: %d\n", "Sets the role of the pack and is not used", (data[4] & 0x02) > 0);
    printf("- CC         [8]  %-49s: %d\n", "Internal Charge Controller", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  CF RSVD RSVD RSVD RSVD RSVD PBS ICC

    printf("- CF         [7]  %-49s: %d\n", "Conditioning needed", (data[3] & 0x80) > 0);
    printf("- RSVD       [6]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x40) > 0);
    printf("- RSVD       [5]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
    printf("- RSVD       [4]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x10) > 0);
    printf("- RSVD       [3]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x08) > 0);
    printf("- RSVD       [2]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x04) > 0);
    printf("- PBS        [1]  %-49s: %d\n", "Primary battery support", (data[3] & 0x02) > 0);
    printf("- ICC        [0]  %-49s: %d\n\n", "Internal Charge Controller enabled", (data[3] & 0x01) > 0);

//  11.6 0x05 AtRateTimeToFull()
//  This word read function returns the remaining time to fully charge the battery stack.
//  0x05 AtRateTimeToFull() R Word U2 0 65535 min
//  NOTE: 65535 indicates battery stack is not being charged.
    readWord("AtRateTimeToFull", "min", 0x05, 0, 65535, 0); // <<--

//  11.7 0x06 AtRateTimeToEmpty()
//  This read word function returns a Boolean value that indicates whether the battery can deliver AtRate() for
//  at least 10 seconds.
    readWord("AtRateTimeToEmpty", "min", 0x06, 0, 65535, 0); // <<--

//  11.8 0x07 AtRateOK()
//  This read word function returns a Boolean value that indicates whether the battery can deliver AtRate() for
//  at least 10 seconds.
//  0x07 AtRateOK() R Word U2 0 65535 —
//  NOTE: 0 = False. The gauge cannot deliver energy for 10 s, based on the discharge rate indicated
//  in AtRate().
//  > than 0 = True. The gauge can deliver energy for 10 s, based on the discharge rate
//  indicated in AtRate().
    readWord("AtRateOK", "0.1°K", 0x07, 0, 65535, 0); // <<--

//  11.9 0x08 Temperature()
//  This read word function returns the temperature in units 0.1°K.
//  0x08 Temperature() R Word U2 0 65535 0.1°K
    readWord("Temperature", "0.1°K", 0x08, 0, 65535, 0); // <<--

//  11.10 0x09 Voltage()
//  This read word function returns the sum of the measured cell voltages.
//  0x09 Voltage() R Word U2 0 65535 mV
    readWord("Voltage", "mV", 0x09, 0, 65535, 0); // <<--

//  11.11 0x0A Current()
//  This read word function returns the measured current from the coulomb counter.
//  0x0A Current() R Word I2 –32767, 32768 mA
    readWord("Current", "mA", 0x0A, -32767, 32768, 0); // <<--

//  11.12 0x0B AverageCurrent()
//  0x0B AverageCurrent() R Word I2 -32767 32768 mA
    readWord("AverageCurrent", "mA", 0x0B, -32767, 32768, 0); // <<--

//  11.13 0x0C MaxError()
//  This read word function returns the expected margin of error, in %, in the state-of-charge calculation with a
//  range of 1 to 100%.
//  0x0C MaxError() R Word U1% 0% 100%
    readWord("MaxError", "%", 0x0C, 0, 100, 0); // <<--

//  CONDITION ACTION
//  Full device reset MaxError()= 100%
//  RA-table only updated MaxError()= 5%
//  QMax only updated MaxError()= 3%
//  RA-table and QMax updated MaxError()= 1%
//  Each CycleCount() increment after last valid QMax update MaxError()increment by 0.05%
//  The Configuration:Max Error Time Cycle Equivalent period passed
//  since the last valid QMax update
//  MaxError()increment by 0.05%.

//  11.14 0x0D RelativeStateOfCharge()
//  This read word function returns the predicted remaining battery capacity as a percentage of
//  FullChargeCapacity().
    readWord("RelativeStateOfCharge", "%", 0x0D, 0, 100, 0); // <<--

//  11.15 0x0E AbsoluteStateOfCharge()
//  This read word function returns the predicted remaining battery capacity as a percentage.
//  0x0E AbsoluteStateOfCharge() R Word U1 0% 100%
    readWord("AbsoluteStateOfCharge", "%", 0x0E, 0, 100, 0); // <<--

//  11.16 0x0F RemainingCapacity()
//  This read word function returns the predicted remaining battery capacity.
//  0x0F RemainingCapacity() R R R Word U2 0 65535
//  mAh/10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
    readWord("RemainingCapacity", "mAh/10 mWh", 0x0F, 0, 65535, 0); // <<--

//  11.17 0x10 FullChargeCapacity()
//  This read word function returns the predicted battery capacity when full charged.
//  0x10 FullChargeCapacity() R R R Word U2 0 65535
//  mAh/10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
    readWord("FullChargeCapacity", "mAh/10 mWh", 0x10, 0, 65535, 0); // <<--

//  11.18 0x11 RunTimeToEmpty()
//  This read word function returns the predicted remaining battery capacity based on the present rate of
//  discharge.
//  0x11 RunTimeToEmpty() R R R Word U2 0 65535 min
//  NOTE: 65535 = Battery is not being discharged.
    readWord("RunTimeToEmpty", "min", 0x11, 0, 65535, 0); // <<--

//  11.19 0x12 AverageTimeToEmpty()
//  This read word function returns the predicted remaining battery capacity based on AverageCurrent().
//  0x12 AverageTimeToEmpty() R R R Word U2 0 65535 min
//  NOTE: 65535 = Battery is not being discharged.
    readWord("AverageTimeToEmpty", "min", 0x12, 0, 65535, 0); // <<--

//  11.20 0x13 AverageTimeToFull()
//  This read word function returns the predicted time to full charge based on AverageCurrent().
//  0x13 AverageTimeToFull() R R R Word U2 0 65535 min
//  NOTE: 65535 = Battery is not being discharged.
    readWord("AverageTimeToFull", "min", 0x13, 0, 65535, 0); // <<--

//  11.21 0x14 ChargingCurrent()
//  This read word function returns the desired charging current.
//  0x14 ChargingCurrent() R R R Word U2 0 65535 mA
//  NOTE: 65535 = Request maximum current
    readWord("ChargingCurrent", "mA", 0x14, 0, 65535, 0); // <<--

//  11.22 0x15 ChargingVoltage()
//  This read word function returns the desired charging voltage.
//  0x15 ChargingVoltage() R R R Word U2 0 65535 mV
//  NOTE: 65535 = Request maximum voltage
    readWord("ChargingVoltage", "mV", 0x15, 0, 65535, 0); // <<--

//  11.23 0x16 BatteryStatus()
//  This read-word function returns various battery status information.
//  0x16 BatteryStatus() R R R Word H2 — —
    readWord("BatteryStatus", "hex", 0x16, 0, 65535, 0); // <<--

//  B15 B14 B13 B12 B11 B10 B9 B8

//  OCA TCA RSVD OTA TDA RSVD RCA RTA

    printf("- OCA        [15] %-49s: %d\n", "Over-Current Alarm", (data[4] & 0x80) > 0);
    printf("- TCA        [14] %-49s: %d\n", "Terminate Charge Alarm", (data[4] & 0x40) > 0);
    printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x20) > 0);
    printf("- OTA        [12] %-49s: %d\n", "Over Temperature Alarm", (data[4] & 0x10) > 0);
    printf("- TDA        [11] %-49s: %d\n", "Terminate Discharge Alarm", (data[4] & 0x08) > 0);
    printf("- RSVD       [10] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x04) > 0);
    printf("- RCA        [9]  %-49s: %d\n", "Remaining Capacity Alarm", (data[4] & 0x02) > 0);
    printf("- RTA        [8]  %-49s: %d\n", "Remaining Time Alarm", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  INIT DSG FC FD EC[3] EC[2] EC[1] EC[0]

    printf("- INIT       [7]  %-49s: %d\n", "Initialization status", (data[3] & 0x80) > 0);
    printf("- DSG        [6]  %-49s: %d\n", "Discharge or Relaxing - no current to battery", (data[3] & 0x40) > 0);
    printf("- FC         [5]  %-49s: %d\n", "Fully Charged", (data[3] & 0x20) > 0);
    printf("- FD         [4]  %-49s: %d\n", "Fully Discharged", (data[3] & 0x10) > 0);
    printf("- EC[3]      [3]  %-49s: %d\n", "Error Code See Error Code Table", (data[3] & 0x08) > 0);
    printf("- EC[2]      [2]  %-49s: %d\n", "Error Code See Error Code Table", (data[3] & 0x04) > 0);
    printf("- EC[1]      [1]  %-49s: %d\n", "Error Code See Error Code Table", (data[3] & 0x02) > 0);
    printf("- EC[0]      [0]  %-49s: %d\n\n", "Error Code See Error Code Table", (data[3] & 0x01) > 0);

//  11.24 0x17 CycleCount()
//  This read word function returns the number of discharge cycles the battery has experienced. The default
//  value is stored in data flash value Cycle Count, which is updated in runtime.
//  0x17 CycleCount() R R/W R/W Word U2 0 65535 cycles
    readWord("CycleCount", "cycles", 0x17, 0, 65535, 0); // <<--

//  11.25 0x18 DesignCapacity()
//  This read word function returns the theoretical pack capacity. The default value is stored in data flash
//  value Design Capacity mAh or Design Capacity cWh.
//  0x18 DesignCapacity() R R/W R/W Word U2 0 65535
//  ", (data[4] & 0x40) > 0);0 mAh/6336 10 mWh
//  NOTE: If BatteryMode()[CAPM] = 0, then the data reports in mAh.
//  If BatteryMode()[CAPM] = 1, then the data reports in 10 mWh.
    readWord("DesignCapacity", "mAh/10 mWh", 0x18, 65535, 0, (data[4] & 0x40) > 0); // <<--

//  11.26 0x19 DesignVoltage()
//  This read word function returns the theoretical pack voltage. The default value is stored in data flash value
//  Design Voltage.
//  0x19 DesignVoltage() R R/W R/W Word U2 7000 18000 14400 mV
    readWord("DesignVoltage", "mV", 0x19, 7000, 18000, 14400); // <<--

//  11.27 0x1A SpecificationInfo()
//  0x1A SpecificationInfo() R R/W R/W Word H2 0x0000 0xFFFF
//  readWord("SpecificationInfo", "", 0x1A, 0x0000, 0xFFFF, 0);

//  B15 B14 B13 B12 B11 B10 B9 B8

//  IPSCALE[3] IPSCALE[2] IPSCALE[1] IPSCALE[0] VSCALE[3] VSCALE[2] VSCALE[1] VSCALE[0]
//  IPSCALE[3:0] [15:12] IP Scale Factor - Unsupported and should be written to 4'b0000
//  VSCALE[3:0] [11:8] Voltage Scale - Unsupported and should be written to 4'b0000

//  B7 B6 B5 B4 B3 B2 B1 B0

//  VERSION[3] VERSION[2] VERSION[1] VERSION[0] REVISION[3] REVISION[2] REVISION[1] REVISION[0]
//  VERSION[3:0] [7:4] Version number - SBS 1.1 with optional PEC Support 4'b0011
//  REVISION[3:0] [3:0] Revision number - Version 1.0 and 1.1 4'b0001
//  0x1B ManufacturerDate()

//  11.28 0x1B ManufacturerDate()
//  This read word function returns the pack's manufacture date.
//  0x1B ManufacturerDate() R R/W R/W Word U2 65535 0
//  NOTE: ManufacturerDate() value is in the following format: Day + Month × 32 + (Year–1980) × 256.
//  readWord("ManufacturerDate", "", 0x1B, 0, 65535, 0);

//  11.29 0x1C SerialNumber()
//  This read word function returns the assigned pack serial number.
//  0x1C SerialNumber() R R/W R/W Word H2 0x0000 0xFFFF 0x0001
    readWord("SerialNumber", "", 0x1C, 0x0000, 0xFFFF, 0x0001);

//  11.30 0x20 ManufacturerName()
//  This read block function returns the pack manufacturer's name.
//  0x20 ManufacturerName() R R R Block S11+1 — — Texas Inst. ASCII
//  readWord("ManufacturerName", "ASCII", 0x20, 0, 0, 0);

//  11.31 0x21 DeviceName()
//  This read block function returns the assigned pack name.
//  0x21 DeviceName() R R R Block S7+1 — — bq40z60 ASCII
//  readWord("DeviceName", "ASCII", 0x21, 0, 0 ,0);

//  11.32 0x22 DeviceChemistry()
//  This read block function returns the battery chemistry used in the pack.
//  0x22 DeviceChemistry() R R R Block S4+1 — — LION ASCII
//  readWord("DeviceChemistry", "ASCII", 0x22, 0, 0, 0);

//  11.33 0x23 ManufacturerData()/CalibrationData()
//  This read block function returns several manufacturing- related pack information codes in the default
//  mode. It is also used to return measured voltage, current, and temperature data for calibration purposes in
//  CALIBRATION mode.
//  readWord("ManufacturerData()/CalibrationData", "", 0x23, 0, 0, 0);

//  CALIBRATION mode.
//  0x23 ManufacturerData() R R R Block H14+1
//  0x23 CalibrationData() R R R Block H2+S24

//  STATUS CONDITION ACTION
//  ManufacturerData Valid command sent Return pack information on ManufacturerData()
//  CalibrationData
//  0x002D to ManufacturerAccess() to enable

//  CALIBRATION mode
//  0xF081 or 0xF082 to ManufacturerAccess() to
//  enable calibration data acquisition
//  Valid command sent
//  Return measured voltage, current, and temperature on
//  ManufacturerData()

//  11.34 0x2F Authenticate()/ManufacturerInput()
//  This read/write block function provides SHA-1 authentication in the default mode. It is also used to perform
//  data flash read/writes in DATA FLASH ACCESS mode.
//  0x2F Authenticate() R/W R/W R/W Block H20+1 — — —
//  0x2F ManufacturerInput() R/W R/W R/W Block H32 — — —
//  readWord("Authenticate()/ManufacturerInput()", "", 0x2F, 0, 0, 0);

//  11.35 0x3C CellVoltage4()
//  This read word function returns the cell 4 voltage.
//  0x3C CellVoltage4() R R R Word U2 — 65535 0 mV
    readWord("CellVoltage4", "mV", 0x3C, 0, 65535, 0); // <<--

//  11.36 0x3D CellVoltage3()
//  This read word function returns the cell 3 voltage.
//  0x3D CellVoltage3() R R R Word U2 — 65535 0 mV
    readWord("CellVoltage3", "mV", 0x3D, 0, 65535, 0); // <<--

//  11.37 0x3E CellVoltage2()
//  This read word function returns the cell 2 voltage.
//  0x3E CellVoltage2() R R R Word U2 — 65535 0 mV
    readWord("CellVoltage2", "mV", 0x3E, 0, 65535, 0); // <<--

//  11.38 0x3F CellVoltage1()
//  This read word function returns the cell 1 voltage.
//  0x3F CellVoltage1() R R R Word U2 — 65535 0 mV
    readWord("CellVoltage1", "mV", 0x3F, 0, 65535, 0); // <<--

//  11.39 0x4A InitDischargeSet()
//  This read/write word command updates the BTP set threshold that triggers the BTP interrupt and sets the
//  OperationStatus()[BTP_INT] bit.
//  0x4A InitDischargeSet() R/W R/W R/W Signed Int 2 — 65535 150 mAh
//  readWord("InitDischargeSet", "mAh", 0x4A, 0, 65535, 150); // <<--

//  11.40 0x4B InitChargeSet()
//  The read/write word command updates the BTP clear threshold that de-asserts the BTP interrupt and
//  clears the OperationStatus()[BTP_INT] bit.
//  0x4B InitChargeSet() R/W R/W R/W Signed Int 2 — 65535 175 mAh
//  readWord("InitChargeSet", "mAh", 0x4B, 0, 65535, 175); // <<--

//  11.41 0x4F State of Health (SoH)
//  This read-word command returns the state of health (SoH) information of the battery in percentage of
//  design capacity and design energy.
    readWord("State of Health", "%", 0x4F, 0, 0, 0); // <<--

//  11.42 0x50 SafetyAlert
//  This command returns the SafetyAlert() flags
//  0x50 SafetyAlert() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("SafetyAlert", "", 0x50, 0x00000000, 0xFFFFFFFF, 0);

//  11.1.36.1 SafetyAlert() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  RSVD RSVD ACOV COT UTD UTC PCHGC CHGV

    printf("- RSVD       [31] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x80) > 0);
    printf("- RSVD       [30] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x40) > 0);
    printf("- ACOV       [29] %-49s: %d\n", "n/a", (data[6] & 0x20) > 0);
    printf("- COT        [28] %-49s: %d\n", "n/a", (data[6] & 0x10) > 0);
    printf("- UTD        [27] %-49s: %d\n", "Under temperature During Discharge", (data[6] & 0x08) > 0);
    printf("- UTC        [26] %-49s: %d\n", "Under temperature During Charge", (data[6] & 0x04) > 0);
    printf("- PCHGC      [25] %-49s: %d\n", "Over Pre-Charge Current", (data[6] & 0x02) > 0);
    printf("- CHGV       [24] %-49s: %d\n", "Over Charging Voltage", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  CHGC OC RSVD CTO PTOS RSVD RSVD OTF

    printf("- CHGC       [23] %-49s: %d\n", "Over Charging Current", (data[5] & 0x80) > 0);
    printf("- OC         [22] %-49s: %d\n", "Over Charge", (data[5] & 0x40) > 0);
    printf("- RSVD       [21] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x20) > 0);
    printf("- CTO        [20] %-49s: %d\n", "Charge Timeout", (data[5] & 0x10) > 0);
    printf("- PTOS       [19] %-49s: %d\n", "Precharge Timeout Suspend", (data[5] & 0x08) > 0);
    printf("- RSVD       [18] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x04) > 0);
    printf("- RSVD       [17] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x02) > 0);
    printf("- OTF        [16] %-49s: %d\n", "n/a", (data[5] & 0x01) > 0);

//  11.1.36.2 SafetyAlert() Low Word 

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD CUVC OTD OTC ASCDL RSVD ASCCL RSVD

    printf("- RSVD       [15] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x80) > 0);
    printf("- CUVC       [14] %-49s: %d\n", "Cell Undervoltage Compensated", (data[4] & 0x40) > 0);
    printf("- OTD        [13] %-49s: %d\n", "Over Temperature during Discharge", (data[4] & 0x20) > 0);
    printf("- OTC        [12] %-49s: %d\n", "Over Temperature during Charge", (data[4] & 0x10) > 0);
    printf("- ASCDL      [11] %-49s: %d\n", "Short-circuit during Discharge Latch", (data[4] & 0x08) > 0);
    printf("- RSVD       [10] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x04) > 0);
    printf("- ASCCL      [9]  %-49s: %d\n", "Short-circuit during Charge Latch", (data[4] & 0x02) > 0);
    printf("- RSVD       [8]  %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  AOLDL AOLD OCD2 OCD1 OCC2 OCC1 COV CUV

    printf("- AOLDL      [7]  %-49s: %d\n", "Overload during Discharge Latch", (data[3] & 0x80) > 0);
    printf("- AOLD       [6]  %-49s: %d\n", "Overload during Discharge 1", (data[3] & 0x40) > 0);
    printf("- OCD2       [5]  %-49s: %d\n", "Over Current during Discharge 2", (data[3] & 0x20) > 0);
    printf("- OCD1       [4]  %-49s: %d\n", "Over Current during Discharge 1", (data[3] & 0x10) > 0);
    printf("- OCC2       [3]  %-49s: %d\n", "Over Current during Charge 2", (data[3] & 0x08) > 0);
    printf("- OCC1       [2]  %-49s: %d\n", "Over Current during Charge 1", (data[3] & 0x04) > 0);
    printf("- COV        [1]  %-49s: %d\n", "Cell Over Voltage", (data[3] & 0x02) > 0);
    printf("- CUV        [0]  %-49s: %d\n\n", "Cell Under Voltage", (data[3] & 0x01) > 0);

//  11.43 0x51 SafetyStatus
//  This command returns the SafetyStatus() flags.
//  0x51 SafetyStatus() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("SafetyStatus", "", 0x51, 0, 0x00000000, 0xFFFFFFFF);

//  11.1.37.1 SafetyStatus() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  RSVD RSVD ACOV COT UTD UTC PCHGC CHGV

    printf("- RSVD       [31] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x80) > 0);
    printf("- RSVD       [30] %-49s: %d\n", "Reserved - Do not use", (data[6] & 0x40) > 0);
    printf("- ACOV       [29] %-49s: %d\n", "n/a", (data[6] & 0x20) > 0);
    printf("- COT        [28] %-49s: %d\n", "n/a", (data[6] & 0x10) > 0);
    printf("- UTD        [27] %-49s: %d\n", "Under temperature During Discharge", (data[6] & 0x08) > 0);
    printf("- UTC        [26] %-49s: %d\n", "Under temperature During Charge", (data[6] & 0x04) > 0);
    printf("- PCHGC      [25] %-49s: %d\n", "Over Pre-Charge Current", (data[6] & 0x02) > 0);
    printf("- CHGV       [24] %-49s: %d\n", "Over Charging Voltage", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  CHGC OC RSVD CTO PTOS RSVD RSVD OTF

    printf("- CHGC       [23] %-49s: %d\n", "Over Charging Current", (data[5] & 0x80) > 0);
    printf("- OC         [22] %-49s: %d\n", "Over Charge", (data[5] & 0x40) > 0);
    printf("- RSVD       [21] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x20) > 0);
    printf("- CTO        [20] %-49s: %d\n", "Charge Timeout", (data[5] & 0x10) > 0);
    printf("- PTOS       [19] %-49s: %d\n", "Precharge Timeout Suspend", (data[5] & 0x08) > 0);
    printf("- RSVD       [18] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x04) > 0);
    printf("- RSVD       [17] %-49s: %d\n", "Reserved - Do not use", (data[5] & 0x02) > 0);
    printf("- OTF        [16] %-49s: %d\n", "n/a", (data[5] & 0x01) > 0);

//  11.1.37.2 SafetyStatus() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD CUVC OTD OTC ASCDL RSVD ASCCL RSVD

    printf("- RSVD       [15] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x80) > 0);
    printf("- CUVC       [14] %-49s: %d\n", "Cell Undervoltage Compensated", (data[4] & 0x40) > 0);
    printf("- OTD        [13] %-49s: %d\n", "Over Temperature during Discharge", (data[4] & 0x20) > 0);
    printf("- OTC        [12] %-49s: %d\n", "Over Temperature during Charge", (data[4] & 0x10) > 0);
    printf("- ASCDL      [11] %-49s: %d\n", "Short-circuit during Discharge Latch", (data[4] & 0x08) > 0);
    printf("- RSVD       [10] %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x04) > 0);
    printf("- ASCCL      [9]  %-49s: %d\n", "Short-circuit during Charge Latch", (data[4] & 0x02) > 0);
    printf("- RSVD       [8]  %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  AOLDL AOLD OCD2 OCD1 OCC2 OCC1 COV CUV

    printf("- AOLDL      [7]  %-49s: %d\n", "Overload during Discharge Latch", (data[3] & 0x80) > 0);
    printf("- AOLD       [6]  %-49s: %d\n", "Overload during Discharge", (data[3] & 0x40) > 0);
    printf("- OCD2       [5]  %-49s: %d\n", "Over Current during Discharge 2", (data[3] & 0x20) > 0);
    printf("- OCD1       [4]  %-49s: %d\n", "Over Current during Discharge 1", (data[3] & 0x10) > 0);
    printf("- OCC2       [3]  %-49s: %d\n", "Over Current during Charge 2", (data[3] & 0x08) > 0);
    printf("- OCC1       [2]  %-49s: %d\n", "Over Current during Charge 1", (data[3] & 0x04) > 0);
    printf("- COV        [1]  %-49s: %d\n", "Cell Over Voltage", (data[3] & 0x02) > 0);
    printf("- CUV        [0]  %-49s: %d\n\n", "Cell Under Voltage", (data[3] & 0x01) > 0);

//  11.44 0x52 PFAlert
//  This command returns the PFAlert() flags.
//  0x52 PFAlert() — R R Block H4 0x00000000, 0xFFFFFFFF — —
    readWord("PFAlert", "", 0x52, 0x00000000, 0xFFFFFFFF, 0);

//  11.1.38.1 PFAlert() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  TS4 TS3 TS2 TS1 RSVD RSVD OPNC RSVD

    printf("- TS4        [31] %-49s: %d\n", "Open Thermistor - TS4 Failure", (data[6] & 0x80) > 0);
    printf("- TS3        [30] %-49s: %d\n", "Open Thermistor - TS3 Failure", (data[6] & 0x40) > 0);
    printf("- TS2        [29] %-49s: %d\n", "Open Thermistor - TS2 Failure", (data[6] & 0x20) > 0);
    printf("- TS1        [28] %-49s: %d\n", "Open Thermistor - TS1 Failure", (data[6] & 0x10) > 0);
    printf("- RSVD       [27] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x08) > 0);
    printf("- RSVD       [26] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x04) > 0);
    printf("- OPNC       [25] %-49s: %d\n", "Open Cell Tab Connection Failure", (data[6] & 0x02) > 0);
    printf("- RSVD       [24] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD 2LVL AFEC AFER FUSE RSVD DFETF CFETF

    printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use.", (data[5] & 0x80) > 0);
    printf("- 2LVL       [22] %-49s: %d\n", "Second Level Protector Failure", (data[5] & 0x40) > 0);
    printf("- AFEC       [21] %-49s: %d\n", "AFE Communication Failure", (data[5] & 0x20) > 0);
    printf("- AFER       [20] %-49s: %d\n", "AFE Register Failure", (data[5] & 0x10) > 0);
    printf("- FUSE       [19] %-49s: %d\n", "Chemical Fuse Failure", (data[5] & 0x08) > 0);
    printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use.", (data[5] & 0x04) > 0);
    printf("- DFETF      [17] %-49s: %d\n", "Discharge FET Failure", (data[5] & 0x02) > 0);
    printf("- CFETF      [16] %-49s: %d\n", "Charge FET Failure", (data[5] & 0x01) > 0);

//  11.1.38.2 PFAlert() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD RSVD VIMA VIMR CD IMP CB

    printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
    printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
    printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x20) > 0);
    printf("- VIMA       [12] %-49s: %d\n", "Voltage Imbalance while Pack Active", (data[4] & 0x10) > 0);
    printf("- VIMR       [11] %-49s: %d\n", "Voltage Imbalance while Pack Resting", (data[4] & 0x08) > 0);
    printf("- CD         [10] %-49s: %d\n", "Capacity Degradation Failure", (data[4] & 0x04) > 0);
    printf("- IMP        [9]  %-49s: %d\n", "Impedance Failure", (data[4] & 0x02) > 0);
    printf("- CB         [8]  %-49s: %d\n", "Cell Balancing Failure", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  QIM SOTF RSVD SOT SOCD SOCC SOV SUV

    printf("- QIM        [7]  %-49s: %d\n", "QMax Imbalance Failure", (data[3] & 0x80) > 0);
    printf("- SOTF       [6]  %-49s: %d\n", "Safety Over-Temperature Failure", (data[3] & 0x40) > 0);
    printf("- RSVD       [5]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
    printf("- SOT        [4]  %-49s: %d\n", "Safety Over-Temperature Cell Failure", (data[3] & 0x10) > 0);
    printf("- SOCD       [3]  %-49s: %d\n", "n/a", (data[3] & 0x08) > 0);
    printf("- SOCC       [2]  %-49s: %d\n", "n/a", (data[3] & 0x04) > 0);
    printf("- SOV        [1]  %-49s: %d\n", "Safety Cell Over-Voltage Failure", (data[3] & 0x02) > 0);
    printf("- SUV        [0]  %-49s: %d\n\n", "Safety Cell Under-Voltage Failure", (data[3] & 0x01) > 0);

//  11.45 0x53 PFStatus
//  This command returns the PFStatus() flags.
//  0x53 PFStatus() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("PFStatus", "", 0x53, 0x00000000, 0xFFFFFFFF, 0);

//  11.1.39.1 PFStatus() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  TS4 TS3 TS2 TS1 RSVD RSVD OPNC RSVD

    printf("- TS4        [31] %-49s: %d\n", "Open Thermistor - TS4 Failure", (data[6] & 0x80) > 0);
    printf("- TS3        [30] %-49s: %d\n", "Open Thermistor - TS3 Failure", (data[6] & 0x40) > 0);
    printf("- TS2        [29] %-49s: %d\n", "Open Thermistor - TS2 Failure", (data[6] & 0x20) > 0);
    printf("- TS1        [28] %-49s: %d\n", "Open Thermistor - TS1 Failure", (data[6] & 0x10) > 0);
    printf("- RSVD       [27] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x08) > 0);
    printf("- RSVD       [26] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x04) > 0);
    printf("- OPNC       [25] %-49s: %d\n", "Open Cell Tab Connection Failure", (data[6] & 0x02) > 0);
    printf("- RSVD       [24] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD 2LVL AFEC AFER FUSE RSVD DFETF CFETF

    printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x80) > 0);
    printf("- 2LVL       [22] %-49s: %d\n", "Second Level Protector Failure", (data[5] & 0x40) > 0);
    printf("- AFEC       [21] %-49s: %d\n", "AFE Communication Failure", (data[5] & 0x20) > 0);
    printf("- AFER       [20] %-49s: %d\n", "AFE Register Failure", (data[5] & 0x10) > 0);
    printf("- FUSE       [19] %-49s: %d\n", "Chemical Fuse Failure", (data[5] & 0x08) > 0);
    printf("- RSVD       [18] %-49s: %d\n", "Reserved - do not use", (data[3] & 0x04) > 0);
    printf("- DFETF      [17] %-49s: %d\n", "Discharge FET Failure", (data[5] & 0x02) > 0);
    printf("- CFETF      [16] %-49s: %d\n", "Charge FET Failure", (data[5] & 0x01) > 0);

//  11.1.39.2 PFStatus() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD RSVD VIMA VIMR CD IMP CB

    printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
    printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
    printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x20) > 0);
    printf("- VIMA       [12] %-49s: %d\n", "Voltage Imbalance while Pack Active", (data[4] & 0x10) > 0);
    printf("- VIMR       [11] %-49s: %d\n", "Voltage Imbalance while Pack Resting", (data[4] & 0x08) > 0);
    printf("- CD         [10] %-49s: %d\n", "Capacity Degradation Failure", (data[4] & 0x04) > 0);
    printf("- IMP        [9]  %-49s: %d\n", "Impedance Failure", (data[4] & 0x02) > 0);
    printf("- CB         [8]  %-49s: %d\n", "Cell Balancing Failure", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  QIM SOTF RSVD SOT SOCD SOCC SOV SUV

    printf("- QIM        [7]  %-49s: %d\n", "QMax Imbalance Failure", (data[3] & 0x80) > 0);
    printf("- SOTF       [6]  %-49s: %d\n", "Safety Over-Temperature Failure", (data[3] & 0x40) > 0);
    printf("- RSVD       [5]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x20) > 0);
    printf("- SOT        [4]  %-49s: %d\n", "Safety Over-Temperature Cell Failure", (data[3] & 0x10) > 0);
    printf("- SOCD       [3]  %-49s: %d\n", "n/a", (data[3] & 0x08) > 0);
    printf("- SOCC       [2]  %-49s: %d\n", "n/a", (data[3] & 0x04) > 0);
    printf("- SOV        [1]  %-49s: %d\n", "Safety Cell Over-Voltage Failure", (data[3] & 0x02) > 0);
    printf("- SUV        [0]  %-49s: %d\n\n", "Safety Cell Under-Voltage Failure", (data[3] & 0x01) > 0);

//  11.46 0x54 OperationStatus
//  This command returns the OperationStatus() flags.
//  0x54 OperationStatus() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("OperationStatus", "hex", 0x54, 0x00000000, 0xFFFFFFFF, 0);

//  11.1.40.1 OperationStatus() High Word

//  B31 B30 B29 B28 B27 B26 B25 B24

//  RSVD RSVD EMSHUT CB SLPCC SLPAD SMBLCAL INIT

    printf("- RSVD       [31] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x80) > 0);
    printf("- RSVD       [30] %-49s: %d\n", "Reserved - do not use", (data[6] & 0x40) > 0);
    printf("- EMSHUT     [29] %-49s: %d\n", "Emergency Shutdown", (data[6] & 0x20) > 0);
    printf("- CB         [28] %-49s: %d\n", "Cell Balancing", (data[6] & 0x10) > 0);
    printf("- SLPCC      [27] %-49s: %d\n", "CC Measurement in SLEEP mode", (data[6] & 0x08) > 0);
    printf("- SLPAD      [26] %-49s: %d\n", "ADC Measurement in SLEEP mode", (data[6] & 0x04) > 0);
    printf("- SMBLCAL    [25] %-49s: %d\n", "Auto CC calibration when the bus is low", (data[6] & 0x02) > 0);
    printf("- INIT       [24] %-49s: %d\n", "Initialization after full reset", (data[6] & 0x01) > 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  SLEEPM XL CAL_OFFSET CAL AUTOCALM AUTH LED SDM

    printf("- SLEEPM     [23] %-49s: %d\n", "SLEEP mode triggered via command", (data[5] & 0x80) > 0);
    printf("- XL         [22] %-49s: %d\n", "400 kHz SMBus mode", (data[5] & 0x40) > 0);
    printf("- CAL_OFFSET [21] %-49s: %d\n", "Calibration output (raw CC) ", (data[5] & 0x20) > 0);
    printf("- CAL        [20] %-49s: %d\n", "Calibration output (raw ADC and CC) generated", (data[5] & 0x10) > 0);
    printf("- AUTOCALM   [19] %-49s: %d\n", "Auto CC Offset Calibration by MAC AutoCCOffset()", (data[5] & 0x08) > 0);
    printf("- AUTH       [18] %-49s: %d\n", "Authentication in progress", (data[5] & 0x04) > 0);
    printf("- LED        [17] %-49s: %d\n", "LED Display", (data[5] & 0x02) > 0);
    printf("- SDM        [16] %-49s: %d\n", "Shutdown triggered via command", (data[5] & 0x01) > 0);

//  11.1.40.2 OperationStatus() Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  SLEEP XCHG XDSG PF SS SDV SEC[1] SEC[0]

    printf("- SLEEP      [15] %-49s: %d\n", "Sleep mode conditions met", (data[4] & 0x80) > 0);
    printf("- XCHG       [14] %-49s: %d\n", "Charging disabled", (data[4] & 0x40) > 0);
    printf("- XDSG       [13] %-49s: %d\n", "Discharging disabled", (data[4] & 0x20) > 0);
    printf("- PF         [12] %-49s: %d\n", "Permanent Fault mode", (data[4] & 0x10) > 0);
    printf("- SS         [11] %-49s: %d\n", "Safety mode", (data[4] & 0x08) > 0);
    printf("- SDV        [10] %-49s: %d\n", "Shutdown triggered via low pack voltage", (data[4] & 0x04) > 0);
    printf("- SEC[1]     [9]  %-49s: %d\n", "Security Status", (data[4] & 0x02) > 0);
    printf("- SEC[0]     [8]  %-49s: %d\n", "Security Status", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  BTP_INT ACLW FUSE ACFET PCHG CHG DSG PRES

    printf("- BTP_INT    [7]  %-49s: %d\n", "Battery Trip Point interrupt", (data[3] & 0x80) > 0);
    printf("- ACLW       [6]  %-49s: %d\n", "AC Voltage below threshold", (data[3] & 0x40) > 0);
    printf("- FUSE       [5]  %-49s: %d\n", "Fuse status", (data[3] & 0x20) > 0);
    printf("- ACFET      [4]  %-49s: %d\n", "AC FET status", (data[3] & 0x10) > 0);
    printf("- PCHG       [3]  %-49s: %d\n", "Pre-charge FET status", (data[3] & 0x08) > 0);
    printf("- CHG        [2]  %-49s: %d\n", "Charge FET status", (data[3] & 0x04) > 0);
    printf("- DSG        [1]  %-49s: %d\n", "Discharge FET status", (data[3] & 0x02) > 0);
    printf("- PRES       [0]  %-49s: %d\n\n", "System Present", (data[3] & 0x01) > 0);

//  11.47 0x55 ChargingStatus
//  This command returns the ChargingStatus() flags.
//  0x55 ChargingStatus() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("ChargingStatus", "hex", 0x55, 0x00000000, 0xFFFFFFFF, 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD RSVD RSVD RSVD RSVD LCHG CHGSTAT CHRG

    printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x80) > 0);
    printf("- RSVD       [22] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x40) > 0);
    printf("- RSVD       [21] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x20) > 0);
    printf("- RSVD       [20] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x10) > 0);
    printf("- RSVD       [19] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x08) > 0);
    printf("- LCHG       [18] %-49s: %d\n", "Low Charge Current Mode ", (data[5] & 0x04) > 0);
    printf("- CHGSTAT    [17] %-49s: %d\n", "Charger providing current to battery", (data[5] & 0x02) > 0);
    printf("- CHRG       [16] %-49s: %d\n", "Charger Enable", (data[5] & 0x01) > 0);

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD CVRD MLC[2] MLC[1] MLC[0] CVR CCR

    printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
    printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
    printf("- CVRD       [13] %-49s: %d\n", "Voltage/Current Override Mode", (data[4] & 0x20) > 0);
    printf("- MLC[2]     [12] %-49s: %d\n", "Multi-level Charging Mode Not supported - ignore", (data[4] & 0x10) > 0);
    printf("- MLC[1]     [11] %-49s: %d\n", "Multi-level Charging Mode Not supported - ignore", (data[4] & 0x08) > 0);
    printf("- MLC[0]     [10] %-49s: %d\n", "Multi-level Charging Mode Not supported - ignore", (data[4] & 0x04) > 0);
    printf("- CVR        [9]  %-49s: %d\n", "Charging Voltage Rate of Change", (data[4] & 0x02) > 0);
    printf("- CCR        [8]  %-49s: %d\n", "Charging Current Rate of Change", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  VCT MCHG SU IN HV MV LV PV

    printf("- VCT        [7]  %-49s: %d\n", "Charge Termination", (data[3] & 0x80) > 0);
    printf("- MCHG       [6]  %-49s: %d\n", "Maintenance Charge", (data[3] & 0x40) > 0);
    printf("- SU         [5]  %-49s: %d\n", "Charge Suspend", (data[3] & 0x20) > 0);
    printf("- IN         [4]  %-49s: %d\n", "Charge Inhibit", (data[3] & 0x10) > 0);
    printf("- HV         [3]  %-49s: %d\n", "High Cell Voltage Charge Conditions", (data[3] & 0x08) > 0);
    printf("- MV         [2]  %-49s: %d\n", "Medium Cell Voltage Charge Conditions", (data[3] & 0x04) > 0);
    printf("- LV         [1]  %-49s: %d\n", "Low Cell Voltage Charge Conditions", (data[3] & 0x02) > 0);
    printf("- PV         [0]  %-49s: %d\n\n", "Pre-Charge Cell Voltage Charge Conditions", (data[3] & 0x01) > 0);

//  11.48 0x56 GaugingStatus
//  This command returns the GaugingStatus() flags.
//  0x56 GaugingStatus() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("GaugingStatus", "hex", 0x56, 0x00000000, 0xFFFFFFFF, 0);

//  B23 B22 B21 B20 B19 B18 B17 B16

//  RSVD RSVD RSVD OCVFR LDMD RX QMAX VDQ

    printf("- RSVD       [23] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x80) > 0);
    printf("- RSVD       [22] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x40) > 0);
    printf("- RSVD       [21] %-49s: %d\n", "Reserved - do not use", (data[5] & 0x20) > 0);
    printf("- OCVFR      [20] %-49s: %d\n", "Open Circuit Voltage Flat Region during RELAX", (data[5] & 0x10) > 0);
    printf("- LDMD       [19] %-49s: %d\n", "LOAD mode - battery under load", (data[5] & 0x08) > 0);
    printf("- RX         [18] %-49s: %d\n", "Resistance Update to DataFlash", (data[5] & 0x04) > 0);
    printf("- QMAX       [17] %-49s: %d\n", "QMax update to DataFlash", (data[5] & 0x02) > 0);
    printf("- VDQ        [16] %-49s: %d\n", "Discharge qualified for learning", (data[5] & 0x01) > 0);

//  11.1.42.1 GaugingStatus Low Word

//  B15 B14 B13 B12 B11 B10 B9 B8

//  NSFM RSVD SLPQMAX QEN VOK RDIS RSVD REST

    printf("- NSFM       [15] %-49s: %d\n", "Negative Ra resistance scaling mode", (data[4] & 0x80) > 0);
    printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
    printf("- SLPQMAX    [13] %-49s: %d\n", "OCV update in SLEEP Mode", (data[4] & 0x20) > 0);
    printf("- QEN        [12] %-49s: %d\n", "Impedance Track - Ra and QMax updates occurring", (data[4] & 0x10) > 0);
    printf("- VOK        [11] %-49s: %d\n", "Voltages Ok for QMax update.", (data[4] & 0x08) > 0);
    printf("- RDIS       [10] %-49s: %d\n", "Resistance table updates in DataFlash", (data[4] & 0x04) > 0);
    printf("- RSVD       [9]  %-49s: %d\n", "Reserved - Do not use", (data[4] & 0x02) > 0);
    printf("- REST       [8]  %-49s: %d\n", "In RELAX mode and OCV updates taken", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  CF DSG EDV BAL_EN TC TD FC FD

    printf("- CF         [7]  %-49s: %d\n", "Condition Flag", (data[3] & 0x80) > 0);
    printf("- DSG        [6]  %-49s: %d\n", "Discharge/Relax", (data[3] & 0x40) > 0);
    printf("- EDV        [5]  %-49s: %d\n", "End-of-Discharge Voltage reached during discharge", (data[3] & 0x20) > 0);
    printf("- BAL_EN     [4]  %-49s: %d\n", "Cell balancing if possible ", (data[3] & 0x10) > 0);
    printf("- TC         [3]  %-49s: %d\n", "Terminate Charge", (data[3] & 0x08) > 0);
    printf("- TD         [2]  %-49s: %d\n", "Terminate Discharge", (data[3] & 0x04) > 0);
    printf("- FC         [1]  %-49s: %d\n", "Fully Charged", (data[3] & 0x02) > 0);
    printf("- FD         [0]  %-49s: %d\n\n", "Fully Discharged", (data[3] & 0x01) > 0);

//  11.49 0x57 ManufacturingStatus
//  This command returns the ManufacturingStatus() flags.
//  0x57 ManufacturingStatus() — R R Block H4 0x00000000 0xFFFFFFFF — —
    readWord("ManufacturingStatus", "hex", 0x57, 0x00000000, 0xFFFFFFFF, 0);

//  B15 B14 B13 B12 B11 B10 B9 B8

//  RSVD RSVD RSVD RSVD RSVD CHGR_EN LED_EN FUSE_EN

    printf("- RSVD       [15] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x80) > 0);
    printf("- RSVD       [14] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x40) > 0);
    printf("- RSVD       [13] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x20) > 0);
    printf("- RSVD       [12] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x10) > 0);
    printf("- RSVD       [11] %-49s: %d\n", "Reserved - do not use", (data[4] & 0x08) > 0);
    printf("- CHGR_EN    [10] %-49s: %d\n", "Charger Enabled, independent of Adapter presences", (data[4] & 0x04) > 0);
    printf("- LED_EN     [9]  %-49s: %d\n", "LED outputs", (data[4] & 0x02) > 0);
    printf("- FUSE_EN    [8]  %-49s: %d\n", "Fuse control", (data[4] & 0x01) > 0);

//  B7 B6 B5 B4 B3 B2 B1 B0

//  BBR_EN PF_EN LF_EN FET_EN GAUGE_EN RSVD RSVD RSVD

    printf("- BBR_EN     [7]  %-49s: %d\n", "Black Box Recorder", (data[3] & 0x80) > 0);
    printf("- PF_EN      [6]  %-49s: %d\n", "Permanent Faults", (data[3] & 0x40) > 0);
    printf("- LF_EN      [5]  %-49s: %d\n", "Lifetime Recording", (data[3] & 0x20) > 0);
    printf("- FET_EN     [4]  %-49s: %d\n", "FET Control by firmware", (data[3] & 0x10) > 0);
    printf("- GAUGE_EN   [3]  %-49s: %d\n", "Battery Fuel Gauging", (data[3] & 0x08) > 0);
    printf("- RSVD       [2]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x04) > 0);
    printf("- RSVD       [1]  %-49s: %d\n", "Reserved - do not use", (data[3] & 0x02) > 0);
    printf("- RSVD       [0]  %-49s: %d\n\n", "Reserved - do not use", (data[3] & 0x01) > 0);

//  11.50 0x58 AFE Register
//  This command returns a snapshot of the AFE register settings.
//  0x58 AFERegister() — R R Block — — — — —
//  readWord("AFERegister", "", 0x58, 0, 0, 0);

//  11.51 0x59 TURBO_POWER
//  TURBO_POWER reports the maximal peak power value, MAX_POWER. The gauge computes a new
//  RAM value every second. TURBO_POWER() is initialized to the result of the max power calculation at
//  reset or power up.
//  0x59 TURBO_POWER() R R R/W Word — — — — cW
//  NOTE: Computes and provides Turbo Power information based on the battery pack configuration.
//  readWord("TURBO_POWER", "cW", 0x59, 0, 0, 0);

//  11.52 0x5A TURBO_FINAL
//  TURBO_FINAL sets Min Turbo Power, which represents the minimal TURBO BOOST mode power level
//  during active operation (such as, non-SLEEP) after all higher TURBO BOOST mode levels are disabled
//  (expected at the end of discharge).
//  0x5A TURBO_FINAL() R/W R/W R/W Word — — — — cW
//  readWord("TURBO_FINAL", "cW", 0x59, 0, 0, 0);

//  11.53 0x5B TURBO_PACK_R
//  TURBO_PACK_R sets the RAM value of the battery pack serial resistance, including resistance
//  associated with FETs, traces, sense resistors, and so forth. TURBO_PACK_R() is initialized to the data
//  flash value Pack Resistance.
//  0x5B TURBO_PACK_R() R/W R/W R/W Word — — — — mΩ
//  readWord("TURBO_PACK_R", "mΩ", 0x5B, 0, 0, 0);

//  11.54 0x5C TURBO_SYS_R
//  TURBO_SYS_R sets the RAM value of the system serial resistance along the path from battery to system
//  power converter input that includes FETs, traces, sense resistors, and so forth. TURBO_SYS_R() is
//  initialized to the data flash value System Resistance.
//  0x5C TURBO_SYS_R() R/W R/W R/W Word — — — — mΩ
//  readWord("TURBO_SYS_R", "mΩ", 0x5C, 0, 0, 0);

//  11.55 0x5D TURBO_EDV
//  TURBO_EDV sets the Minimal Voltage at the system-power converter input at which the system will still
//  operate. TURBO_EDV() is initialized to the data flash value Terminate Voltage. A write to this command
//  will overwrite the DF value. Intended use is to write it once on first use to adjust for possible changes in
//  system design from the time the battery pack was designed.
//  0x5D TURBO_EDV() R/W R/W R/W Word — — — — mV
//  readWord("TURBO_EDV", "mV", 0x5D, 0, 0, 0);

//  11.56 0x5E TURBO_CURRENT
//  The gauge computes a maximal discharge current supported by the cell design for a C-rate discharge
//  pulse for 10 ms. This value is updated every 1 s for the system to read.
//  0x5D TURBO_CURRENT() R R R/W Word — — — — mAh
//  NOTE: Computes a maximal discharge current supported by the cell design.
//  readWord("TURBO_CURRENT3", "mAh", 0x5E, 0, 0, 0);

//  11.57 0x60 Lifetime Data Block 1
//  This command returns the first block of Lifetime data.
//  0x60 LifeTimeDataBlock1() — R R Block — — — — —
    readWord("Lifetime Data Block 1", "", 0x60, 0, 0, 0);

//  11.58 0x61 Lifetime Data Block 2
//  This command returns the second block of Lifetime data.
//  0x61 LifeTimeDataBlock2() — R R Block — — — — —
    readWord("Lifetime Data Block 2", "", 0x61, 0, 0, 0);

    printf("- [0]     %-57s: %d\n", "No. of Shutdowns", data[3]);
    printf("- [1]     %-57s: %d\n", "No. of Partial Resets", data[4]);
    printf("- [2]     %-57s: %d\n", "No. of Full Resets", data[5]);
    printf("- [3]     %-57s: %d\n", "No. of WDT resets", data[6]);
    printf("- [4]     %-57s: %d\n", "CB Time Cell 1", data[7]);
    printf("- [5]     %-57s: %d\n", "CB Time Cell 2", data[8]);
    printf("- [6]     %-57s: %d\n", "CB Time Cell 3", data[9]);
    printf("- [7]     %-57s: %d\n\n", "CB Time Cell 4", data[10]);

//  11.59 0x62 Lifetime Data Block 3
//  This command returns the third block of Lifetime data.
    readWord("Lifetime Data Block 3", "", 0x62, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "Total FW Runtime", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n", "Time Spent in UT", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "Time Spent in LT", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n", "Time Spent in STL", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d\n", "Time Spent in RT", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d\n", "Time Spent in STH", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d\n", "Time Spent in HT", data[16] + (data[15] << 8));
    printf("- [15:14] %-57s: %d\n\n", "Time Spent in OT", data[18] + (data[17] << 8));

//  11.60 0x63 Lifetime Data Block 4
//  This command returns the third block of Lifetime data.
//  0x63 LifeTimeDataBlock4() — R R Block — — — — —
    readWord("Lifetime Data Block 4", "", 0x63, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "No. of COV Events", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n", "Last COV Event", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "No. of CUV Events", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n", "Last CUV Event", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d\n", "No. of OCD1 Events", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d\n", "Last OCD1 Event", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d\n", "No. of OCD2 Events", data[16] + (data[15] << 8));
    printf("- [15:14] %-57s: %d\n", "Last OCD2 Event", data[18] + (data[17] << 8));
    printf("- [17:16] %-57s: %d\n", "No. of OCC1 Events", data[20] + (data[19] << 8));
    printf("- [19:18] %-57s: %d\n", "Last OCC1 Event", data[4] + (data[21] << 8));
    printf("- [21:20] %-57s: %d\n", "No. of OCC2 Events", data[22] + (data[3] << 8));
    printf("- [23:22] %-57s: %d\n", "Last OCC2 Event", data[24] + (data[23] << 8));
    printf("- [25:24] %-57s: %d\n", "No. of AOLD Events", data[26] + (data[25] << 8));
    printf("- [27:26] %-57s: %d\n", "Last AOLD Event", data[28] + (data[27] << 8));
    printf("- [29:28] %-57s: %d\n", "No. of ASCD Events", data[32] + (data[31] << 8));
    printf("- [31:30] %-57s: %d\n\n", "Last ASCD Event", data[34] + (data[33] << 8));

//  11.61 0x64 Lifetime Data Block 5
//  This command returns the third block of Lifetime data.
//  0x64 LifeTimeDataBlock5() — R R Block — — — — —
    readWord("Lifetime Data Block 5", "", 0x64, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "No. of ASCC Events", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n", "Last ASCC Event", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "No. of OTC Events", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n", "Last OTC Event", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d\n", "No. of OTD Events", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d\n", "Last OTD Event", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d\n", "No. of OTF Events", data[16] + (data[15] << 8));
    printf("- [15:14] %-57s: %d\n", "Last OTF Event", data[18] + (data[17] << 8));
    printf("- [17:16] %-57s: %d\n", "No. Valid Charge Term", data[20] + (data[19] << 8));
    printf("- [19:18] %-57s: %d\n", "Last Valid Charge Term", data[22] + (data[21] << 8)); 
    printf("- [21:20] %-57s: %d\n", "No. of Qmax Updates", data[24] + (data[23] << 8));
    printf("- [23:22] %-57s: %d\n", "Last Qmax Update", data[26] + (data[25] << 8));
    printf("- [25:24] %-57s: %d\n", "No. of Ra Updates", data[28] + (data[27] << 8));
    printf("- [27:26] %-57s: %d\n", "Last Ra Update", data[30] + (data[29] << 8));
    printf("- [29:28] %-57s: %d\n", "No. of Ra Disable", data[32] + (data[31] << 8));
    printf("- [31:30] %-57s: %d\n\n", "Last Ra Disable", data[34] + (data[33] << 8));

//  11.62 0x70 ManufacturerInfo
//  This command returns 32 bytes manufacturer information.
//  0x70 ManufacturerInfo() R R R Block — — — — —
//  readWord("ManufacturerInfo", "", 0x70, 0, 0, 0);

//  11.63 0x71 DAStatus1
//  This command returns the CellVoltages, PackVoltage, BatVoltage, CellCurrents, CellPowers, Power, and
//  AveragePower.
//  0x71 DAStatus1() — R R Block — — — — —
    readWord("DAStatus1", "hex", 0x71, 0, 0, 0);

    printf("- [1:0]   %-57s: %d mV\n", "Cell Voltage 1", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d mV\n", "Cell Voltage 2", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d mV\n", "Cell Voltage 3", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d mV\n", "Cell Voltage 4", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d mV\n", "Voltage at the BAT pin", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d mV\n", "PACK Voltage", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d mA\n", "Cell Current 1.", data[16] + (data[15] << 8));
    printf("- [15:14] %-57s: %d mA\n", "Cell Current 2.", data[18] + (data[17] << 8));
    printf("- [17:16] %-57s: %d mA\n", "Cell Current 3.", data[20] + (data[19] << 8));
    printf("- [19:18] %-57s: %d mA\n", "Cell Current 4.", data[22] + (data[21] << 8));
    printf("- [21:20] %-57s: %d\n", "Cell Power 1", data[24] + (data[23] << 8));
    printf("- [23:22] %-57s: %d\n", "Cell Power 2", data[26] + (data[25] << 8));
    printf("- [25:24] %-57s: %d\n", "Cell Power 3", data[28] + (data[27] << 8));
    printf("- [27:26] %-57s: %d\n", "Cell Power 4", data[30] + (data[29] << 8));
    printf("- [29:28] %-57s: %d\n", "Power calculated", data[32] + (data[31] << 8));
    printf("- [31:30] %-57s: %d\n\n", "Average Power", data[34] + (data[33] << 8));

//  11.64 0x72 DAStatus2
//  This command returns the internal temp sensor, TS1, TS2, TS3, TS4, Cell Temp, and FETTemp.
//  0x72 DAStatus2() — R R Block — — — — —
    readWord("DAStatus2", "hex", 0x72, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "Int Temperature", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n", "TS1 Temperature", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "TS2 Temperature", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n", "TS3 Temperature", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d\n", "TS4 Temperature", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d\n", "Cell Temperature", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d\n\n", "FET Temperature", data[16] + (data[15] << 8));

//  11.65 0x73 GaugeStatus1
//  This command instructs the device to return the 32 bytes of Impedance Track related gauging information.
    readWord("GaugeStatus1", "hex", 0x73, 0, 0, 0);

    printf("- [1:0]   %-57s: %d mAh\n", "True remaining capacity in mAh", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d cWh\n", "True remaining energy in cWh", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "Initial capacity calculated", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n", "Initial energy calculated", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d\n", "Reserve Capacity", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d\n", "Reserve Energy", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d\n", "Temperature during the last simulation run.", data[16] + (data[15] << 8));
    printf("- [15:14] %-57s: %d\n", "Current assumed ambient temperature", data[18] + (data[17] << 8));
    printf("- [17:16] %-57s: %d\n", "Ra table scaling factor of Cell 1", data[20] + (data[19] << 8));
    printf("- [19:18] %-57s: %d\n", "Ra table scaling factor of Cell 2", data[22] + (data[21] << 8));
    printf("- [21:20] %-57s: %d\n", "Ra table scaling factor of Cell 3", data[24] + (data[23] << 8));
    printf("- [23:22] %-57s: %d\n", "Ra table scaling factor of Cell 4", data[26] + (data[25] << 8));
    printf("- [25:24] %-57s: %d\n", "Last temperature compensated Resistance of Cell 1", data[28] + (data[27] << 8));
    printf("- [27:26] %-57s: %d\n", "Last temperature compensated Resistance of Cell 2", data[30] + (data[29] << 8));
    printf("- [29:28] %-57s: %d\n", "Last temperature compensated Resistance of Cell 3", data[32] + (data[31] << 8));
    printf("- [31:30] %-57s: %d\n\n", "Last temperature compensated Resistance of Cell 4", data[34] + (data[33] << 8));

//  11.66 0x74 GaugeStatus2
//  This command instructs the device to return the 32 bytes of Impedance Track related gauging information.
//  0x74 GaugeStatus2() — R R Block — — — — —
    readWord("GaugeStatus2", "hex", 0x74, 0, 0, 0);

//  0 Pack Grid. Active pack grid point (minimum of CellGrid0 to Cell Grid3)
//  1
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
//  0 = QMax has not been updated in the field", data[4] + (data[3] << 8));
//  1= QMax updated in the field", data[4] + (data[3] << 8));
//  printf("- [2]     %-57s: %d\n", "Cell Grid 0. Active grid point of Cell 1", data[4] + (data[3] << 8));
//  printf("- [3]     %-57s: %d\n", "Cell Grid 1. Active grid point of Cell 2", data[4] + (data[3] << 8));
//  printf("- [4]     %-57s: %d\n", "Cell Grid 2. Active grid point of Cell 3", data[4] + (data[3] << 8));
//  printf("- [5]     %-57s: %d\n", "Cell Grid 3. Active grid point of Cell 4", data[4] + (data[3] << 8));
//  printf("- [9:6]   %-57s: %d\n", "State Time. Time past since last state change (Discharge, Charge, Rest)", data[4] + (data[3] << 8));
//  printf("- [11:10] %-57s: %d\n", "DOD0_0. Depth of discharge for Cell 1", data[4] + (data[3] << 8));
//  printf("- [13:12] %-57s: %d\n", "DOD0_1. Depth of discharge for Cell 2", data[4] + (data[3] << 8));
//  printf("- [15:14] %-57s: %d\n", "DOD0_2. Depth of discharge for Cell 3", data[4] + (data[3] << 8));
//  printf("- [17:16] %-57s: %d\n", "DOD0_3. Depth of discharge for Cell 4", data[4] + (data[3] << 8));
//  printf("- [19:18] %-57s: %d\n", "DOD0 Passed Q. Passed capacity since the last DOD0 update", data[4] + (data[3] << 8));
//  printf("- [21:20] %-57s: %d\n", "DOD0 Passed E. Passed energy since last DOD0 update", data[4] + (data[3] << 8));
//  printf("- [23:22] %-57s: %d\n", "DOD0 Time. Time passed since the last DOD0 update", data[4] + (data[3] << 8));
//  printf("- [25:24] %-57s: %d\n", "DODEOC 0. Depth of discharge at end of charge of Cell 1", data[4] + (data[3] << 8));
//  printf("- [27:26] %-57s: %d\n", "DODEOC 1. Depth of discharge at end of charge of Cell 2", data[4] + (data[3] << 8));
//  printf("- [29:28] %-57s: %d\n", "2.Depth of discharge at end of charge of Cell 3", data[4] + (data[3] << 8));
//  printf("- [31:30] %-57s: %d\n", "3. Depth of discharge at end of charge of Cell 4", data[4] + (data[3] << 8));

//  11.67 0x75 GaugeStatus3
//  This command instructs the device to return the 32 bytes Impedance Track related gauging information.
    readWord("GaugeStatus3", "hex", 0x75, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "QMax of Cell 1", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n", "QMax of Cell 2", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "QMax of Cell 3", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n", "QMax of Cell 4", data[10] + (data[9] << 8));
    printf("- [9:8]   %-57s: %d\n", "DOD0 at last QMax update of Cell 1", data[12] + (data[11] << 8));
    printf("- [11:10] %-57s: %d\n", "DOD0 at last QMax update of Cell 2", data[14] + (data[13] << 8));
    printf("- [13:12] %-57s: %d\n", "DOD0 at last QMax update of Cell 3", data[16] + (data[15] << 8));
    printf("- [15:14] %-57s: %d\n", "DOD0 at last QMax update of Cell 4", data[18] + (data[17] << 8));
    printf("- [17:16] %-57s: %d\n", "Pass capacity since last QMax update", data[20] + (data[19] << 8));
    printf("- [19:18] %-57s: %d\n", "Time passed since last QMax update", data[22] + (data[21] << 8));
    printf("- [21:20] %-57s: %d\n", "Thermal Model temperature factor", data[24] + (data[23] << 8));
    printf("- [23:22] %-57s: %d\n\n", "Thermal Model temperature", data[26] + (data[25] <<  8));

//  11.68 0x76 CBStatus
//  This command instructs the device to return the 32 bytes of cell balancing information.
    readWord("CBStatus", "", 0x76, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "Cell Balance Time of Cell 1", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n", "Cell Balance Time of Cell 2", data[6] + (data[5] << 8));
    printf("- [5:4]   %-57s: %d\n", "Cell Balance Time of Cell 3", data[8] + (data[7] << 8));
    printf("- [7:6]   %-57s: %d\n\n", "Cell Balance Time of Cell 4", data[10] + (data[9] << 8));

//  11.1.57 ManufacturerAccess() 0x0077 State of Health
//  This command returns the 4 bytes of State of Health FCC in mAh and energy in cWh.
    readWord("State of Health", "hex", 0x77, 0, 0, 0);

    printf("- [1:0]   %-57s: %d\n", "State Of FCC in mAh", data[4] + (data[3] << 8));
    printf("- [3:2]   %-57s: %d\n\n", "State Of Health energy in cWh", data[6] + (data[5] << 8));

// Reset Device
//  n = mac_read(0x0041, 4);
//  printf("0x0041 %-60s: 0x%08X\n", "Device Reset", data[6] + (data[5] << 24) + (data[4] << 16) + (data[3] << 8));

// Seal device
//  n = i2cWriteWordData(i2cHandle, 0x00, 0x30);

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
