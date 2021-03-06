/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClashUnit;
@class NSObject;

@interface FBCountedClashUnit : NSObject {

	NSObject*<FBClashUnit> _clashUnit;
	unsigned long long _numberOfTimesShown;
	unsigned long long _initialPriority;

}

@property (nonatomic,readonly) NSObject*<FBClashUnit> clashUnit;                   //@synthesize clashUnit=_clashUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTimesShown;              //@synthesize numberOfTimesShown=_numberOfTimesShown - In the implementation block
@property (nonatomic,readonly) unsigned long long initialPriority;                 //@synthesize initialPriority=_initialPriority - In the implementation block
+(id)newWithClashUnit:(id)arg1 initialPriority:(unsigned long long)arg2 numberOfTimesShown:(unsigned long long)arg3 ;
-(NSObject*<FBClashUnit>)clashUnit;
-(void)incrementNumberOfTimesShown;
-(unsigned long long)numberOfTimesShown;
-(unsigned long long)initialPriority;
-(void)decrementNumberOfTimesShown;
-(id)description;
@end

