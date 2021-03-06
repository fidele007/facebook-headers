/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCaptureCoordinatorSubclassProtocol.h>

@protocol FBCCLogger, FBCaptureCoordinatorFilterFactoryProtocol, OS_dispatch_queue;
@class NSArray, FBMPRenderer, FBMPPhotoCapturer, FBMPSession, NSString, FBTimer, NSMutableArray, FBMPGestureInput, FBCaptureCoordinatorFilter, NSOperationQueue, NSObject;

@interface FBCaptureCoordinatorBase : NSObject <FBCaptureCoordinatorSubclassProtocol> {

	FBTimer* _performanceTimer;
	id<FBCCLogger> _logger;
	NSMutableArray* _currentFilters;
	FBMPGestureInput* _previewPanGestureInput;
	FBMPGestureInput* _previewTapGestureInput;
	id<FBCaptureCoordinatorFilterFactoryProtocol> _filterFactory;
	FBCaptureCoordinatorFilter* _defaultFilter;
	NSOperationQueue* _filterUpdateQueue;
	FBMPPhotoCapturer* _photoCapturer;
	FBMPRenderer* _filterRenderer;
	FBMPSession* _mediaSession;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSString* _sessionID;
	unsigned long long _photoUniqueId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * currentFilters; 
@property (nonatomic,readonly) FBMPRenderer * filterRenderer;                          //@synthesize filterRenderer=_filterRenderer - In the implementation block
@property (nonatomic,readonly) FBMPPhotoCapturer * photoCapturer; 
@property (nonatomic,readonly) FBMPSession * mediaSession;                             //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionQueue;              //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned long long photoUniqueId;                       //@synthesize photoUniqueId=_photoUniqueId - In the implementation block
-(NSArray *)currentFilters;
-(void)startSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)stopSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)addFilterWithName:(id)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceFilterWithName:(id)arg1 config:(id)arg2 filterToBeReplaced:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFilterWithName:(id)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logFilterPerformanceOnEventNamed:(id)arg1 extras:(id)arg2 ;
-(id)initWithFilterFactory:(id)arg1 logger:(id)arg2 ;
-(FBMPSession *)mediaSession;
-(id)firstFilter;
-(FBMPRenderer *)filterRenderer;
-(void)setFramerateCap:(long long)arg1 ;
-(unsigned long long)photoUniqueId;
-(FBMPPhotoCapturer *)photoCapturer;
-(void)filterTopologyDidChange;
-(void)logCurrentFilterPerformanceWithReason:(id)arg1 parameters:(id)arg2 ;
-(void)_stopPerformanceTimer;
-(void)_setFilterWithName:(id)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_didReplaceFilter:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addFilterWithName:(id)arg1 config:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isOnlyIdentityFilterActive;
-(void)_didReplaceFilters:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertFilterWithName:(id)arg1 config:(id)arg2 atIndex:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_removeFilter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeAllFiltersWithCompletion:(/*^block*/id)arg1 ;
-(void)_didRemoveFilters:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_replaceFilterWithName:(id)arg1 config:(id)arg2 filterToBeReplaced:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didReplaceFilters:(id)arg1 ;
-(void)_setupExtraConsumerPortsForFilter:(id)arg1 ;
-(void)_startPerformanceTimer;
-(void)_didCompleteFetchingPerformanceForFilters:(id)arg1 perfMap:(NSMapTable*)arg2 reason:(id)arg3 parameters:(id)arg4 ;
-(id)_previewPanGestureInput;
-(id)_previewTapGestureInput;
-(id)_setupTapGestureRecognizerOnPreview;
-(id)_setupPanGestureRecognizerOnPreview;
-(id)lastFilter;
-(void)insertFilterWithName:(id)arg1 config:(id)arg2 afterFilter:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)insertFilterWithName:(id)arg1 config:(id)arg2 beforeFilter:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeFilter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllFiltersWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSString *)sessionID;
-(NSObject*<OS_dispatch_queue>)sessionQueue;
-(id)preview;
@end

