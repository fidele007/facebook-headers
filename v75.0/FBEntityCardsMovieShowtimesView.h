/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBEntityCardsMovieShowtimesViewDelegate;
@class UIScrollView, NSMutableArray, UIButton, NSString;

@interface FBEntityCardsMovieShowtimesView : UIView {

	UIScrollView* _scrollView;
	NSMutableArray* _showtimeLabels;
	NSMutableArray* _dividers;
	UIButton* _ticketButton;
	double _sidePadding;
	NSString* _ticketingUrl;
	id<FBEntityCardsMovieShowtimesViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEntityCardsMovieShowtimesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithShowtimes:(id)arg1 sidePadding:(double)arg2 ticketingUrl:(id)arg3 ;
-(void)_ticketingButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBEntityCardsMovieShowtimesViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBEntityCardsMovieShowtimesViewDelegate>)delegate;
@end

