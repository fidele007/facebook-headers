/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoAssetExporter.h>

@protocol FBVideoAssetExporter, FBErrorSimulationProtocol;
@class NSURL, NSString;

@interface FBVideoAssetExporterWrapper : NSObject <FBVideoAssetExporter> {

	id<FBVideoAssetExporter> _videoAssetExporter;
	NSURL* _outputURL;
	NSURL* _assetURL;
	id<FBErrorSimulationProtocol> _errorSimulation;
	SCD_Struct_FB829 _config;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB100 outputDuration; 
-(id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 config:(SCD_Struct_FB830)arg3 errorSimulation:(id)arg4 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 segmentCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_FB100)outputDuration;
-(id)_newVideoAssetExporter;
-(void)cleanUp;
-(long long)estimatedOutputFileLength;
@end

