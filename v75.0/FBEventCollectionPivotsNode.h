/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@class FBComponentHostingNode, FBEventsCollectionToolbox, FBMemEventCollection;

@interface FBEventCollectionPivotsNode : ASDisplayNode {

	FBComponentHostingNode* _hostingNode;
	FBEventsCollectionToolbox* _toolbox;
	FBMemEventCollection* _eventCollection;

}
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)_staticInitialize;
-(id)initWithEventCollection:(id)arg1 toolbox:(id)arg2 displayContext:(id)arg3 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)layout;
-(void)update;
@end

