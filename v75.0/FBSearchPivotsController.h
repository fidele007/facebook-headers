/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchPivotsDownloaderDelegate.h>

@protocol FBSearchPivotsControllerDelegate;
@class FBSearchPivotsDownloader, NSArray, NSString;

@interface FBSearchPivotsController : NSObject <FBSearchPivotsDownloaderDelegate> {

	FBSearchPivotsDownloader* _downloader;
	NSArray* _pivots;
	id<FBSearchPivotsControllerDelegate> _delegate;
	unsigned long long _state;
	unsigned long long _requiredPivotCount;

}

@property (copy,readonly) NSArray * pivots;                                                     //@synthesize pivots=_pivots - In the implementation block
@property (assign,nonatomic,__weak) id<FBSearchPivotsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long requiredPivotCount;                             //@synthesize requiredPivotCount=_requiredPivotCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloader:(id)arg1 didFailWithError:(id)arg2 ;
-(long long)indexOfPivotQuery:(id)arg1 ;
-(NSArray *)pivots;
-(id)initWithSession:(id)arg1 context:(id)arg2 source:(id)arg3 pivotType:(unsigned long long)arg4 pivotCount:(unsigned long long)arg5 previewCount:(unsigned long long)arg6 ;
-(void)downloaderDidUpdatePivots:(id)arg1 ;
-(unsigned long long)requiredPivotCount;
-(void)setRequiredPivotCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBSearchPivotsControllerDelegate>)arg1 ;
-(id<FBSearchPivotsControllerDelegate>)delegate;
-(unsigned long long)state;
-(void)load;
@end

