/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMPConfigurableFilter.h>
#import <Facebook/FBMPFilterToVideoEditsFilterConfig.h>

@protocol FBFilterAssetManaging, FBMPMSQRDFilterDelegate;
@class FBMPVideoProcessorFilter, FBMPVideoEditsFilterConfig, NSString;

@interface FBMPMSQRDFilter : FBMPConfigurableFilter <FBMPFilterToVideoEditsFilterConfig> {

	FBMPVideoProcessorFilter* _processorFilter;
	id<FBFilterAssetManaging> _assetManager;
	BOOL _prepared;
	BOOL _isStillImageState;
	FBMPVideoEditsFilterConfig* _videoEditsFilterConfig;
	id<FBMPMSQRDFilterDelegate> _delegate;

}

@property (__weak) id<FBMPMSQRDFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAssetManager:(id)arg1 config:(id)arg2 ;
-(id)videoEditsFilterConfig;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)_onNewData:(id)arg1 ;
-(void)_registerForVideoProcessorFilterNotifications;
-(void)_handleVideoProcessorFilterNotification:(id)arg1 ;
-(void)setDelegate:(id<FBMPMSQRDFilterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMPMSQRDFilterDelegate>)delegate;
@end

