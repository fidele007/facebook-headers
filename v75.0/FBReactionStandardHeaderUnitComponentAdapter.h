/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseUnitComponentAdapter.h>
#import <Facebook/FBReactionTimerHelperDelegate.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol, FBReactionActionAdapter, FBReactionUnitComponentAdapterDelegate;
@class FBReactionBorderView, FBReactionCardHeaderView, NSString, FBMemModelObject, FBReactionContext, UIView, FBCustomActivityIndicatorView, FBReactionAnimationHelper, NSTimer, FBReactionTimerHelper, NSArray, FBSecondaryActionMenuController;

@interface FBReactionStandardHeaderUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionTimerHelperDelegate> {

	FBReactionBorderView* _borderView;
	FBReactionCardHeaderView* _componentView;
	NSString* _style;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _component;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _context;
	UIView* _headerDefaultIconView;
	FBCustomActivityIndicatorView* _headerLoadingIconView;
	BOOL _isReloading;
	FBReactionAnimationHelper* _animationHelper;
	NSTimer* _autoExecuteActionTimer;
	FBReactionTimerHelper* _timerHelper;
	id<FBReactionActionAdapter> _auxActionadapter;
	NSArray* _secondaryActionHandlers;
	FBSecondaryActionMenuController* _secondaryActionMenuController;
	UIView* _disclosureView;
	id<FBReactionUnitComponentAdapterDelegate> delegate;
	id<FBReactionActionAdapter> _actionAdapter;

}

@property (nonatomic,retain) id<FBReactionActionAdapter> actionAdapter;              //@synthesize actionAdapter=_actionAdapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)performMagicTap;
-(void)handleTextTap:(id)arg1 withEvent:(id)arg2 ;
-(id<FBReactionActionAdapter>)actionAdapter;
-(void)setActionAdapter:(id<FBReactionActionAdapter>)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(id)componentView;
-(void)updateUnitComponentReloadingStateToIsReloading:(BOOL)arg1 ;
-(id)_getDisclosureView;
-(void)setupTextTaps:(id)arg1 ;
-(void)_chevronTapped:(id)arg1 ;
-(void)rotateOutDidComplete;
-(void)timerFiredWithTimerHelper:(id)arg1 ;
-(void)setSecondaryActionsForUnitComponentAsHidden:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

