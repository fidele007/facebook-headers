/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAggregateWorkingRangeControllerDelegate.h>

@class FBAggregateWorkingRangeController, NSString;

@interface FBComponentNotifyingWorkingRangeController : NSObject <FBAggregateWorkingRangeControllerDelegate> {

	FBAggregateWorkingRangeController* _aggregateWorkingRangeController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUpdatedBehavior:(BOOL)arg1 ;
-(void)sampleSnapshot:(id)arg1 ;
-(void)aggregateWorkingRangeController:(id)arg1 itemInWorkingRange:(id)arg2 transitionedToNewState:(id)arg3 previousTransitions:(id)arg4 itemViewState:(id)arg5 snapshot:(id)arg6 ;
@end

