/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBackgroundFetchRegisteredObserver.h>

@protocol FBBackgroundFetchObserver;
@class FBBackgroundFetchThrottler, NSString;

@interface FBBackgroundFetchRegisteredIntervalObserver : NSObject <FBBackgroundFetchRegisteredObserver> {

	id<FBBackgroundFetchObserver> _observer;
	FBBackgroundFetchThrottler* _throttler;

}

@property (nonatomic,__weak,readonly) id<FBBackgroundFetchObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) FBBackgroundFetchThrottler * throttler;                     //@synthesize throttler=_throttler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleBackgroundFetchRequest:(id)arg1 ;
-(BOOL)shouldBeCalledAtDate:(id)arg1 notification:(BOOL)arg2 reachability:(unsigned long long)arg3 ;
-(id)initWithObserver:(id)arg1 withMinimumInterval:(FBBackgroundFetchMinimumInterval)arg2 ;
-(id<FBBackgroundFetchObserver>)observer;
-(double)minimumInterval;
-(FBBackgroundFetchThrottler *)throttler;
@end
