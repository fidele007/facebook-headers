/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCaffe2PredictorProvider.h>

@class NSString;

@interface FBCaffe2PredictorStaticProvider : NSObject <FBCaffe2PredictorProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Caffe2IOSVirtualPredictor*)getPredictorWithStyleName:(id)arg1 modelUrl:(id)arg2 modelWeightsUrl:(id)arg3 ;
@end

