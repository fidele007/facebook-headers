/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler;
@class FBScenePath, FBUserSession, NSArray, UIViewController;

@interface FBPhotoStoryCommentHandler : NSObject {

	id<FBIntentHandler> _intentHandler;
	FBScenePath* _scenePath;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	UIViewController* _parentViewController;

}
-(void)presentCommentOverlayWithFeedbackTarget:(id)arg1 showKeyboardOnAppear:(BOOL)arg2 ;
-(id)initWithIntentHandler:(id)arg1 scenePath:(id)arg2 session:(id)arg3 trackingCodes:(id)arg4 parentViewController:(id)arg5 ;
@end
