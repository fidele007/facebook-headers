/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseUnitComponentAdapter.h>
#import <Facebook/_FBReactionAdapterHelperDelegate.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol;
@class UIView, FBMemModelObject, FBReactionContext, FBUserSession, _FBReactionCardAdapterURLHelper, NSString;

@interface FBReactionStoryBlockComponentAdapter : FBReactionBaseUnitComponentAdapter <_FBReactionAdapterHelperDelegate> {

	UIView* _componentView;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _reactionContext;
	FBUserSession* _session;
	_FBReactionCardAdapterURLHelper* _adapterHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)performMagicTap;
-(void)openURL:(id)arg1 forAdapterHelper:(id)arg2 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(id)componentView;
@end

