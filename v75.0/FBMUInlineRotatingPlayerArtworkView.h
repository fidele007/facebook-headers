/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBWebImageView, UIImageView, UIView;

@interface FBMUInlineRotatingPlayerArtworkView : UIView {

	FBWebImageView* _artworkView;
	UIImageView* _blurOverlay;
	UIView* _placeholderView;

}
-(id)initWithImageURL:(id)arg1 session:(id)arg2 ;
-(void)_updateBlurViewForImage:(id)arg1 ;
-(BOOL)_isArtworkViewRotating;
-(void)_stopRotating;
-(void)startRotatingFor:(double)arg1 ;
-(void)layoutSubviews;
-(void)reset;
@end

