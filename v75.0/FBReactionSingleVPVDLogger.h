/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>

@class NSString, NSMutableSet, FBVPVdLoggingWorkingRangeListener;

@interface FBReactionSingleVPVDLogger : NSObject <FBComponentControllerWorkingRangeListening> {

	NSString* _surface;
	NSString* _reactionSessionID;
	NSString* _analyticalsModule;
	NSMutableSet* _loggedUnitIDs;
	/*^block*/id _augmentingBlock;
	FBVPVdLoggingWorkingRangeListener* _vpvListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentEnteredWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentEnteredVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentEnteredFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3 ;
-(void)componentExitedFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3 ;
-(void)componentEnteredFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)entryLogging:(const CKComponentLayout*)arg1 ;
-(id)initWithAnalyticsModule:(id)arg1 reactionSessionID:(id)arg2 surface:(id)arg3 augmentingBlock:(/*^block*/id)arg4 ;
@end

