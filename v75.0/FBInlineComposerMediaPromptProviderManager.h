/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAssetsLibraryListener.h>
#import <Facebook/FBInlineComposerPromptsProviderListener.h>
#import <Facebook/FBInlineComposerPromptsProvider.h>

@protocol FBInlineComposerPromptsProvider;
@class NSArray, FBInlineComposerPromptsProviderListenerAnnouncer, FBAssetsLibrary, FBUserSession, FBMediaPublishingInfoCache, NSString;

@interface FBInlineComposerMediaPromptProviderManager : NSObject <FBAssetsLibraryListener, FBInlineComposerPromptsProviderListener, FBInlineComposerPromptsProvider> {

	NSArray* _providers;
	id<FBInlineComposerPromptsProvider> _currentProvider;
	FBInlineComposerPromptsProviderListenerAnnouncer* _announcer;
	FBAssetsLibrary* _assetsLibrary;
	FBUserSession* _session;
	FBMediaPublishingInfoCache* _mediaPublishingInfoCache;
	BOOL _isReloading;
	NSArray* _currentPrompts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * currentPrompts;              //@synthesize currentPrompts=_currentPrompts - In the implementation block
-(void)didClosePrompt:(id)arg1 closeReason:(long long)arg2 ;
-(void)reloadPromptsWithCompletion:(/*^block*/id)arg1 ;
-(void)composerDidPost:(id)arg1 ;
-(void)inlineComposerImpression:(id)arg1 ;
-(void)didHidePrompt:(id)arg1 hideReason:(long long)arg2 ;
-(void)assetsLibraryDidLoadAssets;
-(NSArray *)currentPrompts;
-(void)promptsProviderDidUpdatePrompts:(id)arg1 ;
-(BOOL)_hasNewPhotoThatHasNotBeenPrompted:(id)arg1 ;
-(void)_logPromptNotConsidered:(id)arg1 withReason:(id)arg2 ;
-(void)_updateCurrentPromptsAndAnnoucerIfNeededWithNewPrompts:(id)arg1 ;
-(void)_combineCurrentPrompts;
-(void)_closeOutCurrentPrompts;
-(id)initWithProviders:(id)arg1 lifecycleStatusAnnouncer:(id)arg2 assetsLibrary:(id)arg3 session:(id)arg4 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

