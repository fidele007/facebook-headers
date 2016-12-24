/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class FBEmbeddedTabsToolbox, FIGTabsComponentModel, NSArray;

@interface FBEmbeddedTabsSectionComponent : FBCompositeSectionComponent {

	FBEmbeddedTabsToolbox* _toolbox;
	FIGTabsComponentModel* _model;
	NSArray* _tabConfigs;

}

@property (nonatomic,readonly) FBEmbeddedTabsToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FIGTabsComponentModel * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabConfigs;                    //@synthesize tabConfigs=_tabConfigs - In the implementation block
+(id)newWithEmbeddedTabListConfigurations:(id)arg1 toolbox:(id)arg2 ;
-(FBEmbeddedTabsToolbox *)toolbox;
-(NSArray *)tabConfigs;
-(FIGTabsComponentModel *)model;
@end

