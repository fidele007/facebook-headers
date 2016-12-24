/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTImageURLLoader.h>

@class RCTBridge, NSString;

@interface RCTPhotoLibraryImageLoader : NSObject <RCTImageURLLoader> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(BOOL)canLoadImageURL:(id)arg1 ;
-(/*^block*/id)loadImageForURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressHandler:(/*^block*/id)arg5 partialLoadHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(RCTBridge *)bridge;
@end

