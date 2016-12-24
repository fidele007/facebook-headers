/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface FBComposerPerson : FBValueObject <NSCopying, NSCoding> {

	NSString* _graphQLID;
	NSString* _graphQLTypeName;
	NSString* _name;
	NSString* _shortName;
	NSString* _friendshipStatus;
	NSURL* _profilePictureURL;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                     //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLTypeName;               //@synthesize graphQLTypeName=_graphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                     //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendshipStatus;              //@synthesize friendshipStatus=_friendshipStatus - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePictureURL;                //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
-(NSString *)graphQLID;
-(NSString *)graphQLTypeName;
-(NSString *)friendshipStatus;
-(NSURL *)profilePictureURL;
-(id)initWithGraphQLID:(id)arg1 graphQLTypeName:(id)arg2 name:(id)arg3 shortName:(id)arg4 friendshipStatus:(id)arg5 profilePictureURL:(id)arg6 ;
-(NSString *)name;
-(NSString *)shortName;
@end

