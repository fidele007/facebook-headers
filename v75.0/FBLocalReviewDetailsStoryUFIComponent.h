/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemContactRecommendationField, FBUserSession, FBFeedToolbox, FBLocalFeedbackActionHandler;

@interface FBLocalReviewDetailsStoryUFIComponent : CKCompositeComponent {

	FBMemContactRecommendationField* _review;
	FBUserSession* _session;
	FBFeedToolbox* _toolbox;
	FBLocalFeedbackActionHandler* _actionHandler;

}
+(id)newWithReview:(id)arg1 session:(id)arg2 toolbox:(id)arg3 actionHandler:(id)arg4 ;
-(void)didTapComment;
-(void)didTapHelpful:(id)arg1 ;
@end

