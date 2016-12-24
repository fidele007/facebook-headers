/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSDictionary, FBVideoAsset, FBVideoAssetEdits;


@protocol FBVideoAttachmentProtocol <FBMediaAttachmentProtocol,NSCoding>
@property (nonatomic,retain) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSString * presetName; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB100 duration; 
@property (nonatomic,readonly) double bitrateKbps; 
@property (nonatomic,readonly) BOOL requiresProcessing; 
@property (assign,nonatomic) long long frameOffsetInMillisecond; 
@property (nonatomic,copy) NSDictionary * extraUploadParameters; 
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
@property (assign,nonatomic) unsigned long long indexHint; 
@property (nonatomic,readonly) FBVideoAsset * videoAsset; 
@property (nonatomic,readonly) FBMediaUploadQualityPolicy qualityPolicy; 
@property (nonatomic,readonly) BOOL isAnimatedGIF; 
@property (assign,nonatomic) BOOL notifyWhenProcessed; 
@property (nonatomic,copy,readonly) FBVideoAssetEdits * edits; 
@required
-(FBVideoAssetEdits *)edits;
-(void)setExtraUploadParameters:(id)arg1;
-(long long)frameOffsetInMillisecond;
-(void)setFrameOffsetInMillisecond:(long long)arg1;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB101)arg6;
-(void)removeTemporaryExportFile;
-(void)cancelExportVideoDataWithCompletionBlock:(/*^block*/id)arg1;
-(double)bitrateKbps;
-(BOOL)requiresProcessing;
-(NSDictionary *)extraUploadParameters;
-(unsigned long long)indexHint;
-(void)setIndexHint:(unsigned long long)arg1;
-(FBMediaUploadQualityPolicy)qualityPolicy;
-(BOOL)isAnimatedGIF;
-(BOOL)notifyWhenProcessed;
-(void)setNotifyWhenProcessed:(BOOL)arg1;
-(SCD_Struct_FB100)duration;
-(NSString *)dataSourceID;
-(NSString *)outputFileType;
-(long long)estimatedOutputFileLength;
-(NSString *)presetName;
-(void)setVideoURL:(id)arg1;
-(NSURL *)videoURL;
-(FBVideoAsset *)videoAsset;

@end

