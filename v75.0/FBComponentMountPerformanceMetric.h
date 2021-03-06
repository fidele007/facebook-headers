/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComponentMountPerformanceMetric : FBValueObject <NSCopying> {

	long long _mountTimeUs;
	Class _componentClass;
	NSString* _source;
	NSString* _analyticsModule;

}

@property (nonatomic,readonly) long long mountTimeUs;                        //@synthesize mountTimeUs=_mountTimeUs - In the implementation block
@property (nonatomic,readonly) Class componentClass;                         //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
-(NSString *)analyticsModule;
-(id)initWithMountTimeUs:(long long)arg1 componentClass:(Class)arg2 source:(id)arg3 analyticsModule:(id)arg4 ;
-(long long)mountTimeUs;
-(NSString *)source;
-(Class)componentClass;
@end

