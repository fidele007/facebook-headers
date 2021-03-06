/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionRequestSupportedStylesProtocol;
@class FBUserSession, FBGraphQLConnectionControllerConfiguration, FBScenePath, FBReactionSessionInfo;

@interface FBVideoHomeGuideGQLCCFactory : NSObject {

	FBUserSession* _session;
	FBGraphQLConnectionControllerConfiguration* _reactionConfiguration;
	id<FBReactionRequestSupportedStylesProtocol> _supportedStyles;
	FBScenePath* _scenePath;
	FBReactionSessionInfo* _reactionSessionInfo;

}

@property (nonatomic,copy) FBScenePath * scenePath;                                      //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBReactionSessionInfo * reactionSessionInfo;              //@synthesize reactionSessionInfo=_reactionSessionInfo - In the implementation block
-(FBScenePath *)scenePath;
-(id)graphQLConnectionControllerUserInfoWithRequestType:(id)arg1 ;
-(FBReactionSessionInfo *)reactionSessionInfo;
-(id)createGraphQLConnectionController;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 reactionSessionInfo:(id)arg3 supportedStyles:(id)arg4 ;
-(void)setScenePath:(FBScenePath *)arg1 ;
@end

