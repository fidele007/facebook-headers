/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSimpleMediaViewProviderDelegate.h>
#import <Facebook/FBDisplayableMediaViewProvider.h>

@protocol FBSimpleMediaViewProviderDelegate;
@class FBMemPhoto, FBDisplayableMediaViewProviderInfo, NSString;

@interface FBSimpleMediaViewProvider : NSObject <FBSimpleMediaViewProviderDelegate, FBDisplayableMediaViewProvider> {

	id _layerOrView;
	FBMemPhoto* _photo;
	id<FBSimpleMediaViewProviderDelegate> _delegate;
	unsigned long long _layerOrViewPosition;
	FBDisplayableMediaViewProviderInfo* _info;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)simpleMediaViewProvider:(id)arg1 viewOrLayerForMedia:(id)arg2 ;
-(id)initWithLayerOrView:(id)arg1 media:(id)arg2 ;
-(id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2 ;
-(void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)willFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
@end

