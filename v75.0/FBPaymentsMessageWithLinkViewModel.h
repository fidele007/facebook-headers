/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, NSURL;

@interface FBPaymentsMessageWithLinkViewModel : FBValueObject <NSCopying> {

	UIImage* _image;
	NSString* _messageText;
	NSString* _linkText;
	NSURL* _linkURL;
	unsigned long long _style;

}

@property (nonatomic,copy,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageText;              //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkText;                 //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkURL;                     //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                 //@synthesize style=_style - In the implementation block
-(id)initWithImage:(id)arg1 messageText:(id)arg2 linkText:(id)arg3 linkURL:(id)arg4 style:(unsigned long long)arg5 ;
-(unsigned long long)style;
-(UIImage *)image;
-(NSString *)messageText;
-(NSString *)linkText;
-(NSURL *)linkURL;
@end

