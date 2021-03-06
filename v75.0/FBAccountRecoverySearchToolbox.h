/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAccountRecoverySearchFetchStatusListener;
@class FBAccountRecoverySearchController, FBAccountRecoverySearchViewControllerListenerAnnouncer, FBAccountRecoverySearchComponentListenerAnnouncer;

@interface FBAccountRecoverySearchToolbox : NSObject {

	FBAccountRecoverySearchController* _searchController;
	id<FBAccountRecoverySearchFetchStatusListener> _fetchStatusListener;
	FBAccountRecoverySearchViewControllerListenerAnnouncer* _searchViewControllerAnnouncer;
	FBAccountRecoverySearchComponentListenerAnnouncer* _searchComponentAnnouncer;

}

@property (nonatomic,readonly) FBAccountRecoverySearchController * searchController;                                                //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) id<FBAccountRecoverySearchFetchStatusListener> fetchStatusListener;                                  //@synthesize fetchStatusListener=_fetchStatusListener - In the implementation block
@property (nonatomic,readonly) FBAccountRecoverySearchViewControllerListenerAnnouncer * searchViewControllerAnnouncer;              //@synthesize searchViewControllerAnnouncer=_searchViewControllerAnnouncer - In the implementation block
@property (nonatomic,readonly) FBAccountRecoverySearchComponentListenerAnnouncer * searchComponentAnnouncer;                        //@synthesize searchComponentAnnouncer=_searchComponentAnnouncer - In the implementation block
-(id<FBAccountRecoverySearchFetchStatusListener>)fetchStatusListener;
-(FBAccountRecoverySearchViewControllerListenerAnnouncer *)searchViewControllerAnnouncer;
-(id)initWithSearchController:(id)arg1 fetchStatusListener:(id)arg2 searchViewControllerAnnouncer:(id)arg3 searchComponentAnnouncer:(id)arg4 ;
-(FBAccountRecoverySearchComponentListenerAnnouncer *)searchComponentAnnouncer;
-(FBAccountRecoverySearchController *)searchController;
@end

