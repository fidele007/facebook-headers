/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMAttachment.h>

@class MNPlainPhotoViewModel;

@interface FBMPhotoAttachment : FBMAttachment {

	long long _imageType;
	MNPlainPhotoViewModel* _plainPhotoViewModel;

}

@property (assign,nonatomic) long long imageType;                                    //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy) MNPlainPhotoViewModel * plainPhotoViewModel;              //@synthesize plainPhotoViewModel=_plainPhotoViewModel - In the implementation block
-(MNPlainPhotoViewModel *)plainPhotoViewModel;
-(void)setPlainPhotoViewModel:(MNPlainPhotoViewModel *)arg1 ;
-(void)setImageType:(long long)arg1 ;
-(long long)imageType;
@end
