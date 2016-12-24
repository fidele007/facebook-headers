/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerMentionDecoratorListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBAvatarTaggingSearchProviderProtocol, FBSimpleSearchTaggingProviderProtocol, FBComposerMentionHosting, FBComposerMentionControllerDelegate;
@class FBComposerMentionDecorator, FBComposerMentionsContainerView, FBMutableTaggableCollection, FBUserSession, FBScenePath, FBComposerTraits, FBComposerDestination, FBMemAvatarTaggingSearchProvider, FBComposerMutableTaggableCollectionProvider, NSString, UITapGestureRecognizer, UITextView, UIView;

@interface FBComposerMentionController : NSObject <FBComposerMentionDecoratorListener, UIGestureRecognizerDelegate> {

	FBComposerMentionDecorator* _mentionDecorator;
	FBComposerMentionsContainerView* _mentionsViewBackingStore;
	id<FBAvatarTaggingSearchProviderProtocol> _searchProvider;
	FBMutableTaggableCollection* _taggableUsers;
	FBUserSession* _userSession;
	FBScenePath* _scenePath;
	FBComposerTraits* _composerTraits;
	FBComposerDestination* _destination;
	FBMemAvatarTaggingSearchProvider* _memAvatarSearchProvider;
	FBComposerMutableTaggableCollectionProvider* _mutableTaggableCollectionProvider;
	id<FBSimpleSearchTaggingProviderProtocol> _simpleSearchTaggingProvider;
	BOOL _useSimpleSearchTaggingProvider;
	NSString* _tagAnyoneSearchProviderActorOverrideFBID;
	NSString* _tagAnyoneSearchProviderSearchContext;
	UITapGestureRecognizer* _windowTapGestureRecognizer;
	UITextView* _mentionableView;
	UIView*<FBComposerMentionHosting> _mentionContainerView;
	id<FBComposerMentionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UITextView * mentionableView;                                        //@synthesize mentionableView=_mentionableView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<FBComposerMentionHosting> mentionContainerView;              //@synthesize mentionContainerView=_mentionContainerView - In the implementation block
@property (nonatomic,readonly) FBComposerMentionDecorator * mentionDecorator;                            //@synthesize mentionDecorator=_mentionDecorator - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerMentionControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBComposerMentionsContainerView * mentionsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBComposerMentionsContainerView *)mentionsView;
-(id)initWithUserSession:(id)arg1 mutableTaggableCollectionProvider:(id)arg2 composerTraits:(id)arg3 scenePath:(id)arg4 ;
-(void)setMentionableView:(UITextView *)arg1 ;
-(void)setMentionContainerView:(UIView*<FBComposerMentionHosting>)arg1 ;
-(FBComposerMentionDecorator *)mentionDecorator;
-(id)mentionDecorationChangeForUpdatedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)mentioningDidFinish;
-(void)mentionDecorator:(id)arg1 hasSuggestedMentions:(id)arg2 ;
-(void)mentionDecorator:(id)arg1 selectedMention:(id)arg2 ;
-(void)mentionDecoratorDidAbortProgressiveMentionalizing:(id)arg1 ;
-(void)_setMentionsHidden:(BOOL)arg1 ;
-(void)_keyboardHide:(id)arg1 ;
-(void)_setupTagAnyoneSearchProviderAndResetIfNewProviderAndAuthorHasBeenPreviouslySet:(BOOL)arg1 ;
-(void)_authorOrPublishTargetDidChange;
-(void)_fetchTaggableCollection;
-(void)_clearSearchProvider;
-(UITextView *)mentionableView;
-(UIView*<FBComposerMentionHosting>)mentionContainerView;
-(void)setDelegate:(id<FBComposerMentionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBComposerMentionControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDestination:(id)arg1 ;
-(void)_tapped:(id)arg1 ;
@end

