/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionActionAdapterDelegate.h>
#import <Facebook/FBReactionHeaderAdapter.h>

@protocol FBQueriedReactionUnitHeaderFieldsProtocol, FBReactionActionAdapter, FBQueriedReactionUnitFieldsProtocol, FBReactionHeaderAdapterDelegate;
@class FBUserSession, FBMemModelObject, FBReactionIconInlineActionHeaderView, FBReactionContext, NSString;

@interface FBReactionIconInlineActionHeaderAdapter : NSObject <FBReactionActionAdapterDelegate, FBReactionHeaderAdapter> {

	FBUserSession* _session;
	FBMemModelObject*<FBQueriedReactionUnitHeaderFieldsProtocol> _unitHeader;
	FBReactionIconInlineActionHeaderView* _view;
	FBReactionContext* _context;
	id<FBReactionActionAdapter> _headerAction;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	id<FBReactionHeaderAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionHeaderAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_auxViewForHeader:(id)arg1 ;
-(void)switchToNewOverlayWithPageId:(id)arg1 ;
-(void)hideUnit:(id)arg1 forReactionActionAdapter:(id)arg2 ;
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 forReactionActionAdapter:(id)arg3 ;
-(id)adapterViewLoadingBlockEnumerator;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)updateHeaderReloadingStateToIsReloading:(BOOL)arg1 ;
-(void)setDelegate:(id<FBReactionHeaderAdapterDelegate>)arg1 ;
-(id<FBReactionHeaderAdapterDelegate>)delegate;
-(id)headerView;
@end

