/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBActivitySession, NSMutableArray;

@interface FBAccelerometerData : NSObject {

	BOOL _finished;
	mutex _m;
	BOOL _dataCollectionFinished;
	FBActivitySession* _activitySession;
	NSMutableArray* _rawData;

}

@property (nonatomic,readonly) NSMutableArray * rawData;                         //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,readonly) FBActivitySession * activitySession;              //@synthesize activitySession=_activitySession - In the implementation block
@property (nonatomic,readonly) BOOL dataCollectionFinished;                      //@synthesize dataCollectionFinished=_dataCollectionFinished - In the implementation block
-(FBActivitySession *)activitySession;
-(id)initWithActivitySession:(id)arg1 ;
-(void)addRawAccelerometerData:(id)arg1 ;
-(void)setRawAccelerometerDataCollectionFinished;
-(BOOL)dataCollectionFinished;
-(NSMutableArray *)rawData;
-(id)collectedData;
@end
