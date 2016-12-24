/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchPivotsDownloaderDelegate;
@class FBUserSession, NSArray;

@interface FBSearchPivotsDownloader : NSObject {

	FBUserSession* _session;
	id _sourceID;
	NSArray* _pivots;
	id<FBSearchPivotsDownloaderDelegate> _delegate;
	unsigned long long _previewCount;
	unsigned long long _pivotType;
	unsigned long long _pivotCount;

}

@property (assign,nonatomic) unsigned long long pivotType;                                      //@synthesize pivotType=_pivotType - In the implementation block
@property (assign,nonatomic) unsigned long long pivotCount;                                     //@synthesize pivotCount=_pivotCount - In the implementation block
@property (assign,nonatomic) unsigned long long previewCount;                                   //@synthesize previewCount=_previewCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pivots;                                           //@synthesize pivots=_pivots - In the implementation block
@property (assign,nonatomic,__weak) id<FBSearchPivotsDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)pivotType;
-(void)setPivotType:(unsigned long long)arg1 ;
-(NSArray *)pivots;
-(id)initWithSession:(id)arg1 sourceID:(id)arg2 pivotType:(unsigned long long)arg3 pivotCount:(unsigned long long)arg4 previewCount:(unsigned long long)arg5 ;
-(unsigned long long)previewCount;
-(void)setPivotCount:(unsigned long long)arg1 ;
-(void)setPreviewCount:(unsigned long long)arg1 ;
-(BOOL)_shouldIncludePreview:(unsigned long long)arg1 ;
-(void)_downloadDidFinishWithResponse:(id)arg1 error:(id)arg2 ;
-(unsigned long long)pivotCount;
-(void)setDelegate:(id<FBSearchPivotsDownloaderDelegate>)arg1 ;
-(id<FBSearchPivotsDownloaderDelegate>)delegate;
-(void)load;
@end
