/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class UIView, NSArray, FBMemModelObject, FBReactionContext;

@interface FBReactionEventProfileBlocksAttachmentsAdapter : FBReactionBaseAttachmentAdapter {

	UIView* _listView;
	NSArray* _itemViews;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _reactionContext;

}

@property (nonatomic,retain) UIView * listView;                                                        //@synthesize listView=_listView - In the implementation block
@property (nonatomic,copy) NSArray * itemViews;                                                        //@synthesize itemViews=_itemViews - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) FBReactionContext * reactionContext;                                      //@synthesize reactionContext=_reactionContext - In the implementation block
+(BOOL)supportsBottomBorder;
+(id)_itemViewForAttachment:(id)arg1 renderIdiom:(unsigned long long)arg2 session:(id)arg3 isLast:(BOOL)arg4 ;
+(id)reactionFormattedItemContentViewBuilder;
-(FBReactionContext *)reactionContext;
-(void)setReactionContext:(FBReactionContext *)arg1 ;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
-(void)didTapListItemView:(id)arg1 ;
-(void)setListView:(UIView *)arg1 ;
-(UIView *)listView;
-(NSArray *)itemViews;
-(void)setItemViews:(NSArray *)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end

