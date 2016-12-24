/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, FBMemPerson;

@interface FBPersonIntentTarget : FBIntentTarget {

	NSString* _FBID;

}

@property (nonatomic,readonly) FBMemPerson * person; 
@property (nonatomic,copy,readonly) NSString * commerceSellOptionsID; 
@property (nonatomic,copy,readonly) NSString * referrerType; 
@property (nonatomic,copy,readonly) NSString * referrerTargetID; 
@property (nonatomic,readonly) BOOL isOriginatedFromProfileSurfing; 
@property (nonatomic,copy,readonly) NSString * referrerSystem; 
@property (nonatomic,copy,readonly) NSString * referrerPage; 
@property (nonatomic,copy,readonly) NSString * analyticsUUID; 
@property (nonatomic,copy,readonly) NSString * FBID;                               //@synthesize FBID=_FBID - In the implementation block
+(id)personTargetWithFBID:(id)arg1 ;
+(id)personTargetWithFBID:(id)arg1 referrerSystem:(id)arg2 referrerPage:(id)arg3 analyticsUUID:(id)arg4 ;
+(id)personTargetWithPerson:(id)arg1 ;
+(id)personTargetFromProfileSurfing:(id)arg1 ;
+(id)personTargetWithCommerceData:(id)arg1 commerceSellOptionsID:(id)arg2 referrerType:(id)arg3 referrerTargetID:(id)arg4 ;
-(NSString *)FBID;
-(NSString *)analyticsUUID;
-(id)fallbackURLs;
-(NSString *)referrerType;
-(NSString *)referrerTargetID;
-(NSString *)referrerSystem;
-(NSString *)referrerPage;
-(NSString *)commerceSellOptionsID;
-(BOOL)isOriginatedFromProfileSurfing;
-(id)nativeURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemPerson *)person;
@end

