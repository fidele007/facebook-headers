/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedStoryHeaderNuxClient <FBFeedUnitNuxPresenterListener,NSObject>
@required
+(BOOL)isEligibleForUnit:(id)arg1 toolbox:(id)arg2;
-(id)nuxID;
-(id)triggerIDs;
-(/*^block*/id)eligibilityBlock;
-(id)initWithUnit:(id)arg1 toolbox:(id)arg2;
-(BOOL)isEligibleForOutboundClickCoordinatorWithIdentifier:(id)arg1 withTimespan:(double)arg2 source:(int)arg3;
-(BOOL)isEligibleForDurationOnScreenEvent;
-(id)message;
-(id)body;

@end
