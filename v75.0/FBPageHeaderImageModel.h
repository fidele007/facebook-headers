/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, UIImage, NSError;

@interface FBPageHeaderImageModel : FBValueObject <NSCopying> {

	BOOL _isLowRes;
	NSURL* _uri;
	UIImage* _image;
	NSError* _error;
	unsigned long long _downloadResultType;

}

@property (nonatomic,copy,readonly) NSURL * uri;                                   //@synthesize uri=_uri - In the implementation block
@property (nonatomic,readonly) BOOL isLowRes;                                      //@synthesize isLowRes=_isLowRes - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadResultType;              //@synthesize downloadResultType=_downloadResultType - In the implementation block
-(BOOL)isLowRes;
-(id)initWithUri:(id)arg1 isLowRes:(BOOL)arg2 image:(id)arg3 error:(id)arg4 downloadResultType:(unsigned long long)arg5 ;
-(unsigned long long)downloadResultType;
-(UIImage *)image;
-(NSError *)error;
-(NSURL *)uri;
@end

