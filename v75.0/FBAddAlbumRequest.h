/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBAddAlbumRequest : FBNetworkerRequest {

	NSString* _name;
	NSString* _description;
	NSString* _placeTargetID;
	NSString* _privacyJSON;
	NSString* _targetFBID;

}
-(id)networkRequest;
-(id)initWithName:(id)arg1 description:(id)arg2 place:(id)arg3 privacy:(id)arg4 callbackPerformer:(id)arg5 ;
-(void)setTargetFBID:(id)arg1 actorFBID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

