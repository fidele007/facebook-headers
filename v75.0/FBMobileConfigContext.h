/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMobileConfigContext <NSObject>
@required
-(void)shadowBool:(unsigned long long)arg1 withValue:(BOOL)arg2;
-(BOOL)getBool:(unsigned long long)arg1;
-(void)logExposureForConfigParameter:(unsigned long long)arg1;
-(void)shadowInt64:(unsigned long long)arg1 withValue:(long long)arg2;
-(long long)getInt64:(unsigned long long)arg1;
-(void)shadowDouble:(unsigned long long)arg1 withValue:(double)arg2;
-(double)getDouble:(unsigned long long)arg1;
-(void)shadowString:(unsigned long long)arg1 withValue:(id)arg2;
-(BOOL)getBool:(unsigned long long)arg1 withDefault:(BOOL)arg2;
-(long long)getInt64:(unsigned long long)arg1 withDefault:(long long)arg2;
-(id)getString:(unsigned long long)arg1 withDefault:(id)arg2;
-(double)getDouble:(unsigned long long)arg1 withDefault:(double)arg2;
-(void)logExposureForConfigParameter:(unsigned long long)arg1 withExposureType:(id)arg2;
-(void)logConfigsIfNeeded;
-(id)getString:(unsigned long long)arg1;

@end

