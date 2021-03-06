/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet, EAGLContext, FBStorylineRendererTextureLoader, FBStorylineRendererProgramManager, RCTSGView;

@interface FBStorylineRendererViewManager : NSObject {

	NSMutableDictionary* _viewCache;
	NSMutableOrderedSet* _lastViewGraphIds;
	EAGLContext* _context;
	NSMutableDictionary* _videoTimingInfo;
	BOOL _enabledVideoInVideo;
	double _fps;
	FBStorylineRendererTextureLoader* _textureLoader;
	FBStorylineRendererProgramManager* _programManager;
	BOOL _seeking;
	RCTSGView* _rootView;

}

@property (nonatomic,retain) RCTSGView * rootView;              //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) BOOL seeking;                      //@synthesize seeking=_seeking - In the implementation block
-(void)updateFrameInfo:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(void)setupWithContext:(id)arg1 textureloader:(id)arg2 programManager:(id)arg3 assetsMetaData:(id)arg4 moodAssets:(id)arg5 enabledVideoInVideo:(BOOL)arg6 fps:(unsigned long long)arg7 ;
-(id)_parseFrame:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(void)_parseFrameElement:(id)arg1 parentView:(id)arg2 thisGraphNodeId:(id)arg3 frameIndex:(unsigned long long)arg4 ;
-(void)_tearDownUnsedView:(id)arg1 ;
-(id)_parseProps:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(id)_updateShader:(id)arg1 ;
-(id)_updateTexture:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(RCTSGView *)rootView;
-(void)setRootView:(RCTSGView *)arg1 ;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)seeking;
-(void)tearDown;
@end

