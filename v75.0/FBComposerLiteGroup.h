/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FBComposerLiteCoverPhoto, NSString;

@interface FBComposerLiteGroup : NSObject <NSSecureCoding> {

	FBComposerLiteCoverPhoto* _coverPhotoInfo;
	NSString* _groupID;
	NSString* _groupName;
	NSString* _visibilitySentence;

}

@property (nonatomic,copy,readonly) FBComposerLiteCoverPhoto * coverPhotoInfo;              //@synthesize coverPhotoInfo=_coverPhotoInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupID;                                     //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;                                   //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibilitySentence;                          //@synthesize visibilitySentence=_visibilitySentence - In the implementation block
+(id)groupsFromGraphQLResponse:(id)arg1 ;
+(id)graphQLQuery;
+(id)graphQLParameters;
+(id)groupFromGraphQLDictionary:(id)arg1 ;
+(id)visibilityGraphQLQuery;
+(id)visibilityFromGraphQLResponse:(id)arg1 forGroupID:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSString *)visibilitySentence;
-(FBComposerLiteCoverPhoto *)coverPhotoInfo;
-(id)initWithGroupID:(id)arg1 groupName:(id)arg2 coverPhotoInfo:(id)arg3 visibilitySentence:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)groupName;
-(NSString *)groupID;
@end

