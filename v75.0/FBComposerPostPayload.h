/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPostPromptPayload, FBComposerPostTypingPayload, FBComposerPostInspirationPromptPayload, FBComposerPostSocialRecommendationsPayload, NSDictionary, NSString;

@interface FBComposerPostPayload : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	BOOL _publishAsThrowbackPost;
	BOOL _forceReshareOfPost;
	BOOL _publishAsGroupMemberBioPost;
	BOOL _publishAsSocialRecommendationsPost;
	FBComposerPostPromptPayload* _promptPayload;
	FBComposerPostTypingPayload* _typingPayload;
	FBComposerPostInspirationPromptPayload* _inspirationPayload;
	FBComposerPostSocialRecommendationsPayload* _socialRecommendationsPayload;
	NSDictionary* _trackingInfo;

}

@property (nonatomic,copy,readonly) FBComposerPostPromptPayload * promptPayload;                                            //@synthesize promptPayload=_promptPayload - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostTypingPayload * typingPayload;                                            //@synthesize typingPayload=_typingPayload - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostInspirationPromptPayload * inspirationPayload;                            //@synthesize inspirationPayload=_inspirationPayload - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostSocialRecommendationsPayload * socialRecommendationsPayload;              //@synthesize socialRecommendationsPayload=_socialRecommendationsPayload - In the implementation block
@property (nonatomic,readonly) BOOL publishAsThrowbackPost;                                                                 //@synthesize publishAsThrowbackPost=_publishAsThrowbackPost - In the implementation block
@property (nonatomic,readonly) BOOL forceReshareOfPost;                                                                     //@synthesize forceReshareOfPost=_forceReshareOfPost - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * trackingInfo;                                                            //@synthesize trackingInfo=_trackingInfo - In the implementation block
@property (nonatomic,readonly) BOOL publishAsGroupMemberBioPost;                                                            //@synthesize publishAsGroupMemberBioPost=_publishAsGroupMemberBioPost - In the implementation block
@property (nonatomic,readonly) BOOL publishAsSocialRecommendationsPost;                                                     //@synthesize publishAsSocialRecommendationsPost=_publishAsSocialRecommendationsPost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPromptPayload:(id)arg1 typingPayload:(id)arg2 inspirationPayload:(id)arg3 socialRecommendationsPayload:(id)arg4 publishAsThrowbackPost:(BOOL)arg5 forceReshareOfPost:(BOOL)arg6 trackingInfo:(id)arg7 publishAsGroupMemberBioPost:(BOOL)arg8 publishAsSocialRecommendationsPost:(BOOL)arg9 ;
-(FBComposerPostPromptPayload *)promptPayload;
-(FBComposerPostTypingPayload *)typingPayload;
-(NSDictionary *)trackingInfo;
-(FBComposerPostInspirationPromptPayload *)inspirationPayload;
-(FBComposerPostSocialRecommendationsPayload *)socialRecommendationsPayload;
-(BOOL)publishAsThrowbackPost;
-(BOOL)forceReshareOfPost;
-(BOOL)publishAsGroupMemberBioPost;
-(BOOL)publishAsSocialRecommendationsPost;
-(id)shallowCopy;
@end

