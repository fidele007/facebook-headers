/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBInstantGameProfileImageViewConfiguration : FBValueObject <NSCopying> {

	double _roundedImageDiameter;
	double _borderWidth;
	UIColor* _placeholderColor;
	UIColor* _borderColor;

}

@property (nonatomic,readonly) double roundedImageDiameter;                  //@synthesize roundedImageDiameter=_roundedImageDiameter - In the implementation block
@property (nonatomic,readonly) double borderWidth;                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * borderColor;                   //@synthesize borderColor=_borderColor - In the implementation block
-(id)initWithRoundedImageDiameter:(double)arg1 borderWidth:(double)arg2 placeholderColor:(id)arg3 borderColor:(id)arg4 ;
-(double)roundedImageDiameter;
-(UIColor *)borderColor;
-(double)borderWidth;
-(UIColor *)placeholderColor;
@end

