/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQDataModel.h>
#import <Facebook/MSQFileResourceReferrer.h>

@class MSQModelUndoablePrimitive, NSString;

@interface MSQPostProcessorModel : MQDataModel <MSQFileResourceReferrer> {

	MSQModelUndoablePrimitive* _vertexShaderDataProperty;
	MSQModelUndoablePrimitive* _fragmentShaderDataProperty;
	MSQModelUndoablePrimitive* _postProcessorNameProperty;
	MSQModelUndoablePrimitive* _vertexShaderNameProperty;
	MSQModelUndoablePrimitive* _fragmentShaderNameProperty;
	MSQModelUndoablePrimitive* _texture1Property;
	MSQModelUndoablePrimitive* _texture2Property;
	MSQModelUndoablePrimitive* _texture3Property;
	MSQModelUndoablePrimitive* _texture4Property;
	MSQModelUndoablePrimitive* _texture5Property;
	MSQModelUndoablePrimitive* _texture6Property;
	MSQModelUndoablePrimitive* _texture7Property;
	BOOL _dataSynchronized;

}

@property (nonatomic,copy) NSString * vertexShaderData; 
@property (nonatomic,copy) NSString * fragmentShaderData; 
@property (nonatomic,copy) NSString * postProcessorName; 
@property (nonatomic,copy) NSString * vertexShaderName; 
@property (nonatomic,copy) NSString * fragmentShaderName; 
@property (nonatomic,copy) NSString * texture1; 
@property (nonatomic,copy) NSString * texture2; 
@property (nonatomic,copy) NSString * texture3; 
@property (nonatomic,copy) NSString * texture4; 
@property (nonatomic,copy) NSString * texture5; 
@property (nonatomic,copy) NSString * texture6; 
@property (nonatomic,copy) NSString * texture7; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAttributes:(id)arg1 options:(id)arg2 ;
-(void)parseAttributes:(id)arg1 options:(id)arg2 ;
-(void)didMoveToParent;
-(id)serialize:(id)arg1 options:(id)arg2 ;
-(void)parse:(id)arg1 relations:(id)arg2 fileController:(id)arg3 options:(id)arg4 ;
-(void)_setupUndoableProperties;
-(void)synchronizeResourcesUsingFileController:(id)arg1 ;
-(void)writeResourcesUsingFileController:(id)arg1 ;
-(void)addResourceFileNames:(id)arg1 ;
-(void)_fileStateDidChange;
-(NSString *)vertexShaderName;
-(void)setVertexShaderData:(NSString *)arg1 ;
-(NSString *)fragmentShaderName;
-(void)setFragmentShaderData:(NSString *)arg1 ;
-(NSString *)vertexShaderData;
-(NSString *)fragmentShaderData;
-(void)setPostProcessorName:(NSString *)arg1 ;
-(NSString *)postProcessorName;
-(void)setVertexShaderName:(NSString *)arg1 ;
-(void)setFragmentShaderName:(NSString *)arg1 ;
-(void)setTexture1:(NSString *)arg1 ;
-(NSString *)texture1;
-(void)setTexture2:(NSString *)arg1 ;
-(NSString *)texture2;
-(void)setTexture3:(NSString *)arg1 ;
-(NSString *)texture3;
-(void)setTexture4:(NSString *)arg1 ;
-(NSString *)texture4;
-(void)setTexture5:(NSString *)arg1 ;
-(NSString *)texture5;
-(void)setTexture6:(NSString *)arg1 ;
-(NSString *)texture6;
-(void)setTexture7:(NSString *)arg1 ;
-(NSString *)texture7;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
@end

