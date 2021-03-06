/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBComposerTaggedUsersBundle;

@interface FBComposerVideoAttachmentTaggingUpdate : FBValueObject <NSCopying> {

	NSArray* _assetIDs;
	FBComposerTaggedUsersBundle* _taggedUsers;

}

@property (nonatomic,copy,readonly) NSArray * assetIDs;                                     //@synthesize assetIDs=_assetIDs - In the implementation block
@property (nonatomic,copy,readonly) FBComposerTaggedUsersBundle * taggedUsers;              //@synthesize taggedUsers=_taggedUsers - In the implementation block
-(FBComposerTaggedUsersBundle *)taggedUsers;
-(id)initWithAssetIDs:(id)arg1 taggedUsers:(id)arg2 ;
-(NSArray *)assetIDs;
@end

