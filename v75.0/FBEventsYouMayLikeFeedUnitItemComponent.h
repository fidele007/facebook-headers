/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FIGCardContentHScrollChildCompliant.h>

@class FBMemEventsYouMayLikeFeedUnit, FBMemEvent, FBFeedToolbox, FBAnalyticsInfo;

@interface FBEventsYouMayLikeFeedUnitItemComponent : CKCompositeComponent <FIGCardContentHScrollChildCompliant> {

	FBMemEventsYouMayLikeFeedUnit* _unit;
	FBMemEvent* _event;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;

}
+(id)newWithUnit:(id)arg1 event:(id)arg2 toolbox:(id)arg3 tracker:(id)arg4 ;
-(void)becameFullyVisible;
-(void)didTapHideButton:(id)arg1 attachment:(id)arg2 ;
-(void)reportNegativeActionForEvent:(id)arg1 ;
@end
