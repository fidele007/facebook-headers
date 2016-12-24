/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemPage, FBFeedToolbox, FBAnalyticsInfo;

@interface FBPageProfileComponent : CKCompositeComponent {

	FBMemPage* _page;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;

}

@property (nonatomic,readonly) FBMemPage * page;                             //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                      //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
+(id)newWithPage:(id)arg1 toolbox:(id)arg2 analyticsInfo:(id)arg3 ;
-(FBFeedToolbox *)toolbox;
-(FBAnalyticsInfo *)analyticsInfo;
-(FBMemPage *)page;
@end
