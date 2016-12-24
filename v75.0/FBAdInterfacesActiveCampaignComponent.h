/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBAdInterfacesComponentToolbox, FBNuxTooltip;

@interface FBAdInterfacesActiveCampaignComponent : CKCompositeComponent {

	FBAdInterfacesComponentToolbox* _toolbox;
	FBNuxTooltip* _tooltip;
	FBAdInterfacesActiveCampaignStatusConfig _statusConfig;

}
+(id)newWithCampaignStats:(const FBAdInterfacesActiveCampaignStats*)arg1 actionButtons:(const vector<FBAdInterfacesActionButtonConfiguration, std::__1::allocator<FBAdInterfacesActionButtonConfiguration> >*)arg2 accessoryComponent:(id)arg3 statusConfig:(FBAdInterfacesActiveCampaignStatusConfig)arg4 tooltip:(id)arg5 toolbox:(id)arg6 ;
-(void)toggleValueChanged:(id)arg1 toggleState:(id)arg2 ;
@end

