/**
 * @brief Returns string depending on the error code.
 */

// Subroutine
#include <aSubRecord.h>

// Export Subroutine Function
#include <registryFunction.h>
#include <epicsExport.h>

// Normalized C Types
#include <stdint.h>

// Main Dependences
#include "epicsExit.h"
#include "epicsThread.h"
#include "iocsh.h"

int main(int argc, char *argv[])
{
  if (argc >= 2)
    {
      iocsh(argv[1]);
      epicsThreadSleep(.2);
    }

  iocsh(NULL);
  epicsExit(0);

  return 0;
}

static long get_error_message(aSubRecord *prec)
{
  switch((long) prec->a)
    {
    case 0:    prec->vala = "No error";
               break;
    
    case -100: prec->vala = "Command error";
               break;
    
    case -101: prec->vala = "Invalid Character";
               break;
    
    case -102: prec->vala = "Syntax error";
               break;
    
    case -104: prec->vala = "Data type error";
               break;
    
    case -109: prec->vala = "Missing parameter";
               break;
    
    case -112: prec->vala = "Program word too long";
               break;
    
    case -131: prec->vala = "Invalid Suffix";
               break;
    
    case -222: prec->vala = "Data out of range";
               break;
    
    case -241: prec->vala = "Hardware Missing";
               break;
    
    case -350: prec->vala = "Queue Overflow";
               break;
    
    case 300:  prec->vala = "Execution error";
               break;
    
    case 301:  prec->vala = "PV above OVP";
               break;
    
    case 302:  prec->vala = "PV below UVL";
               break;
    
    case 304:  prec->vala = "OVP below PV";
               break;
    
    case 306:  prec->vala = "UVL above PV";
               break;
    
    case 307:  prec->vala = "On during fault";
               break;
    
    case 320:  prec->vala = "Fault shutdown";
               break;
    
    case 321:  prec->vala = "AC fault shutdown";
               break;
    
    case 322:  prec->vala = "Over-Temperature";
               break;
    
    case 323:  prec->vala = "Fold-Back shutdown";
               break;
    
    case 324:  prec->vala = "Over-Voltage shutdown";
               break;
    
    case 325:  prec->vala = "Analog shut-off shutdown";
               break;
    
    case 326:  prec->vala = "Output-Off shutdown";
               break;
    
    case 327:  prec->vala = "Enable Open shutdown";
               break;
    
    case 340:  prec->vala = "Internal message fault";
               break;
    
    case 341:  prec->vala = "Input overflow";
               break;
    
    case 342:  prec->vala = "Internal overflow";
               break;
    
    case 343:  prec->vala = "Internal timeout";
               break;
    
    case 344:  prec->vala = "Internal checksum";
               break;
    
    case 345:  prec->vala = "Internal checksum error";
               break;
    
    case 399:  prec->vala = "Unknown Error";
               break;
    }

  return 0;
}

epicsRegisterFunction(get_error_message);
