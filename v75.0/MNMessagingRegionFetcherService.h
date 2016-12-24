/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNServiceControllable.h>

@class MNMessagingRegionFetcher, MNMessagingRegionFetchPolicy, MNMessagingRegionFetcherServiceListeningAnnouncer, NSString;

@interface MNMessagingRegionFetcherService : NSObject <MNServiceControllable> {

	MNMessagingRegionFetcher* _messagingRegionFetcher;
	MNMessagingRegionFetchPolicy* _messagingRegionFetchPolicy;
	MNMessagingRegionFetcherServiceListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fetchMessagingRegionIfPossible;
-(void)_fetchMessagingRegion;
-(void)_handleSuccessfulFetchOfMessagingRegionInfo:(id)arg1 ;
-(void)_handleMessagingRegionFetchFailureWithError:(id)arg1 ;
-(id)initWithMessagingRegionFetcher:(id)arg1 messagingFetchRegionFetchPolicy:(id)arg2 announcer:(id)arg3 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

