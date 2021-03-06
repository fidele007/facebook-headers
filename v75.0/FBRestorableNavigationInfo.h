/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBRestorableNavigationInfo : FBValueObject <NSCopying, NSCoding> {

	double _timestamp;
	unsigned long long _viewControllerPresentationMethod;
	unsigned long long _viewControllerPresentationOptions;

}

@property (nonatomic,readonly) double timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerPresentationMethod;               //@synthesize viewControllerPresentationMethod=_viewControllerPresentationMethod - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerPresentationOptions;              //@synthesize viewControllerPresentationOptions=_viewControllerPresentationOptions - In the implementation block
-(unsigned long long)viewControllerPresentationMethod;
-(unsigned long long)viewControllerPresentationOptions;
-(id)initWithTimestamp:(double)arg1 viewControllerPresentationMethod:(unsigned long long)arg2 viewControllerPresentationOptions:(unsigned long long)arg3 ;
-(double)timestamp;
@end

