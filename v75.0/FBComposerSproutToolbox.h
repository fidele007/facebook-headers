/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerSproutControlEventsListener;
@class FBComposerSproutComponentAnimationController, FBUserSession;

@interface FBComposerSproutToolbox : NSObject {

	id<FBComposerSproutControlEventsListener> _controlEventsListener;
	FBComposerSproutComponentAnimationController* _animationController;
	FBUserSession* _session;

}

@property (nonatomic,__weak,readonly) id<FBComposerSproutControlEventsListener> controlEventsListener;                 //@synthesize controlEventsListener=_controlEventsListener - In the implementation block
@property (nonatomic,__weak,readonly) FBComposerSproutComponentAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,__weak,readonly) FBUserSession * session;                                                         //@synthesize session=_session - In the implementation block
-(id)initWithControlEventsListener:(id)arg1 animationController:(id)arg2 session:(id)arg3 ;
-(id<FBComposerSproutControlEventsListener>)controlEventsListener;
-(FBComposerSproutComponentAnimationController *)animationController;
-(FBUserSession *)session;
@end
