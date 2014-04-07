//
//  NZGestureRecognitionPipeline.h
//  BLEDemo
//
//  Created by Natalia Zarawska on 06/04/14.
//  Copyright (c) 2014 TUM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NZGestureRecognitionPipeline : NSObject

- (BOOL)loadPipeline;
- (BOOL)savePipelineTo:(NSString *) name;

@end
