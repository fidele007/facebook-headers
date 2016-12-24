/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBCustomActivityIndicatorView, FLAnimatedImageView;

@interface FBComposerGIFPickerCollectionViewCell : UICollectionViewCell {

	FBCustomActivityIndicatorView* _indicatorView;
	FLAnimatedImageView* _imageView;

}

@property (nonatomic,retain) FBCustomActivityIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) FLAnimatedImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
-(void)showActivityIndicatorOverlay:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(FLAnimatedImageView *)imageView;
-(void)setImageView:(FLAnimatedImageView *)arg1 ;
-(FBCustomActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(FBCustomActivityIndicatorView *)arg1 ;
@end
