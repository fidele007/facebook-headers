/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBImageStreamingService <NSObject>
@required
-(id)streamImageWithURL:(id)arg1 desiredImageFlag:(unsigned long long)arg2 imageFlagsToBeNotified:(unsigned long long)arg3 scenePath:(id)arg4 priority:(long long)arg5 analyticsTags:(id)arg6 options:(unsigned long long)arg7 queue:(id)arg8 streamingBlock:(/*^block*/id)arg9;
-(void)cancelStreamingForToken:(id)arg1;
-(void)clearAllImageCache:(/*^block*/id)arg1;

@end
