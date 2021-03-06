/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNMessageDetectedDataHandlingResult : FBValueObject <NSCopying> {

	BOOL _isCanceled;
	NSError* _error;

}

@property (nonatomic,readonly) BOOL isCanceled;                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithIsCanceled:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)isCanceled;
-(NSError *)error;
@end

