/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DecoderDelegate <NSObject>
@optional
-(void)decoder:(id)arg1 willDecodeImage:(id)arg2 usingSubset:(id)arg3;
-(void)decoder:(id)arg1 didDecodeImage:(id)arg2 usingSubset:(id)arg3 withResult:(id)arg4;
-(void)decoder:(id)arg1 failedToDecodeImage:(id)arg2 usingSubset:(id)arg3 reason:(id)arg4;
-(void)decoder:(id)arg1 foundPossibleResultPoint:(CGPoint)arg2;

@end
