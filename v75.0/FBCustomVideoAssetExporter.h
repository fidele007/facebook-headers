/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoAssetTranscodingDelegate.h>
#import <Facebook/FBVideoAssetExporter.h>

@class NSURL, FBVideoExportConfig, FBVideoAssetTranscoding, NSString;

@interface FBCustomVideoAssetExporter : NSObject <FBVideoAssetTranscodingDelegate, FBVideoAssetExporter> {

	NSURL* _assetURL;
	NSURL* _outputURL;
	FBVideoExportConfig* _videoExportConfig;
	FBVideoAssetTranscoding* _videoAssetTranscoding;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB100 outputDuration; 
+(id)workQueue;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_FB100)outputDuration;
-(void)_exportWithVideoAssetTranscoding:(id)arg1 retryCount:(unsigned long long)arg2 ;
-(void)videoAssetTranscoding:(id)arg1 didUpdateProgress:(float)arg2 ;
-(id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 videoExportConfig:(id)arg3 timeRange:(SCD_Struct_FB101)arg4 ;
-(long long)estimatedOutputFileLength;
@end

