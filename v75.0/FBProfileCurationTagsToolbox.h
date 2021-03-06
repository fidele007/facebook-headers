/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBProfileCurationTagsUpdateListenerAnnouncer, FBProfileCurationTagsEditTracker, FBProfileCurationTagsActionBarListenerAnnouncer, FBProfileCurationTagsActionBar, FBProfileCurationTagsTapListenerAnnouncer;

@interface FBProfileCurationTagsToolbox : NSObject {

	FBUserSession* _session;
	FBProfileCurationTagsUpdateListenerAnnouncer* _curationTagsStatusListenerAnnouncer;
	FBProfileCurationTagsEditTracker* _tagsEditTracker;
	FBProfileCurationTagsActionBarListenerAnnouncer* _curationTagsActionBarListenerAnnouncer;
	FBProfileCurationTagsActionBar* _curationTagsActioBar;
	FBProfileCurationTagsTapListenerAnnouncer* _tapListenerAnnouncer;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBProfileCurationTagsUpdateListenerAnnouncer * curationTagsStatusListenerAnnouncer;                    //@synthesize curationTagsStatusListenerAnnouncer=_curationTagsStatusListenerAnnouncer - In the implementation block
@property (nonatomic,readonly) FBProfileCurationTagsEditTracker * tagsEditTracker;                                                    //@synthesize tagsEditTracker=_tagsEditTracker - In the implementation block
@property (nonatomic,readonly) FBProfileCurationTagsActionBarListenerAnnouncer * curationTagsActionBarListenerAnnouncer;              //@synthesize curationTagsActionBarListenerAnnouncer=_curationTagsActionBarListenerAnnouncer - In the implementation block
@property (nonatomic,__weak,readonly) FBProfileCurationTagsActionBar * curationTagsActioBar;                                          //@synthesize curationTagsActioBar=_curationTagsActioBar - In the implementation block
@property (nonatomic,readonly) FBProfileCurationTagsTapListenerAnnouncer * tapListenerAnnouncer;                                      //@synthesize tapListenerAnnouncer=_tapListenerAnnouncer - In the implementation block
-(id)initWithSession:(id)arg1 curationTagsStatusListenerAnnouncer:(id)arg2 tagsEditTracker:(id)arg3 curationTagsActionBarListenerAnnouncer:(id)arg4 curationTagsActioBar:(id)arg5 tapListenerAnnouncer:(id)arg6 ;
-(FBProfileCurationTagsEditTracker *)tagsEditTracker;
-(FBProfileCurationTagsUpdateListenerAnnouncer *)curationTagsStatusListenerAnnouncer;
-(FBProfileCurationTagsTapListenerAnnouncer *)tapListenerAnnouncer;
-(FBProfileCurationTagsActionBarListenerAnnouncer *)curationTagsActionBarListenerAnnouncer;
-(FBProfileCurationTagsActionBar *)curationTagsActioBar;
-(FBUserSession *)session;
@end

