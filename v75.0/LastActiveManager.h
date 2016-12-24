/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBClassProvidable.h>

@protocol FBClock;
@class NSString;

@interface LastActiveManager : NSObject <FBClassProvidable> {

	id<FBClock> _clock;

}

@property (nonatomic,retain) id<FBClock> clock;                     //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)DEPRECATED_combinedLastActiveTimeFromUserLastActiveTime:(long long)arg1 userId:(id)arg2 isOnline:(BOOL)arg3 ;
-(double)secondsAgo:(long long)arg1 ;
-(id)initWithClock:(id)arg1 ;
-(long long)DEPRECATED_lastActiveTimeForSyncPerson:(id)arg1 ;
-(double)timeIntervalSinceLastActive:(long long)arg1 ;
-(id<FBClock>)clock;
-(void)setClock:(id<FBClock>)arg1 ;
@end

