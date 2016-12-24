/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBFeedUnitHidingController : NSObject {

	FBUserSession* _session;

}
-(void)deleteUnitWithCacheIds:(id)arg1 ;
-(void)deleteParentsOfHiddenUnitFromAllFeeds:(id)arg1 ;
-(void)setCompletedNegativeFeedbackGuidedActionsForFeedUnit:(id)arg1 ;
-(void)setSelectedNegativeFeedbackAction:(id)arg1 hideableToken:(id)arg2 trackingCodes:(id)arg3 forUnit:(id)arg4 ;
-(void)_applyUpdate:(/*^block*/id)arg1 toUnit:(id)arg2 ;
-(void)clearSelectedNegativeFeedbackActionForFeedUnit:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

