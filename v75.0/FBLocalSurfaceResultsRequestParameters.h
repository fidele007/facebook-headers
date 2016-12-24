/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBLocalSurfaceResultsRequestParameters : FBValueObject <NSCopying> {

	NSString* _query;
	NSString* _surfaceType;

}

@property (nonatomic,copy,readonly) NSString * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSString * surfaceType;              //@synthesize surfaceType=_surfaceType - In the implementation block
-(id)initWithQuery:(id)arg1 surfaceType:(id)arg2 ;
-(NSString *)surfaceType;
-(NSString *)query;
@end
