/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSNumber, AVAsset;

@interface FBInspirationCameraCapturedAsset : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIImage* _image_image;
	NSNumber* _image_orientation;
	long long _image_devicePosition;
	AVAsset* _video_video;
	UIImage* _video_thumbnail;

}
+(id)imageWithImage:(id)arg1 orientation:(id)arg2 devicePosition:(long long)arg3 ;
+(id)videoWithVideo:(id)arg1 thumbnail:(id)arg2 ;
-(void)matchImage:(/*^block*/id)arg1 video:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

