/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBMemPagePrimaryCTAAction;

@interface FBPageEditActionSectionDataProvider : NSObject {

	NSArray* _actionItemRows;
	FBMemPagePrimaryCTAAction* _configuredPrimaryCTAAction;
	unsigned long long _actionsStartIndex;
	unsigned long long _actionsCount;
	NSArray* _configuredActions;

}
-(void)_prepareDataWithPage:(id)arg1 ;
-(id)_preparePrimaryButtonsData:(id)arg1 ;
-(id)_prepareActionBarActionsData:(id)arg1 ;
-(BOOL)_isConfigurableAction:(id)arg1 ;
-(id)actionSectionItems;
-(id)configuredActions;
-(id)configuredPrimaryCTAAction;
-(id)configuredActionWithRowIndex:(unsigned long long)arg1 ;
-(id)initWithPage:(id)arg1 ;
@end

