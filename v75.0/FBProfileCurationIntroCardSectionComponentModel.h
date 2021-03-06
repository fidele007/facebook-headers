/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson, NSString;

@interface FBProfileCurationIntroCardSectionComponentModel : FBValueObject <NSCopying> {

	FBMemPerson* _person;
	NSString* _itemType;
	NSString* _bucketSessionID;
	NSString* _discoverySessionReferrerType;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;                                 //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemType;                                  //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy,readonly) NSString * bucketSessionID;                           //@synthesize bucketSessionID=_bucketSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverySessionReferrerType;              //@synthesize discoverySessionReferrerType=_discoverySessionReferrerType - In the implementation block
-(id)initWithPerson:(id)arg1 itemType:(id)arg2 bucketSessionID:(id)arg3 discoverySessionReferrerType:(id)arg4 ;
-(NSString *)bucketSessionID;
-(NSString *)discoverySessionReferrerType;
-(FBMemPerson *)person;
-(NSString *)itemType;
@end

