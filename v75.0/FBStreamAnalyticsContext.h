/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBStreamAnalyticsContext : NSObject <NSCopying> {

	/*^block*/id _extraParameters;
	FBStreamAnalyticsContext* _parent;

}

@property (nonatomic,copy,readonly) id extraParameters;                        //@synthesize extraParameters=_extraParameters - In the implementation block
@property (nonatomic,readonly) FBStreamAnalyticsContext * parent;              //@synthesize parent=_parent - In the implementation block
-(id)childAnalyticsContextWithExtraParameters:(/*^block*/id)arg1 ;
-(id)initWithExtraParameters:(/*^block*/id)arg1 ;
-(id)extraParameters;
-(id)_initWithParent:(id)arg1 extraParameters:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBStreamAnalyticsContext *)parent;
@end

