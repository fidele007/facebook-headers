/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBRCTVideoReader, NSString, CIContext, EAGLContext;

@interface FBStorylineVideoTextureLoader : NSObject {

	FBRCTVideoReader* _reader;
	NSString* _playingVideoURL;
	NSString* _renderingVideoURL;
	opaqueCMSampleBufferRef _lastBuffer;
	CIContext* _ciContext;
	unsigned _framebuffer;
	unsigned _textureId;
	CGAffineTransform _videoPrefferedTransform;
	CGRect _videoRect;
	EAGLContext* _context;
	double _currentTime;

}

@property (nonatomic,retain) EAGLContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double currentTime;                 //@synthesize currentTime=_currentTime - In the implementation block
-(id)initWithURL:(id)arg1 startTime:(double)arg2 outputSize:(CGSize)arg3 context:(id)arg4 ;
-(void)readerSeekToTime:(double)arg1 ;
-(id)loadNextTextureAtTime:(double)arg1 ;
-(id)loadCurrentTexture;
-(void)_cleanUpTexture;
-(void)_releaseLastBuffer;
-(id)_createGLObjectFromCVImageBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(EAGLContext *)context;
-(void)setContext:(EAGLContext *)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
@end

