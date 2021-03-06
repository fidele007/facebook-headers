/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMPConfigurableFilter.h>
#import <Facebook/FBMPFilterToVideoEditsFilterConfig.h>

@protocol FBMPConsumerPort;
@class FBMPVideoProcessorFilter, FBMPSessionContext, FBMPBaseConsumerPort, FBMPVideoEditsFilterConfig, FBFreehandDrawingContents, NSString;

@interface FBMPDrawingFilter : FBMPConfigurableFilter <FBMPFilterToVideoEditsFilterConfig> {

	FBMPVideoProcessorFilter* _processorFilter;
	FBMPSessionContext* _sessionContext;
	FBMPBaseConsumerPort* _gesturePort;
	id<FBMPConsumerPort> _commandPort;
	CGPoint _previousPoint;
	FBMPVideoEditsFilterConfig* _videoEditsFilterConfig;
	mutex _updateDrawingContentMutex;
	FBFreehandDrawingContents* _drawingContents;

}

@property (nonatomic,copy,readonly) FBFreehandDrawingContents * drawingContents;              //@synthesize drawingContents=_drawingContents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
-(FBFreehandDrawingContents *)drawingContents;
-(void)setBrushColor:(id)arg1 ;
-(double)_pointSize;
-(id)videoEditsFilterConfig;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)_registerForVideoProcessorFilterNotifications;
-(void)_handleConfig:(id)arg1 ;
-(void)_updateDrawingContents:(id)arg1 ;
-(id)_gestureToComand:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(GLKVector4)_color;
-(void)clear;
-(void)setBrushSize:(double)arg1 ;
-(void)_handleGesture:(id)arg1 ;
@end

