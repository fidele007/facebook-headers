/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPerformanceGraphMetricProvider.h>

@class CADisplayLink, NSMutableArray;

@interface FBPerformanceGraphicsMetric : NSObject <FBPerformanceGraphMetricProvider> {

	double _fps;
	double _lastFrameTimestamp;
	CADisplayLink* _displayLink;
	NSMutableArray* _history;

}
-(id)yAxisTitle;
-(id)yAxisUnit;
-(double)yMin;
-(double)yMax;
-(void)willBackground;
-(void)_updateWithDisplayLink:(id)arg1 ;
-(id)init;
-(id)title;
-(id)values;
-(double)updateInterval;
-(void)willForeground;
@end

