/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCommentPagerSectionComponentConfiguration : NSObject {

	BOOL _initialSpinner;
	BOOL _dimmed;
	BOOL _disabled;
	unsigned long long _pagerType;
	long long _pagerStatus;

}

@property (nonatomic,readonly) unsigned long long pagerType;              //@synthesize pagerType=_pagerType - In the implementation block
@property (nonatomic,readonly) long long pagerStatus;                     //@synthesize pagerStatus=_pagerStatus - In the implementation block
@property (nonatomic,readonly) BOOL initialSpinner;                       //@synthesize initialSpinner=_initialSpinner - In the implementation block
@property (nonatomic,readonly) BOOL dimmed;                               //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                             //@synthesize disabled=_disabled - In the implementation block
+(id)newWithPagerType:(unsigned long long)arg1 pagerStatus:(long long)arg2 initialSpinner:(BOOL)arg3 dimmed:(BOOL)arg4 disabled:(BOOL)arg5 ;
-(unsigned long long)pagerType;
-(long long)pagerStatus;
-(BOOL)initialSpinner;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)disabled;
-(BOOL)dimmed;
@end

