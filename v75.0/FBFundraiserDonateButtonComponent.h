/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBIntentTarget, FBFeedToolbox, FBAnalyticsInfo, NSString;

@interface FBFundraiserDonateButtonComponent : CKCompositeComponent {

	FBIntentTarget* _intentTarget;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;
	NSString* _donateButtonURL;

}
+(id)newWithTitle:(id)arg1 donateButtonURL:(id)arg2 analyticsInfo:(id)arg3 toolbox:(id)arg4 ;
-(void)didTapDonateButton:(id)arg1 ;
@end

