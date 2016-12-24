/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageDownloader.h>

@class FBMediaPickerDataSourceManager, NSMutableDictionary, FBWebImageMediaPickerSpecifier, NSString;

@interface FBWebImageMediaPickerDownloader : NSObject <FBWebImageDownloader> {

	FBMediaPickerDataSourceManager* _dataSourceManager;
	NSMutableDictionary* _loadInfoBySpecifier;
	FBWebImageMediaPickerSpecifier* _currentSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithMediaDataSourceManager:(id)arg1 ;
-(void)_loadSpecifier:(id)arg1 withAssetSize:(long long)arg2 downloadBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleThumbnailCompletion:(id)arg1 specifier:(id)arg2 assetSize:(long long)arg3 downloadBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)cancel;
@end

