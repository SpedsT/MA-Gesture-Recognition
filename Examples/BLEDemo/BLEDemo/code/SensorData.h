//
//  SensorData.h
//  BLEDemo
//
//  Created by Natalia Zarawska on 12/03/14.
//  Copyright (c) 2014 TUM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SensorDataValue.h"

@interface SensorData : NSObject
{}

/*! \brief the name od the data
 *
 */
@property (strong, nonatomic) NSString *name;

/*! \brief the name od the data
 *
 */
#warning change to an array of values. the names x/y/z are not good when yaw pitch roll
@property (strong, nonatomic) SensorDataValue *x;
@property (strong, nonatomic) SensorDataValue *y;
@property (strong, nonatomic) SensorDataValue *z;


/*! \brief true if values have been extracted
 *
 */
@property BOOL hasValues;

/*! \brief
 *
 */
-(id)initWithValueHeadersX:(uint8_t) x Y:(uint8_t) y Z:(uint8_t) z andOffsetsX:(NSInteger)offsetX Y:(NSInteger)offsetY Z:(NSInteger)offsetZ;

/*! \brief
 * @param offset the index where to start reading from the buffor
 * @param length the length of the whole buffer
 * @return true if successfully read the x,y and z value
 */
-(id)initWithValueHeadersX:(uint8_t) x Y:(uint8_t) y Z:(uint8_t) z andOffsetsX:(NSInteger)offsetX Y:(NSInteger)offsetY Z:(NSInteger)offsetZ andName:(NSString *)name;

/*! \brief
 *
 */
- (id)initWithSensorData:(SensorData *)sensorData;

/*! \brief
 * extraxts sensor without headesrs
 */
- (BOOL)sensorDataFromBuffer:(uint8_t *)buffer withOffset:(NSInteger)offstet andLength:(NSInteger)length;

/*! \brief the name od the data
 *
 */
- (BOOL)sensorDataFromBuffer:(uint8_t *)buffer withLength:(NSInteger)length;

@end
