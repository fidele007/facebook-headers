/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, NSArray;

@interface FBMention : FBValueObject <NSCopying, NSCoding> {

	NSString* _displayName;
	NSString* _graphQLIDOfMentionedEntity;
	NSString* _graphQLTypeOfMentionedEntity;
	NSString* _nameOfMentionedEntity;
	NSString* _classOfMentionedEntity;
	NSURL* _urlForViewingMentionedEntity;
	NSString* _friendshipStatusOfUserWithMentionedEntity;
	NSArray* _structuredNameParts;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                                                          //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLIDOfMentionedEntity;                             //@synthesize graphQLIDOfMentionedEntity=_graphQLIDOfMentionedEntity - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLTypeOfMentionedEntity;                           //@synthesize graphQLTypeOfMentionedEntity=_graphQLTypeOfMentionedEntity - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameOfMentionedEntity;                                  //@synthesize nameOfMentionedEntity=_nameOfMentionedEntity - In the implementation block
@property (nonatomic,copy,readonly) NSString * classOfMentionedEntity;                                 //@synthesize classOfMentionedEntity=_classOfMentionedEntity - In the implementation block
@property (nonatomic,copy,readonly) NSURL * urlForViewingMentionedEntity;                              //@synthesize urlForViewingMentionedEntity=_urlForViewingMentionedEntity - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendshipStatusOfUserWithMentionedEntity;              //@synthesize friendshipStatusOfUserWithMentionedEntity=_friendshipStatusOfUserWithMentionedEntity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * structuredNameParts;                                     //@synthesize structuredNameParts=_structuredNameParts - In the implementation block
+(id)mentionsFromMemTextWithEntities:(id)arg1 ;
-(NSString *)graphQLIDOfMentionedEntity;
-(NSString *)graphQLTypeOfMentionedEntity;
-(NSString *)classOfMentionedEntity;
-(NSString *)nameOfMentionedEntity;
-(NSURL *)urlForViewingMentionedEntity;
-(NSString *)friendshipStatusOfUserWithMentionedEntity;
-(NSArray *)structuredNameParts;
-(id)initWithRange:(NSRange)arg1 displayName:(id)arg2 graphQLIDOfMentionedEntity:(id)arg3 graphQLTypeOfMentionedEntity:(id)arg4 nameOfMentionedEntity:(id)arg5 classOfMentionedEntity:(id)arg6 urlForViewingMentionedEntity:(id)arg7 friendshipStatusOfUserWithMentionedEntity:(id)arg8 structuredNameParts:(id)arg9 ;
-(NSRange)range;
-(NSString *)displayName;
@end

