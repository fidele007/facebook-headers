/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBStreamingEventPinnedViewDelegate;
@class NSString, UIView, FBButtonWithExtendedTapTarget, FBStreamingEventEntityActorCellView, FBStreamingEventEntity;

@interface FBStreamingEventPinnedView : UIView {

	NSString* _broadcasterID;
	UIView* _dividerView;
	FBButtonWithExtendedTapTarget* _dismissButton;
	FBStreamingEventEntityActorCellView* _contentView;
	FBStreamingEventEntity* _entity;
	unsigned long long _style;
	id<FBStreamingEventPinnedViewDelegate> _delegate;

}

@property (nonatomic,retain) FBStreamingEventEntity * entity;                                     //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL canToggleExpandedProperty; 
@property (assign,nonatomic) BOOL expanded; 
@property (assign,nonatomic,__weak) id<FBStreamingEventPinnedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)_verticalPadding;
-(void)_tappedEvent:(id)arg1 ;
-(void)_tappedAccessoryControl:(id)arg1 ;
-(id)initWithSession:(id)arg1 broadcasterID:(id)arg2 scenePath:(id)arg3 ;
-(BOOL)canToggleExpandedProperty;
-(void)setDelegate:(id<FBStreamingEventPinnedViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBStreamingEventPinnedViewDelegate>)delegate;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setEntity:(FBStreamingEventEntity *)arg1 ;
-(FBStreamingEventEntity *)entity;
@end

