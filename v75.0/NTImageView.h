/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@protocol NTImage;
@interface NTImageView : UIImageView {

	id<NTImage> _imageProvider;

}

@property (nonatomic,retain) id<NTImage> imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(id<NTImage>)imageProvider;
-(void)setImageProvider:(id<NTImage>)arg1 ;
@end

