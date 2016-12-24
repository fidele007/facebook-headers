/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBSearchResultsFiltersActionSheetListenerAnnouncer, FBScenePath;

@interface FBSearchResultsFiltersActionSheetToolbox : NSObject {

	FBUserSession* _session;
	FBSearchResultsFiltersActionSheetListenerAnnouncer* _announcer;
	/*^block*/id _filterGroupSelectedBlock;
	/*^block*/id _filterValueSelectedBlock;
	/*^block*/id _filterCustomValueBlock;
	FBScenePath* _scenePath;

}

@property (nonatomic,readonly) FBUserSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBSearchResultsFiltersActionSheetListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,copy,readonly) id filterGroupSelectedBlock;                                            //@synthesize filterGroupSelectedBlock=_filterGroupSelectedBlock - In the implementation block
@property (nonatomic,copy,readonly) id filterValueSelectedBlock;                                            //@synthesize filterValueSelectedBlock=_filterValueSelectedBlock - In the implementation block
@property (nonatomic,copy,readonly) id filterCustomValueBlock;                                              //@synthesize filterCustomValueBlock=_filterCustomValueBlock - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                     //@synthesize scenePath=_scenePath - In the implementation block
-(FBScenePath *)scenePath;
-(FBSearchResultsFiltersActionSheetListenerAnnouncer *)announcer;
-(id)initWithSession:(id)arg1 announcer:(id)arg2 filterGroupSelectedBlock:(/*^block*/id)arg3 filterValueSelectedBlock:(/*^block*/id)arg4 filterCustomValueBlock:(/*^block*/id)arg5 scenePath:(id)arg6 ;
-(id)filterCustomValueBlock;
-(id)filterGroupSelectedBlock;
-(id)filterValueSelectedBlock;
-(FBUserSession *)session;
@end

