/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>
#import <Facebook/_FBReactionAdapterProfileHelperDelegate.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class UIView, FBReactionContext, NSMutableArray, FBUserSession, FBMemModelObject, NSString;

@interface FBReactionFacepileAttachmentsAdapter : FBReactionBaseAttachmentAdapter <_FBReactionAdapterProfileHelperDelegate> {

	UIView* _attachmentsView;
	FBReactionContext* _reactionContext;
	NSMutableArray* _adapterHelpers;
	FBUserSession* _session;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;

}

@property (nonatomic,copy) NSMutableArray * adapterHelpers;                                            //@synthesize adapterHelpers=_adapterHelpers - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBottomBorder;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
-(NSMutableArray *)adapterHelpers;
-(id)_pullProfiles;
-(void)openProfile:(id)arg1 forAdapterHelper:(id)arg2 ;
-(void)setAdapterHelpers:(NSMutableArray *)arg1 ;
-(BOOL)shouldDisplayEllipsisViewForConnection:(id)arg1 withCurrentCount:(long long)arg2 ;
-(void)addViewFromEdge:(id)arg1 to:(id)arg2 ;
-(void)addEllipsisImageViewToAttachmentViews:(id)arg1 ;
-(void)ellipsisViewTapped;
-(void)openSeeAll;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end

