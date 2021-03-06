/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedGraphQLConnectionControllerProtocol;
@class FBFeedStreamKey, FBMutableScenePathProvider;

@interface FBFeedControllerCheckout : NSObject {

	id<FBFeedGraphQLConnectionControllerProtocol> _feedGraphQLConnectionController;
	FBFeedStreamKey* _streamKey;
	FBMutableScenePathProvider* _scenePathProvider;

}

@property (nonatomic,readonly) id<FBFeedGraphQLConnectionControllerProtocol> feedGraphQLConnectionController;              //@synthesize feedGraphQLConnectionController=_feedGraphQLConnectionController - In the implementation block
@property (nonatomic,readonly) FBFeedStreamKey * streamKey;                                                                //@synthesize streamKey=_streamKey - In the implementation block
@property (nonatomic,readonly) FBMutableScenePathProvider * scenePathProvider;                                             //@synthesize scenePathProvider=_scenePathProvider - In the implementation block
-(FBMutableScenePathProvider *)scenePathProvider;
-(id<FBFeedGraphQLConnectionControllerProtocol>)feedGraphQLConnectionController;
-(FBFeedStreamKey *)streamKey;
-(id)initWithFeedGraphQLConnectionController:(id)arg1 scenePathProvider:(id)arg2 streamKey:(id)arg3 ;
@end

