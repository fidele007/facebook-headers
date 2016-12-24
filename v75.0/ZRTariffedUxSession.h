/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol ZRTariffedUxSession <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) id<ZRTariffedUrlWhitelist> filter; 
@property (nonatomic,retain,readonly) NSDate * invalidationTime; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@required
-(NSString *)name;
-(void)invalidate;
-(BOOL)isValid;
-(NSDate *)invalidationTime;
-(id<ZRTariffedUrlWhitelist>)filter;

@end
