/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBFunnelRegistry : NSObject {

	NSMutableDictionary* _funnelConfigs;

}

@property (nonatomic,copy) NSMutableDictionary * funnelConfigs;              //@synthesize funnelConfigs=_funnelConfigs - In the implementation block
+(id)sharedRegistry;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 ;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 reuseFunnelIfExists:(BOOL)arg4 ;
-(NSMutableDictionary *)funnelConfigs;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(BOOL)arg4 ;
-(void)registerFunnel:(id)arg1 shouldEndOnBackgrounding:(BOOL)arg2 timeout:(double)arg3 enableFunnelPseudoEnding:(BOOL)arg4 reuseFunnelIfExists:(BOOL)arg5 ;
-(id)configForFunnel:(id)arg1 ;
-(id)getFunnelConfigs;
-(void)setFunnelConfigs:(NSMutableDictionary *)arg1 ;
@end
