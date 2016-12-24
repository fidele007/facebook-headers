/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerAlbumPublishButtonTextBehaviour : FBValueObject <NSCopying, NSCoding> {

	NSString* _buttonTitleWhenPublishingToAlbum;
	NSString* _buttonTitleWhenNotPublishingToAlbum;

}

@property (nonatomic,copy,readonly) NSString * buttonTitleWhenPublishingToAlbum;                 //@synthesize buttonTitleWhenPublishingToAlbum=_buttonTitleWhenPublishingToAlbum - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitleWhenNotPublishingToAlbum;              //@synthesize buttonTitleWhenNotPublishingToAlbum=_buttonTitleWhenNotPublishingToAlbum - In the implementation block
-(id)initWithButtonTitleWhenPublishingToAlbum:(id)arg1 buttonTitleWhenNotPublishingToAlbum:(id)arg2 ;
-(NSString *)buttonTitleWhenPublishingToAlbum;
-(NSString *)buttonTitleWhenNotPublishingToAlbum;
@end
