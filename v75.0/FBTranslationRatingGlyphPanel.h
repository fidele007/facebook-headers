/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBTranslationRatingGlyphPanelDelegate;
@class UITapGestureRecognizer, UILongPressGestureRecognizer, NSArray, NSString;

@interface FBTranslationRatingGlyphPanel : UIView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSArray* _glyphViews;
	long long _rating;
	long long _style;
	id<FBTranslationRatingGlyphPanelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBTranslationRatingGlyphPanelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setUpGestureRecognizer;
-(void)_setUpGlyphViews;
-(void)_updateGlyphPanelViewToRating:(double)arg1 ;
-(void)_updateRatingForPoint:(CGPoint)arg1 ;
-(id)_imageViewAtIndex:(long long)arg1 ;
-(id)_emoticonGlyphforIndex:(long long)arg1 ;
-(id)_starGlyph;
-(double)_ratingForLocationInView:(CGPoint)arg1 ;
-(id)initWithStyle:(long long)arg1 rating:(long long)arg2 ;
-(void)setDelegate:(id<FBTranslationRatingGlyphPanelDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBTranslationRatingGlyphPanelDelegate>)delegate;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
@end

