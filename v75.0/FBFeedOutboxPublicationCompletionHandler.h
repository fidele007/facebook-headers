/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedOutboxListLifecycleListener.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, NSString;

@interface FBFeedOutboxPublicationCompletionHandler : NSObject <FBFeedOutboxListLifecycleListener> {

	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionedToDisplayingStoryForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryShowingSlowPostMessageForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryShowingPauseForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryShowingFailureForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryShowingFailureWithNoConnectivityMessageForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryShowingTerminalFailureForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryAnimatingToFakeProgressLimitForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryAnimatedToFakeProgressLimitForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryAnimatingToFullProgressForComposerPublication:(id)arg1 ;
-(void)transitionedToDisplayingStoryAnimatedToFullProgressForComposerPublication:(id)arg1 ;
-(void)transitionedToNotDisplayingStoriesForComposerPublications:(id)arg1 publicationsCompleted:(BOOL)arg2 ;
-(void)transitionedToDisplayingStoryShowingAsyncServerProcessingForComposerPublication:(id)arg1 ;
-(void)updateOutboxListStoryWithProgress:(double)arg1 forPublication:(id)arg2 ;
-(void)updateOutboxListStoryWithUploadQuality:(id)arg1 forPublication:(id)arg2 ;
-(void)_handleCompletedPublication:(id)arg1 ;
-(void)_handleCompletedPublications:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 userSession:(id)arg2 ;
@end

