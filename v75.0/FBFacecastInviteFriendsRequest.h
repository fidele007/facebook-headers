/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString, NSArray;

@interface FBFacecastInviteFriendsRequest : FBNetworkerRequest {

	NSString* _videoID;
	NSArray* _recipientIDs;

}
+(void)sendRequestWithVideoID:(id)arg1 recipientIDs:(id)arg2 session:(id)arg3 ;
-(id)networkRequest;
-(id)initWithVideoID:(id)arg1 recipientIDs:(id)arg2 ;
@end

