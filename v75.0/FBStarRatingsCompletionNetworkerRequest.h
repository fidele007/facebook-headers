/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class FBStarRatingsUserData;

@interface FBStarRatingsCompletionNetworkerRequest : FBNetworkerRequest {

	FBStarRatingsUserData* _userData;

}

@property (nonatomic,readonly) FBStarRatingsUserData * userData;              //@synthesize userData=_userData - In the implementation block
-(id)networkRequest;
-(id)_stringForCompletionState:(unsigned long long)arg1 ;
-(id)initiationModeAsString;
-(id)initWithCallbackPerformer:(id)arg1 userData:(id)arg2 ;
-(id)dictionaryRepresentation;
-(FBStarRatingsUserData *)userData;
@end

