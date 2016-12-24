/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAdInterfacesMapPickerViewController, FBAdInterfacesComponentToolbox, FBMemAdAccount;

@interface FBAdInterfacesMapPickerViewControllerContext : NSObject {

	FBAdInterfacesMapPickerViewController* _viewController;
	FBAdInterfacesComponentToolbox* _toolbox;
	FBMemAdAccount* _account;

}

@property (nonatomic,__weak,readonly) FBAdInterfacesMapPickerViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) FBAdInterfacesComponentToolbox * toolbox;                                   //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemAdAccount * account;                                                   //@synthesize account=_account - In the implementation block
-(FBAdInterfacesComponentToolbox *)toolbox;
-(id)initWithViewController:(id)arg1 toolbox:(id)arg2 account:(id)arg3 ;
-(FBAdInterfacesMapPickerViewController *)viewController;
-(FBMemAdAccount *)account;
@end
