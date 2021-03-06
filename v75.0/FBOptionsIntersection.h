/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, FBRangedOptions;

@interface FBOptionsIntersection : NSObject {

	NSSet* _collatedOptions;
	FBRangedOptions* _firstOptions;
	FBRangedOptions* _secondOptions;

}

@property (nonatomic,readonly) FBRangedOptions * firstOptions;               //@synthesize firstOptions=_firstOptions - In the implementation block
@property (nonatomic,readonly) FBRangedOptions * secondOptions;              //@synthesize secondOptions=_secondOptions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * collatedOptions; 
+(id)intersectionWithIntersectingOptions:(id)arg1 ;
-(id)initWithFirstOptions:(id)arg1 secondOptions:(id)arg2 ;
-(NSSet *)collatedOptions;
-(FBRangedOptions *)firstOptions;
-(FBRangedOptions *)secondOptions;
@end

