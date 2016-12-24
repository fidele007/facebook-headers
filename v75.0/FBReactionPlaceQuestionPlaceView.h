/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionPlaceQuestionPlaceViewDelegate;
@class FBLocationMapView, FBMemPage, FBItemView;

@interface FBReactionPlaceQuestionPlaceView : UIView {

	FBLocationMapView* _mapView;
	FBMemPage* _place;
	FBItemView* _itemView;
	id<FBReactionPlaceQuestionPlaceViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionPlaceQuestionPlaceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapMap:(id)arg1 ;
-(void)didTapItemView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 place:(id)arg2 imageDownloader:(id)arg3 delegate:(id)arg4 ;
-(void)setDelegate:(id<FBReactionPlaceQuestionPlaceViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionPlaceQuestionPlaceViewDelegate>)delegate;
@end
