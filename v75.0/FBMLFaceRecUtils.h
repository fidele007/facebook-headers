/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBMLFaceRecUtils : NSObject
+(double)_targetSizeForFacerecImageFromFacebox:(CGRect)arg1 originalImageSize:(CGSize)arg2 desiredSize:(double)arg3 ;
+(id)_faceCropForImage:(id)arg1 forFacebox:(CGRect)arg2 enlargeFactor:(double)arg3 compressionQuality:(double)arg4 ;
+(void)_newRecognizeDataByFaceID:(id)arg1 networkDispatcher:(id)arg2 performer:(id)arg3 callback:(/*^block*/id)arg4 ;
+(unsigned long long)_faceCropDataSizeForDataByFaceID:(id)arg1 ;
+(void)processAssetIdentifier:(id)arg1 boxedFaceboxes:(id)arg2 enlargeFactor:(double)arg3 targetFaceCropSize:(double)arg4 compressionQuality:(double)arg5 deviceAssetsLibrary:(id)arg6 networkDispatcher:(id)arg7 performer:(id)arg8 callback:(/*^block*/id)arg9 ;
@end

