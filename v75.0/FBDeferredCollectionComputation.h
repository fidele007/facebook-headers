/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBImmutableList;

@interface FBDeferredCollectionComputation : NSObject {

	id _baseCollection;
	unsigned long long _baseCollectionType;
	unsigned long long _numberToTake;
	FBImmutableList* _operations;

}

@property (nonatomic,copy,readonly) id baseCollection;                             //@synthesize baseCollection=_baseCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long baseCollectionType;              //@synthesize baseCollectionType=_baseCollectionType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberToTake;                    //@synthesize numberToTake=_numberToTake - In the implementation block
@property (nonatomic,copy,readonly) FBImmutableList * operations;                  //@synthesize operations=_operations - In the implementation block
-(id)baseCollection;
-(unsigned long long)baseCollectionType;
-(unsigned long long)numberToTake;
-(id)initWithBaseCollection:(id)arg1 baseCollectionType:(unsigned long long)arg2 numberToTake:(unsigned long long)arg3 operations:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBImmutableList *)operations;
@end

