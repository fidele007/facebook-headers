/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface FBProgressiveJPEGUpdateResult : NSObject {

	NSError* _error;
	unsigned long long _imageFlag;

}

@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;              //@synthesize imageFlag=_imageFlag - In the implementation block
+(id)newWithImageFlag:(unsigned long long)arg1 error:(id)arg2 ;
-(unsigned long long)imageFlag;
-(NSError *)error;
@end

