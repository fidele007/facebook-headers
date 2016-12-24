/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMemComment, NSError;

@interface FBOptimisticComment : NSObject {

	NSString* _optimisticID;
	NSString* _permanentID;
	FBMemComment* _comment;
	NSError* _postingError;

}

@property (nonatomic,copy,readonly) NSString * optimisticID;              //@synthesize optimisticID=_optimisticID - In the implementation block
@property (nonatomic,copy,readonly) NSString * permanentID;               //@synthesize permanentID=_permanentID - In the implementation block
@property (nonatomic,readonly) FBMemComment * comment;                    //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy,readonly) NSError * postingError;               //@synthesize postingError=_postingError - In the implementation block
-(NSString *)permanentID;
-(NSError *)postingError;
-(NSString *)optimisticID;
-(id)initWithOptimisticID:(id)arg1 permanentID:(id)arg2 comment:(id)arg3 postingError:(id)arg4 ;
-(id)initWithOptimisticID:(id)arg1 comment:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemComment *)comment;
@end

