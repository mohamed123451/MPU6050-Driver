#ifndef MPU6050_INTERFACE_H
#define MPU6050_INTERFACE_H



/**
 * @brief Initialize mpu6050 module
 *
 *  -check if the sensor is responding by reading the “WHO_AM_I (0x75)” Register.
 *  -wake the sensor up by writing to the “PWR_MGMT_1 (0x6B)” Register.
 *  -set the Data output Rate or Sample Rate by writing into “SMPLRT_DIV (0x19)” Register.
 *  -configure the Accelerometer and Gyroscope registers “GYRO_CONFIG (0x1B)” and “ACCEL_CONFIG (0x1C)”Registers.
 * 
 * @param None
 *
 * @return  1:module is responding
 *          0:module is not responding
 */
u8 MPU6050_u8Init(void);


/**
 * @brief Read Accelerometer Date form mpu6050 module
 *
 *  We can read 1 BYTE from each Register separately or we can just read 6 BYTES all together starting from ACCEL_XOUT_H Register.
 * 
 * @param None
 *
 * @return  pointer to float array of ax, ay, az.
 */
float* MPU6050_Read_Accel (void);


/**
 * @brief Read Gyroscope Date form mpu6050 module
 *
 *  We can read 1 BYTE from each Register separately or we can just read 6 BYTES all together starting from GYRO_XOUT_H Register.
 * 
 * @param None
 *
 * @return  pointer to float array of gx, gy, gz.
 */
float* MPU6050_Read_Gyro (void);




#endif