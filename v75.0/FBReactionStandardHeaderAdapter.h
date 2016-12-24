/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionActionAdapterDelegate.h>
#import <Facebook/FBReactionHeaderAdapter.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionActionAdapter, FBReactionHeaderAdapterDelegate;
@class FBUserSession, FBMemModelObject, FBReactionCardHeaderView, NSArray, FBSecondaryActionMenuController, FBReactionContext, NSString, UIView, FBCustomActivityIndicatorView, FBReactionAnimationHelper, UIButton;

@interface FBReactionStandardHeaderAdapter : NSObject <FBReactionActionAdapterDelegate, FBReactionHeaderAdapter> {

	FBUserSession* _session;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionCardHeaderView* _headerView;
	NSArray* _secondaryActionHandlers;
	FBSecondaryActionMenuController* _secondaryActionMenuController;
	id<FBReactionActionAdapter> _headerAction;
	FBReactionContext* _context;
	NSString* _style;
	unsigned long long _renderIdiom;
	UIView* _headerDefaultIconView;
	FBCustomActivityIndicatorView* _headerLoadingIconView;
	BOOL _isReloading;
	FBReactionAnimationHelper* _animationHelper;
	UIButton* _secondaryActionButton;
	BOOL _showsDisclosureIndicator;
	id<FBReactionHeaderAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionHeaderAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)switchToNewOverlayWithPageId:(id)arg1 ;
-(void)hideUnit:(id)arg1 forReactionActionAdapter:(id)arg2 ;
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 forReactionActionAdapter:(id)arg3 ;
-(void)handleTextTap:(id)arg1 withEvent:(id)arg2 ;
-(id)adapterViewLoadingBlockEnumerator;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)updateHeaderReloadingStateToIsReloading:(BOOL)arg1 ;
-(void)performHeaderAction;
-(void)setupTextTaps:(id)arg1 ;
-(void)_chevronTapped:(id)arg1 ;
-(void)rotateOutDidComplete;
-(void)setDelegate:(id<FBReactionHeaderAdapterDelegate>)arg1 ;
-(id<FBReactionHeaderAdapterDelegate>)delegate;
-(id)headerView;
@end
