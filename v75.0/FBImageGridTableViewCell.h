/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBDisabling.h>

@protocol FBImageGridTableViewCellDelegate;
@class UIView, UITapGestureRecognizer, NSArray, NSString;

@interface FBImageGridTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, FBDisabling> {

	UIView* _disabledOverlayView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _disabled;
	NSArray* _tappableGridPhotoViews;
	id<FBImageGridTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * tappableGridPhotoViews;                                    //@synthesize tappableGridPhotoViews=_tappableGridPhotoViews - In the implementation block
@property (assign,nonatomic,__weak) id<FBImageGridTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                   //@synthesize disabled=_disabled - In the implementation block
+(unsigned long long)gridCellsPerRow;
+(double)imageSizeForWidth:(double)arg1 ;
+(double)rowHeightForWidth:(double)arg1 ;
+(double)bottomCellPadding;
+(double)topCellPadding;
+(unsigned long long)rowIndexFromItemIndex:(unsigned long long)arg1 ;
+(unsigned long long)columnFromItemIndex:(unsigned long long)arg1 ;
+(unsigned long long)itemIndexForRowIndex:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
+(unsigned long long)indexOfTableViewCellAtCenterOfTableView:(id)arg1 ;
-(void)didReceiveTapWithGestureRecognizer:(id)arg1 ;
-(void)_updateDisabledState;
-(id)initWithWidth:(double)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 session:(id)arg4 ;
-(NSArray *)tappableGridPhotoViews;
-(void)setTappableGridPhotoViews:(NSArray *)arg1 ;
-(void)setDelegate:(id<FBImageGridTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBImageGridTableViewCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end

