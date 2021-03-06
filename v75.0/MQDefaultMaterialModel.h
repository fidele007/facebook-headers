/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQMaterialModelBase.h>
#import <Facebook/MQDefaultMaterialModelProtocol.h>

@class NSString, MSQModelUndoablePrimitive, MSQModelDocumentContext, NSArray;

@interface MQDefaultMaterialModel : MQMaterialModelBase <MQDefaultMaterialModelProtocol> {

	MSQModelUndoablePrimitive* _reflectiveTextureIdentifierProperty;
	MSQModelUndoablePrimitive* _multiplyTextureIdentifierProperty;
	MSQModelUndoablePrimitive* _blendModeProperty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
@property (nonatomic,readonly) MSQModelDocumentContext * context; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numChildren; 
@property (nonatomic,copy,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<MQDataModelProtocol> parent; 
@property (nonatomic,retain) id<MQFileControllerProtocol> fileController; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,readonly) id<MQDocumentModelProtocol> documentModel; 
@property (assign,nonatomic) double transparency; 
@property (assign,nonatomic) BOOL readsFromDepthBuffer; 
@property (assign,nonatomic) BOOL writesToDepthBuffer; 
@property (assign,nonatomic) BOOL doubleSided; 
@property (assign,nonatomic) int cullMode; 
@property (nonatomic,retain) id<MSQTextureModelProtocol> diffuseTexture; 
@property (nonatomic,copy) NSString * diffuseTextureIdentifier; 
@property (assign,nonatomic) long long blendMode; 
@property (nonatomic,retain) id<MSQTextureModelProtocol> reflectiveTexture; 
@property (nonatomic,retain) id<MSQTextureModelProtocol> multiplyTexture; 
@property (nonatomic,copy) NSString * reflectiveTextureIdentifier; 
@property (nonatomic,copy) NSString * multiplyTextureIdentifier; 
-(void)setReflectiveTextureIdentifier:(NSString *)arg1 ;
-(void)setMultiplyTextureIdentifier:(NSString *)arg1 ;
-(void)setReflectiveTexture:(id<MSQTextureModelProtocol>)arg1 ;
-(id<MSQTextureModelProtocol>)multiplyTexture;
-(void)setMultiplyTexture:(id<MSQTextureModelProtocol>)arg1 ;
-(void)addAttributes:(id)arg1 options:(id)arg2 ;
-(void)parseAttributes:(id)arg1 options:(id)arg2 ;
-(void)addObjectReferencesToSet:(id)arg1 ;
-(id)_texturePrimitives;
-(void)addTextureIdentifiersToMap:(id)arg1 ;
-(id)textureIdentifierForPropertyName:(id)arg1 ;
-(BOOL)setTextureIdentifier:(id)arg1 forPropertyName:(id)arg2 ;
-(NSString *)reflectiveTextureIdentifier;
-(NSString *)multiplyTextureIdentifier;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(id<MSQTextureModelProtocol>)reflectiveTexture;
@end

