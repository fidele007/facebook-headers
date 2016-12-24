/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBInspirationAuthor : FBValueObject <NSCopying> {

	NSString* _graphQLID;
	NSURL* _profilePictureURL;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                   //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePictureURL;              //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
-(NSString *)graphQLID;
-(NSURL *)profilePictureURL;
-(id)initWithGraphQLID:(id)arg1 profilePictureURL:(id)arg2 name:(id)arg3 ;
-(NSString *)name;
@end
