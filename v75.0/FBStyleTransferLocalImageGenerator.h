/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBStyleTransferImageGenerator.h>

@class NSString;

@interface FBStyleTransferLocalImageGenerator : NSObject <FBStyleTransferImageGenerator> {

	Caffe2IOSVirtualPredictor* _virtualCaffe2Predictor;
	vector<unsigned char, std::__1::allocator<unsigned char> > _scaledBufferStorage;
	vector<unsigned char, std::__1::allocator<unsigned char> > _inputStorage;
	long long _pixelProcessingLimit;
	StyleTransferCachedBufferSizes _cachedScaledBufferSizes;
	NSString* _styleName;

}

@property (nonatomic,copy,readonly) NSString * styleName;              //@synthesize styleName=_styleName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateStylizedImageWithInputData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithStyleName:(id)arg1 modelUrl:(id)arg2 modelWeightsUrl:(id)arg3 pixelProcessingLimit:(long long)arg4 predictorProvider:(Class)arg5 ;
-(CVBufferRef)generateStylizedImageWithBuffer:(CVBufferRef)arg1 ;
-(StyleTransferBufferSize)_scaledBufferSizeWithInputBufferWidth:(int)arg1 inputBufferHeight:(int)arg2 ;
-(void)dealloc;
-(NSString *)styleName;
@end

