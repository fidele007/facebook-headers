/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBRestorableNavigationInfoBuilder : NSObject {

	double _timestamp;
	unsigned long long _viewControllerPresentationMethod;
	unsigned long long _viewControllerPresentationOptions;

}
+(id)restorableNavigationInfo;
+(id)restorableNavigationInfoFromExistingRestorableNavigationInfo:(id)arg1 ;
-(id)withTimestamp:(double)arg1 ;
-(id)withViewControllerPresentationMethod:(unsigned long long)arg1 ;
-(id)withViewControllerPresentationOptions:(unsigned long long)arg1 ;
-(id)build;
@end

