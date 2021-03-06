/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAssetsLibraryListener.h>

@protocol OS_dispatch_group;
@class NSObject, NSString;

@interface FBComposerDraftRecoveryAssetLibraryLoader : NSObject <FBAssetsLibraryListener> {

	BOOL _isLoadingAssetLibrary;
	NSObject*<OS_dispatch_group> _assetLibraryLoadingGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetsLibraryDidLoadAssets;
-(void)_loadAssetLibrary;
-(void)loadAssetLibraryWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
@end

