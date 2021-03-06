/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBBackstageAsset, NSArray, NSString;

@interface FBBackstagePostCreationData : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBBackstageAsset* _directPost_backstageAsset;
	NSArray* _directPost_specificUserGraphQLIDs;
	BOOL _directPost_shareToNewsFeed;
	BOOL _directPost_shareToSnacks;
	FBBackstageAsset* _legacyReply_backstageAsset;
	NSString* _legacyReply_toPostGraphQLID;
	NSString* _legacyReply_toThreadGraphQLID;
	FBBackstageAsset* _lightWeightReply_backstageAsset;
	NSString* _lightWeightReply_toPostGraphQLID;
	FBBackstageAsset* _textReply_backstageAsset;
	NSString* _textReply_toPostGraphQLID;
	NSString* _textReply_toThreadGraphQLID;
	NSString* _textReply_toUserGraphQLID;

}
+(id)textReplyWithBackstageAsset:(id)arg1 toPostGraphQLID:(id)arg2 toThreadGraphQLID:(id)arg3 toUserGraphQLID:(id)arg4 ;
+(id)directPostWithBackstageAsset:(id)arg1 specificUserGraphQLIDs:(id)arg2 shareToNewsFeed:(BOOL)arg3 shareToSnacks:(BOOL)arg4 ;
+(id)legacyReplyWithBackstageAsset:(id)arg1 toPostGraphQLID:(id)arg2 toThreadGraphQLID:(id)arg3 ;
+(id)lightWeightReplyWithBackstageAsset:(id)arg1 toPostGraphQLID:(id)arg2 ;
-(id)backstageAsset;
-(BOOL)sharedToSnacks;
-(id)specificUserGraphQLIDs;
-(id)toUserGraphQLID;
-(id)postType;
-(id)toThreadGraphQLID;
-(id)toPostGraphQLID;
-(id)sharePrivately;
-(id)directSpaces;
-(BOOL)sharedDirectly;
-(void)matchDirectPost:(/*^block*/id)arg1 legacyReply:(/*^block*/id)arg2 lightWeightReply:(/*^block*/id)arg3 textReply:(/*^block*/id)arg4 ;
-(BOOL)shouldWaitForVideoProcessing;
-(BOOL)shareToNewsFeed;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

