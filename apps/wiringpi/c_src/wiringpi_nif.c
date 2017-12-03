/**
 *  Wrapper for wiringpi. Just the stuff we need.
 *
 *  Documentation: http://wiringpi.com/reference/i2c-library/
 */
#include <erl_nif.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>

// int wiringPiI2CSetup (int devId) ;
static ERL_NIF_TERM _open(ErlNifEnv* env, int arc, const ERL_NIF_TERM argv[]) {
  int devId;
  int fd;

  enif_get_int(env, argv[0], &devId);

  fd = wiringPiI2CSetup(devId);

  return enif_make_int(env, fd);
}

// int wiringPiI2CWrite (int fd, int data) ;
static ERL_NIF_TERM _write(ErlNifEnv* env, int arc, const ERL_NIF_TERM argv[]) {
  int fd;
  int data;
  int result;

  enif_get_int(env, argv[0], &fd);
  enif_get_int(env, argv[1], &data);

  result = wiringPiI2CWrite(fd, data);

  return enif_make_int(env, fd);
}

// int wiringPiI2CWriteReg8 (int fd, int reg, int data) ;
static ERL_NIF_TERM _write_reg8(ErlNifEnv* env, int arc, const ERL_NIF_TERM argv[]) {
  int fd;
  int reg;
  int data;
  int result;

  enif_get_int(env, argv[0], &fd);
  enif_get_int(env, argv[1], &reg);
  enif_get_int(env, argv[2], &data);

  result = wiringPiI2CWriteReg8(fd, reg, data);

  return enif_make_int(env, fd);
}

// int wiringPiI2CWriteReg16 (int fd, int reg, int data) ;
static ERL_NIF_TERM _write_reg16(ErlNifEnv* env, int arc, const ERL_NIF_TERM argv[]) {
  int fd;
  int reg;
  int data;
  int result;

  enif_get_int(env, argv[0], &fd);
  enif_get_int(env, argv[1], &reg);
  enif_get_int(env, argv[2], &data);

  result = wiringPiI2CWriteReg16(fd, reg, data);

  return enif_make_int(env, fd);
}

// For now, we don't need the read functions.
