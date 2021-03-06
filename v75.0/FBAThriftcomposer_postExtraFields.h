/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/TBaseStruct.h>
#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAThriftcomposer_postExtraFields : TBaseStruct <TBase, NSCoding> {

	int __thrift_reachability_status;
	int __thrift_connection_class;
	int __thrift_upload_connection_class;
	int __thrift_payload_type;
	short __thrift_payload_count;
	int __thrift_target_type;
	NSString* __thrift_target_id;
	int __thrift_composer_type;
	NSString* __thrift_ref;
	NSString* __thrift_viewer_id;
	BOOL __thrift_reachability_status_set;
	BOOL __thrift_connection_class_set;
	BOOL __thrift_upload_connection_class_set;
	BOOL __thrift_payload_type_set;
	BOOL __thrift_payload_count_set;
	BOOL __thrift_target_type_set;
	BOOL __thrift_target_id_set;
	BOOL __thrift_composer_type_set;
	BOOL __thrift_ref_set;
	BOOL __thrift_viewer_id_set;

}

@property (assign,nonatomic) int reachability_status; 
@property (assign,nonatomic) int connection_class; 
@property (assign,nonatomic) int upload_connection_class; 
@property (assign,nonatomic) int payload_type; 
@property (assign,nonatomic) short payload_count; 
@property (assign,nonatomic) int target_type; 
@property (nonatomic,retain) NSString * target_id; 
@property (assign,nonatomic) int composer_type; 
@property (nonatomic,retain) NSString * ref; 
@property (nonatomic,retain) NSString * viewer_id; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setReachability_status:(int)arg1 ;
-(void)setConnection_class:(int)arg1 ;
-(void)setUpload_connection_class:(int)arg1 ;
-(void)setPayload_type:(int)arg1 ;
-(void)setPayload_count:(short)arg1 ;
-(void)setTarget_type:(int)arg1 ;
-(void)setTarget_id:(NSString *)arg1 ;
-(void)setComposer_type:(int)arg1 ;
-(void)setViewer_id:(NSString *)arg1 ;
-(id)toDict;
-(id)initWithReachability_status:(int)arg1 connection_class:(int)arg2 upload_connection_class:(int)arg3 payload_type:(int)arg4 payload_count:(short)arg5 target_type:(int)arg6 target_id:(id)arg7 composer_type:(int)arg8 ref:(id)arg9 viewer_id:(id)arg10 ;
-(int)reachability_status;
-(BOOL)reachability_statusIsSet;
-(void)unsetReachability_status;
-(int)connection_class;
-(BOOL)connection_classIsSet;
-(void)unsetConnection_class;
-(int)upload_connection_class;
-(BOOL)upload_connection_classIsSet;
-(void)unsetUpload_connection_class;
-(int)payload_type;
-(BOOL)payload_typeIsSet;
-(void)unsetPayload_type;
-(short)payload_count;
-(BOOL)payload_countIsSet;
-(void)unsetPayload_count;
-(int)target_type;
-(BOOL)target_typeIsSet;
-(void)unsetTarget_type;
-(NSString *)target_id;
-(BOOL)target_idIsSet;
-(void)unsetTarget_id;
-(int)composer_type;
-(BOOL)composer_typeIsSet;
-(void)unsetComposer_type;
-(BOOL)refIsSet;
-(void)unsetRef;
-(NSString *)viewer_id;
-(BOOL)viewer_idIsSet;
-(void)unsetViewer_id;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end

