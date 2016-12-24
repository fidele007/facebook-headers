/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedGoodwillCampaignFieldsProtocol;
@class FBThrowbackShareHandler, FBMemModelObject, FBFeedToolbox, FBMemGoodwillVideoCampaign, NSString;

@interface FBGoodwillVideoFooterComponent : CKCompositeComponent {

	FBThrowbackShareHandler* _throwbackShareHandler;
	FBMemModelObject*<FBQueriedGoodwillCampaignFieldsProtocol> _campaign;
	FBFeedToolbox* _toolbox;
	FBMemGoodwillVideoCampaign* _videoCampaign;
	NSString* _source;
	NSString* _renderStyle;
	CKTypedComponentAction<> _shareAction;

}

@property (nonatomic,retain) FBFeedToolbox * toolbox;                                 //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) FBMemGoodwillVideoCampaign * videoCampaign;              //@synthesize videoCampaign=_videoCampaign - In the implementation block
@property (nonatomic,copy) NSString * source;                                         //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> shareAction;                  //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * renderStyle;                           //@synthesize renderStyle=_renderStyle - In the implementation block
+(id)newWithCampaign:(id)arg1 source:(id)arg2 renderStyle:(id)arg3 shareAction:(CKTypedComponentAction<>)arg4 toolbox:(id)arg5 ;
-(FBFeedToolbox *)toolbox;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(void)didTapEdit:(id)arg1 ;
-(void)didTapShare:(id)arg1 ;
-(FBMemGoodwillVideoCampaign *)videoCampaign;
-(NSString *)renderStyle;
-(void)didTapButton:(id)arg1 ;
-(void)setVideoCampaign:(FBMemGoodwillVideoCampaign *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(CKTypedComponentAction<>)shareAction;
@end

