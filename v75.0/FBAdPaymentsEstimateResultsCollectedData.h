/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface FBAdPaymentsEstimateResultsCollectedData : FBValueObject <NSCopying> {

	NSString* _estimateType;
	NSNumber* _lowerBound;
	NSNumber* _upperBound;

}

@property (nonatomic,copy,readonly) NSString * estimateType;              //@synthesize estimateType=_estimateType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lowerBound;                //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * upperBound;                //@synthesize upperBound=_upperBound - In the implementation block
-(NSNumber *)upperBound;
-(NSNumber *)lowerBound;
-(NSString *)estimateType;
-(id)initWithEstimateType:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 ;
@end

