/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBPageSession : NSObject {

	BOOL _isPMA_DO_NOT_USE_UNLESS_YOU_TALK_TO_PAGES_IOS;
	FBUserSession* _userSession;
	NSString* _analyticsUUID;
	NSString* _actionSource;
	NSString* _contextItemSourceID;
	NSString* _initialTabName;

}

@property (nonatomic,readonly) FBUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsUUID;                                   //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,readonly) NSString * actionSource;                                         //@synthesize actionSource=_actionSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextItemSourceID;                             //@synthesize contextItemSourceID=_contextItemSourceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialTabName;                                  //@synthesize initialTabName=_initialTabName - In the implementation block
@property (nonatomic,readonly) BOOL isPMA_DO_NOT_USE_UNLESS_YOU_TALK_TO_PAGES_IOS;              //@synthesize isPMA_DO_NOT_USE_UNLESS_YOU_TALK_TO_PAGES_IOS=_isPMA_DO_NOT_USE_UNLESS_YOU_TALK_TO_PAGES_IOS - In the implementation block
-(NSString *)analyticsUUID;
-(id)initWithUserSession:(id)arg1 analyticsUUID:(id)arg2 actionSource:(id)arg3 contextItemSourceID:(id)arg4 initialTabName:(id)arg5 isPMA:(BOOL)arg6 ;
-(NSString *)actionSource;
-(NSString *)contextItemSourceID;
-(BOOL)isPMA_DO_NOT_USE_UNLESS_YOU_TALK_TO_PAGES_IOS;
-(NSString *)initialTabName;
-(id)init;
-(FBUserSession *)userSession;
@end

