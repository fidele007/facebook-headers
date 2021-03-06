/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString, FBUserSession, NSArray;

@interface FBTwitterShareRequest : FBNetworkerRequest {

	NSString* _viewerID;
	NSString* _text;
	NSString* _storyGraphQLID;
	FBUserSession* _session;
	NSArray* _photoIDs;

}
-(id)networkRequest;
-(id)initWithViewerID:(id)arg1 text:(id)arg2 storyGraphQLID:(id)arg3 attachmentIDs:(id)arg4 callbackPerformer:(id)arg5 session:(id)arg6 ;
@end

