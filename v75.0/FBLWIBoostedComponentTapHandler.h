/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol FBLWIBoostedComponentTapHandlerDelegate;
@class FBUserSession, UIAlertView, NSURL, FBMemFeedStory, FBMemPage, NSString;

@interface FBLWIBoostedComponentTapHandler : NSObject <UIAlertViewDelegate> {

	FBUserSession* _session;
	UIAlertView* _ineligibleAlertView;
	NSURL* _ineligibleActionURL;
	FBMemFeedStory* _story;
	FBMemPage* _page;
	NSString* _placement;
	id<FBLWIBoostedComponentTapHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLWIBoostedComponentTapHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePromoteButtonTapWithStory:(id)arg1 page:(id)arg2 placement:(id)arg3 referral:(id)arg4 ;
-(void)handlePostInsightStateTapWithStory:(id)arg1 page:(id)arg2 placement:(id)arg3 referral:(id)arg4 ;
-(id)postInsightsViewControllerWithStory:(id)arg1 page:(id)arg2 withPromotion:(BOOL)arg3 placement:(id)arg4 referral:(id)arg5 ;
-(void)handlePostPromoteStateTapWithStory:(id)arg1 page:(id)arg2 placement:(id)arg3 referral:(id)arg4 ;
-(id)postInsightsViewControllerWithStory:(id)arg1 page:(id)arg2 withPromotion:(BOOL)arg3 aymtActionData:(id)arg4 placement:(id)arg5 referral:(id)arg6 aymtLoggingURL:(id)arg7 aymtTipID:(id)arg8 aymtChannelID:(id)arg9 adAccountID:(id)arg10 couponPromotionGroupID:(id)arg11 sectionForAutoScroll:(id)arg12 ;
-(id)_concatenatePlacement:(id)arg1 andReferral:(id)arg2 ;
-(void)_logEventWithStory:(id)arg1 page:(id)arg2 withPromotion:(BOOL)arg3 placement:(id)arg4 ;
-(id)_dialogOpenAnalyticEventForStory:(id)arg1 ;
-(id)boostEventViewControllerWithEvent:(id)arg1 page:(id)arg2 aymtActionData:(id)arg3 placement:(id)arg4 referral:(id)arg5 aymtTipID:(id)arg6 aymtChannelID:(id)arg7 adAccountID:(id)arg8 couponPromotionGroupID:(id)arg9 sectionForAutoScroll:(id)arg10 ;
-(void)setDelegate:(id<FBLWIBoostedComponentTapHandlerDelegate>)arg1 ;
-(id<FBLWIBoostedComponentTapHandlerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

