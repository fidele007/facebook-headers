/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCommentMention : FBValueObject <NSCopying> {

	NSString* _entityGraphQLID;
	NSString* _entityGraphQLTypeName;
	NSString* _entityClassName;
	NSString* _entityName;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityGraphQLID;                    //@synthesize entityGraphQLID=_entityGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityGraphQLTypeName;              //@synthesize entityGraphQLTypeName=_entityGraphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityClassName;                    //@synthesize entityClassName=_entityClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityName;                         //@synthesize entityName=_entityName - In the implementation block
-(id)initWithRange:(NSRange)arg1 entityGraphQLID:(id)arg2 entityGraphQLTypeName:(id)arg3 entityClassName:(id)arg4 entityName:(id)arg5 ;
-(NSString *)entityGraphQLID;
-(NSString *)entityGraphQLTypeName;
-(NSString *)entityClassName;
-(NSRange)range;
-(NSString *)entityName;
@end

