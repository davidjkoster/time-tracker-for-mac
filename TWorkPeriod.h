//
//  TWorkPeriod.h
//  Time Tracker
//
//  Created by Ivan Dramaliev on 10/18/05.
//  Copyright 2005 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface TWorkPeriod : NSObject <NSCoding> {
	NSTimeInterval _totalTime;
	NSDate *_startTime;
	NSDate *_endTime;
}

- (id)init;
- (id)initWithStartTime:(NSDate *)starttime endTime:(NSDate *)endTime;

- (void) setStartTime: (NSDate *) startTime;
- (void) setEndTime: (NSDate *) endTime;

- (void) updateTotalTime;

- (NSTimeInterval) totalTime;
- (void) updateTotalTime;

- (NSDate *) startTime;
- (NSDate *) endTime;

- (NSComparisonResult)compare:(TWorkPeriod *)wp;

- (NSTimeInterval)totalTimeInRangeFrom:(NSDate *)from to:(NSDate *)to;

@end
