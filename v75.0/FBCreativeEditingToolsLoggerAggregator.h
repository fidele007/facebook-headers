/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCreativeEditingToolsLoggerAggregatorDelegate.h>

@class FBAnalytics, NSString, NSMutableDictionary;

@interface FBCreativeEditingToolsLoggerAggregator : NSObject <FBCreativeEditingToolsLoggerAggregatorDelegate> {

	FBAnalytics* _analytics;
	NSString* _collagePhotoAssetID;
	NSString* _compositionID;
	unsigned long long _source;
	NSMutableDictionary* _assetIDsToLogs;

}

@property (nonatomic,readonly) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCompositionID:(id)arg1 source:(unsigned long long)arg2 ;
-(id)_logForAssetID:(id)arg1 ;
-(void)creativeTool:(unsigned long long)arg1 submitData:(id)arg2 withAssetID:(id)arg3 ;
-(void)logEventsWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(void)didAddCollagePhotoWithAssetID:(id)arg1 ;
-(unsigned long long)source;
@end

