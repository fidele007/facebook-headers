/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBLocalFeedbackActionHandler, FBMemPage, FBUserSession, FBFeedToolbox;

@interface FBLocalReviewDetailsStoryContextComponent : CKCompositeComponent {

	FBLocalFeedbackActionHandler* _actionHandler;
	FBMemPage* _page;
	FBUserSession* _session;
	FBFeedToolbox* _toolbox;

}
+(id)newWithRating:(id)arg1 helpfulCount:(id)arg2 color:(id)arg3 reviewContext:(id)arg4 usePlaceholder:(BOOL)arg5 actionHandler:(id)arg6 page:(id)arg7 session:(id)arg8 toolbox:(id)arg9 ;
-(void)didTapWriteReview;
@end

