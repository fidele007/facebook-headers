/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPolling.h>

@protocol FBPollingDelegate;
@class NSDate, NSString;

@interface FBFriendingPossibilitiesNopPollingSource : NSObject <FBPolling> {

	BOOL _enabled;
	id<FBPollingDelegate> _delegate;
	NSDate* _fireDate;
	NSDate* _lastPollDate;
	NSString* _name;
	double _refreshInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPollingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) NSDate * fireDate;                         //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPollDate;                                //@synthesize lastPollDate=_lastPollDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double refreshInterval;                             //@synthesize refreshInterval=_refreshInterval - In the implementation block
-(void)setLastPollDate:(NSDate *)arg1 ;
-(NSDate *)lastPollDate;
-(BOOL)enabled;
-(void)setDelegate:(id<FBPollingDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<FBPollingDelegate>)delegate;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDate *)fireDate;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
@end
