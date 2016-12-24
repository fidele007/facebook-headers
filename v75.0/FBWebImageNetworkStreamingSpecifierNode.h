/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBWebImageNetworkSpecifierDownloadNode.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBWebImageNetworkStreamingSpecifierNode : FBValueObject <FBWebImageNetworkSpecifierDownloadNode, NSCopying> {

	NSURL* _url;
	unsigned long long _desiredImageFlag;
	unsigned long long _imageFlagsToBeNotified;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) unsigned long long desiredImageFlag; 
@property (nonatomic,copy,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlag;                    //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlagsToBeNotified;              //@synthesize imageFlagsToBeNotified=_imageFlagsToBeNotified - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithUrl:(id)arg1 desiredImageFlag:(unsigned long long)arg2 imageFlagsToBeNotified:(unsigned long long)arg3 ;
-(unsigned long long)desiredImageFlag;
-(unsigned long long)imageFlagsToBeNotified;
-(NSURL *)url;
@end

