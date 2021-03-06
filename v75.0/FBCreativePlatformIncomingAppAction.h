/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBCreativePlatformIncomingAppAction : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _openComposerFromAppAction_appID;
	NSString* _openComposerFromAppAction_compositionID;
	NSString* _openComposerFromAppAction_sourceApplication;
	NSString* _openComposerFromAppAction_attachmentTypeString;
	NSString* _openComposerFromAppAction_localAttachmentID;
	NSString* _openCommentFromAppAction_appID;
	NSString* _openCommentFromAppAction_commentThreadID;
	NSString* _openCommentFromAppAction_sourceApplication;
	NSString* _openCommentFromAppAction_attachmentTypeString;
	NSString* _openCommentFromAppAction_localAttachmentID;
	NSString* _openProfileMediaUploadFromAppAction_appID;
	NSString* _openProfileMediaUploadFromAppAction_sourceApplication;
	NSString* _openProfileMediaUploadFromAppAction_attachmentTypeString;
	NSString* _openProfileMediaUploadFromAppAction_localAttachmentID;
	NSString* _openProfileMediaUploadFromAppAction_attachmentHash;
	NSDictionary* _openProfileMediaUploadFromAppAction_metadata;
	NSString* _noActionFromAppAction_appID;

}
+(id)noActionFromAppActionWithAppID:(id)arg1 ;
+(id)openCommentFromAppActionWithAppID:(id)arg1 commentThreadID:(id)arg2 sourceApplication:(id)arg3 attachmentTypeString:(id)arg4 localAttachmentID:(id)arg5 ;
+(id)openComposerFromAppActionWithAppID:(id)arg1 compositionID:(id)arg2 sourceApplication:(id)arg3 attachmentTypeString:(id)arg4 localAttachmentID:(id)arg5 ;
+(id)openProfileMediaUploadFromAppActionWithAppID:(id)arg1 sourceApplication:(id)arg2 attachmentTypeString:(id)arg3 localAttachmentID:(id)arg4 attachmentHash:(id)arg5 metadata:(id)arg6 ;
-(void)matchOpenComposerFromAppAction:(/*^block*/id)arg1 openCommentFromAppAction:(/*^block*/id)arg2 openProfileMediaUploadFromAppAction:(/*^block*/id)arg3 noActionFromAppAction:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

