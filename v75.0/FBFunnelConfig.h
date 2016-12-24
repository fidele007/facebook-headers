/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFunnelConfig : NSObject {

	BOOL _shouldEndOnBackgrounding;
	BOOL _enableFunnelPseudoEnding;
	BOOL _reuseFunnelIfExists;
	double _timeout;

}

@property (nonatomic,readonly) BOOL shouldEndOnBackgrounding;              //@synthesize shouldEndOnBackgrounding=_shouldEndOnBackgrounding - In the implementation block
@property (nonatomic,readonly) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) BOOL enableFunnelPseudoEnding;              //@synthesize enableFunnelPseudoEnding=_enableFunnelPseudoEnding - In the implementation block
@property (nonatomic,readonly) BOOL reuseFunnelIfExists;                   //@synthesize reuseFunnelIfExists=_reuseFunnelIfExists - In the implementation block
-(BOOL)shouldEndOnBackgrounding;
-(BOOL)enableFunnelPseudoEnding;
-(BOOL)reuseFunnelIfExists;
-(id)initWithShouldEndOnBackgrounding:(BOOL)arg1 timeout:(double)arg2 enableFunnelPseudoEnding:(BOOL)arg3 reuseFunnelIfExists:(BOOL)arg4 ;
-(double)timeout;
@end

