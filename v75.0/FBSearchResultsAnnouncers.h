/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSearchResultsActivityListenerAnnouncer, FBSearchResultsLogEventListenerAnnouncer, FBSerpTTILogEventListenerAnnouncer, FBSearchResultsMultiTabNavigationListenerAnnouncer;

@interface FBSearchResultsAnnouncers : NSObject {

	FBSearchResultsActivityListenerAnnouncer* _activityAnnouncer;
	FBSearchResultsLogEventListenerAnnouncer* _logEventAnnouncer;
	FBSerpTTILogEventListenerAnnouncer* _ttiLogEventAnnouncer;
	FBSearchResultsMultiTabNavigationListenerAnnouncer* _multiTabNavigationAnnouncer;

}

@property (nonatomic,readonly) FBSearchResultsActivityListenerAnnouncer * activityAnnouncer;                                  //@synthesize activityAnnouncer=_activityAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSearchResultsLogEventListenerAnnouncer * logEventAnnouncer;                                  //@synthesize logEventAnnouncer=_logEventAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSerpTTILogEventListenerAnnouncer * ttiLogEventAnnouncer;                                     //@synthesize ttiLogEventAnnouncer=_ttiLogEventAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSearchResultsMultiTabNavigationListenerAnnouncer * multiTabNavigationAnnouncer;              //@synthesize multiTabNavigationAnnouncer=_multiTabNavigationAnnouncer - In the implementation block
-(FBSearchResultsMultiTabNavigationListenerAnnouncer *)multiTabNavigationAnnouncer;
-(FBSerpTTILogEventListenerAnnouncer *)ttiLogEventAnnouncer;
-(FBSearchResultsLogEventListenerAnnouncer *)logEventAnnouncer;
-(FBSearchResultsActivityListenerAnnouncer *)activityAnnouncer;
-(id)initWithActivityAnnouncer:(id)arg1 logEventAnnouncer:(id)arg2 ttiLogEventAnnouncer:(id)arg3 multiTabNavigationAnnouncer:(id)arg4 ;
@end

