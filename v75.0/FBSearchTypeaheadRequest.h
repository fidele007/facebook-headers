/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class FBSearchStructuredText, FBUserSession, NSString, NSObject;

@interface FBSearchTypeaheadRequest : FBNetworkerRequest {

	FBSearchStructuredText* _query;
	unsigned long long _maxNumResults;
	FBUserSession* _session;
	NSString* _typeaheadSessionID;
	NSString* _keywordMode;
	NSString* _rankingExperimentName;
	NSObject* _userInfo;

}

@property (nonatomic,readonly) FBSearchStructuredText * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumResults;                   //@synthesize maxNumResults=_maxNumResults - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;                 //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * keywordMode;                        //@synthesize keywordMode=_keywordMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * rankingExperimentName;              //@synthesize rankingExperimentName=_rankingExperimentName - In the implementation block
@property (nonatomic,readonly) NSObject * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
+(unsigned long long)deviceSpecificPhotoSize;
-(id)networkRequest;
-(NSString *)typeaheadSessionID;
-(id)initWithQuery:(id)arg1 maxNumResults:(unsigned long long)arg2 session:(id)arg3 typeaheadSessionID:(id)arg4 keywordMode:(id)arg5 userInfo:(id)arg6 callbackPerformer:(id)arg7 rankingExperimentName:(id)arg8 ;
-(NSString *)keywordMode;
-(id)_formatQuery:(id)arg1 ;
-(unsigned long long)maxNumResults;
-(NSString *)rankingExperimentName;
-(FBSearchStructuredText *)query;
-(NSObject *)userInfo;
-(FBUserSession *)session;
@end

