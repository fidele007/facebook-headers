/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseUnitComponentAdapter.h>
#import <Facebook/FBReactionActionAdapterDelegate.h>
#import <Facebook/FBReactionExpandableUnitChildProtocol.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBQueriedReactionUnitComponentFieldsProtocol, FBReactionUnitComponentAdapterDelegate;
@class UIView, FBMemModelObject, FBReactionContext, NSString, NSArray;

@interface FBReactionVerticalListUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionActionAdapterDelegate, FBReactionExpandableUnitChildProtocol> {

	UIView* _componentView;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _component;
	FBReactionContext* _context;
	NSString* _style;
	BOOL _isFirst;
	BOOL _isLast;
	NSArray* _childComponentAdapters;
	id<FBReactionUnitComponentAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(id)componentView;
-(void)parentComponentShouldHighlight:(BOOL)arg1 forUnitComponentAdapter:(id)arg2 ;
-(void)updateUnitComponentReloadingStateToIsReloading:(BOOL)arg1 ;
-(void)willDisplayUnitComponent;
-(void)didEndDisplayingUnitComponent;
-(void)scrollToUnit:(id)arg1 forReactionUnitComponentAdapter:(id)arg2 ;
-(void)triggerDownloadAllUnitsFromUnitComponentAdapter:(id)arg1 ;
-(double)getUnexpandedHeight;
-(id)_newDivider;
-(id)childComponentAdapters;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

