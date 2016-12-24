/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBMemPlaceReviewFeedUnitItem, FBAnalyticsInfo, FBFeedToolbox;

@interface FBPlaceReviewFeedUnitItemComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBMemPlaceReviewFeedUnitItem* _item;
	CKTypedComponentAction<> _action;
	FBAnalyticsInfo* _analyticsInfo;
	CKTypedComponentAction<> _tapXOutAction;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemPlaceReviewFeedUnitItem * item;              //@synthesize item=_item - In the implementation block
+(id)newWithStory:(id)arg1 tapComposeReviewAction:(CKTypedComponentAction<>)arg2 tapXOutAction:(CKTypedComponentAction<>)arg3 toolbox:(id)arg4 ;
-(void)becameFullyVisible;
-(void)launchNativePage;
-(void)didTapXOut;
-(FBMemPlaceReviewFeedUnitItem *)item;
@end

