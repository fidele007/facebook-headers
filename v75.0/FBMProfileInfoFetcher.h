/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMProfileInfoFetcherDelegate;
@class FBUserSession;

@interface FBMProfileInfoFetcher : NSObject {

	FBUserSession* _userSession;
	id<FBMProfileInfoFetcherDelegate> _delegate;

}
-(void)_handleDownloadedResponse:(id)arg1 error:(id)arg2 ;
-(void)_profilePictureUpdated:(id)arg1 ;
-(void)_didFinishDownloadImageWithResponse:(id)arg1 profileItem:(id)arg2 ;
-(void)_personObjectUpdated:(id)arg1 ;
-(void)_startDownloadProfilePictureWithURL:(id)arg1 profileItem:(id)arg2 ;
-(id)initWithSession:(id)arg1 withDelegate:(id)arg2 ;
-(void)loadProfileInfo;
@end

