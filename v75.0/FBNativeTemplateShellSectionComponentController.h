/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBNativeTemplateDataFetcherListener.h>

@class FBNativeTemplateDataFetcher;

@interface FBNativeTemplateShellSectionComponentController : FBSectionComponentController <FBNativeTemplateDataFetcherListener> {

	FBNativeTemplateDataFetcher* _dataFetcher;
	unsigned long long _ptrCount;

}
-(id)myToolbox;
-(void)didPullToRefresh;
-(void)nativeTemplateDataFetcher:(id)arg1 didFetchVCConfig:(id)arg2 forSource:(unsigned long long*)arg3 ;
-(void)didLoad;
@end

