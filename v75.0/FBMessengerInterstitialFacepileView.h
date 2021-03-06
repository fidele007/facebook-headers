/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, FBMImageViewDownloader, UILabel;

@interface FBMessengerInterstitialFacepileView : UIView {

	NSArray* _faceImageViews;
	FBMImageViewDownloader* _imageViewDownloader;
	NSArray* _imageUrls;
	UILabel* _descriptionLabel;
	long long _descriptionLabelStyle;

}

@property (nonatomic,copy) NSArray * imageUrls;                            //@synthesize imageUrls=_imageUrls - In the implementation block
@property (assign,nonatomic) long long descriptionLabelStyle;              //@synthesize descriptionLabelStyle=_descriptionLabelStyle - In the implementation block
-(NSArray *)imageUrls;
-(CGSize)_sizeThatFitsDescriptionLabel:(double)arg1 ;
-(CGSize)_sizeThatFitsImageViews;
-(void)setDescriptionText:(id)arg1 withStyle:(long long)arg2 ;
-(void)_updateFaceImageViews:(id)arg1 ;
-(void)_downloadFaceImages;
-(id)initWithImageViewDownloader:(id)arg1 ;
-(void)setDescriptionLabelStyle:(long long)arg1 ;
-(void)resetDescriptionLabelFont;
-(void)setImageUrls:(NSArray *)arg1 ;
-(long long)descriptionLabelStyle;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

