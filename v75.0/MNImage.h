/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, FLAnimatedImage;

@interface MNImage : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIImage* _staticImage;
	FLAnimatedImage* _animatedImage;

}
+(id)animatedImage:(id)arg1 ;
+(id)staticImage:(id)arg1 ;
-(void)matchStaticImage:(/*^block*/id)arg1 animatedImage:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

