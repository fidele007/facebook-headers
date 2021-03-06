/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFriendsCountFetchingControllerDelegate, FBServiceTransactionMutating;
@class FBUserSession;

@interface FBFriendsCountFetchingController : NSObject {

	FBUserSession* _session;
	id<FBFriendsCountFetchingControllerDelegate> _delegate;
	unsigned long long _state;
	unsigned long long _numFriends;
	id<FBServiceTransactionMutating> _token;

}
-(void)_checkNumberOfFriends;
-(id)initWithSession:(id)arg1 andDelegate:(id)arg2 ;
-(id)init;
-(void)_handleError:(id)arg1 ;
-(void)fetch;
-(void)_handleResponse:(id)arg1 ;
@end

