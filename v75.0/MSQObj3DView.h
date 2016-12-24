/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MSQPrefabViewBase.h>

@protocol MSQObj3DModelProtocol;
@class MQEventHandler, SCNScene, SCNNode;

@interface MSQObj3DView : MSQPrefabViewBase {

	MQEventHandler* onPrefabChangeHandler;
	SCNScene* scene;
	SCNNode* meshModel;
	id<MSQObj3DModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MSQObj3DModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(void)onPrefabChange:(id)arg1 ;
-(id)getNode:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(id<MSQObj3DModelProtocol>)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id<MSQObj3DModelProtocol>)arg1 ;
-(void)destroy;
@end

