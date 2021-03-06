/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositionListener.h>
#import <Facebook/FBFacecastListener.h>

@protocol FBInlineComposerPromptsInteractionManager;
@class FBInlineComposerPromptSession, FBInlineComposerPrompt, FBUserSession, NSString, FBCompositionListenerAnnouncer, FBFacecastListenerAnnouncer;

@interface FBLivePromptComposerListener : NSObject <FBCompositionListener, FBFacecastListener> {

	FBInlineComposerPromptSession* _promptSession;
	FBInlineComposerPrompt* _prompt;
	id<FBInlineComposerPromptsInteractionManager> _promptManager;
	FBUserSession* _session;
	NSString* _composerSessionID;
	FBCompositionListenerAnnouncer* _compositionAnnouncer;
	FBFacecastListenerAnnouncer* _facecastAnnouncer;
	BOOL _didPostLiveVideo;
	BOOL _didCloseCurrentPrompt;
	BOOL _didStartPublication;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerStructuredDataUpdated:(id)arg1 ;
-(void)composerPublicationProcessStartedForPublisherData:(id)arg1 ;
-(void)composerFinishedDismissingForCompositionIdentifier:(id)arg1 navigationCoordinator:(id)arg2 ;
-(void)_beginListeningToLiveEvents;
-(void)_endListeningToLiveEvents;
-(void)_logEventWithAction:(id)arg1 ;
-(void)_closeCurrentPromptWithCloseType:(long long)arg1 ;
-(void)_userDidPostLiveVideoIncludingPrompt:(BOOL)arg1 ;
-(void)_userDidCancelComposer;
-(void)facecastDidFinishBroadcastingWithPublisherData:(id)arg1 ;
-(void)facecastDidExitWithPublisherData:(id)arg1 ;
-(void)facecastDidCancelWithPublisherData:(id)arg1 ;
-(id)initWithPromptSession:(id)arg1 promptManager:(id)arg2 compositionAnnouncer:(id)arg3 facecastAnnouncer:(id)arg4 session:(id)arg5 ;
-(void)dealloc;
@end

