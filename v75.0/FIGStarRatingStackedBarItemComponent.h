/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent;

@interface FIGStarRatingStackedBarItemComponent : CKComponent {

	CKComponent* _barComponent;
	CKComponent* _numberOfRatingsComponent;
	double _barPercentage;

}
+(id)newWithNumberOfRatings:(unsigned long long)arg1 maxNumberOfRatings:(unsigned long long)arg2 color:(id)arg3 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

