/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL;

@interface FBMessageExternalGIFOutgoingAttachmentContent : FBValueObject <NSCopying, NSCoding> {

	NSURL* _gifURL;

}

@property (nonatomic,copy,readonly) NSURL * gifURL;              //@synthesize gifURL=_gifURL - In the implementation block
-(id)initWithGifURL:(id)arg1 ;
-(NSURL *)gifURL;
@end
