/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBOnlineFriendsSearchDelegate.h>
#import <Facebook/MNOnlineStatusListener.h>

@class FBOnlineFriendsSearch, NSString;

@interface FBMessengerActiveNowFeedUnitComponentController : CKComponentController <FBOnlineFriendsSearchDelegate, MNOnlineStatusListener> {

	FBOnlineFriendsSearch* _onlineFriendsSearch;
	double _lastFetchedTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)didUnmount;
-(void)didUpdateComponent;
-(void)willMount;
-(void)didFinishOnlineFriendsSearch;
-(void)changedOnlineStatus:(BOOL)arg1 ;
@end

