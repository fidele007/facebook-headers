/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, UIColor, FBFourRoundedCornerView;

@interface FBAuthenticationRoundedImageView : UIView {

	FBNetworkImageView* _imageView;
	double _cornerRadius;
	UIColor* _ambientColor;
	FBFourRoundedCornerView* _roundedCornerView;

}

@property (nonatomic,retain) UIColor * ambientColor;              //@synthesize ambientColor=_ambientColor - In the implementation block
+(id)imageURLForAccountID:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 cornerRadius:(double)arg2 imageDownloader:(id)arg3 ;
-(id)init;
-(void)layoutSubviews;
-(void)setImageURL:(id)arg1 ;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(UIColor *)ambientColor;
@end

