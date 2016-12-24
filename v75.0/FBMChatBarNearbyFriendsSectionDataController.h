/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBLocationManager, NSArray;

@interface FBMChatBarNearbyFriendsSectionDataController : NSObject {

	FBUserSession* _session;
	FBLocationManager* _locationManager;
	NSArray* _nearbyFriendsList;

}

@property (nonatomic,readonly) BOOL isNearbySectionNonEmpty; 
@property (nonatomic,readonly) BOOL isNearbySectionEnabled; 
@property (nonatomic,copy,readonly) NSArray * nearbyFriendsList;              //@synthesize nearbyFriendsList=_nearbyFriendsList - In the implementation block
-(void)loadDataWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_handleResponse:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)_handleLoadDataError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(BOOL)isNearbySectionEnabled;
-(BOOL)isNearbySectionNonEmpty;
-(void)updateNearbyFriendsListWithSyncPerson:(id)arg1 ;
-(NSArray *)nearbyFriendsList;
-(id)initWithSession:(id)arg1 ;
@end

