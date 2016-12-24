/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemInterval;

@interface FBAdInterfacesEstimate : FBValueObject <NSCopying> {

	unsigned long long _estimateType;
	FBMemInterval* _interval;

}

@property (nonatomic,readonly) unsigned long long estimateType;              //@synthesize estimateType=_estimateType - In the implementation block
@property (nonatomic,copy,readonly) FBMemInterval * interval;                //@synthesize interval=_interval - In the implementation block
-(id)initWithEstimateType:(unsigned long long)arg1 interval:(id)arg2 ;
-(unsigned long long)estimateType;
-(FBMemInterval *)interval;
@end

