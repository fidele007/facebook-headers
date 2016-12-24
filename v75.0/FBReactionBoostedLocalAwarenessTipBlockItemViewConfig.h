/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemLocation, NSString, FBMemImage, NSAttributedString;

@interface FBReactionBoostedLocalAwarenessTipBlockItemViewConfig : FBValueObject <NSCopying> {

	FBMemLocation* _location;
	double _radius;
	NSString* _pinTitle;
	NSString* _pinSubtitle;
	FBMemImage* _image;
	NSAttributedString* _message;

}

@property (nonatomic,copy,readonly) FBMemLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                                  //@synthesize radius=_radius - In the implementation block
@property (nonatomic,copy,readonly) NSString * pinTitle;                       //@synthesize pinTitle=_pinTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * pinSubtitle;                    //@synthesize pinSubtitle=_pinSubtitle - In the implementation block
@property (nonatomic,copy,readonly) FBMemImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * message;              //@synthesize message=_message - In the implementation block
-(NSString *)pinTitle;
-(NSString *)pinSubtitle;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 pinTitle:(id)arg3 pinSubtitle:(id)arg4 image:(id)arg5 message:(id)arg6 ;
-(FBMemImage *)image;
-(NSAttributedString *)message;
-(FBMemLocation *)location;
-(double)radius;
@end

