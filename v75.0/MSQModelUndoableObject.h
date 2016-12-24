/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MSQModelDocumentContext;

@interface MSQModelUndoableObject : NSObject {

	NSString* _keypath;
	unsigned long long _options;
	id _objectContext;
	MSQModelDocumentContext* _context;

}

@property (nonatomic,copy,readonly) NSString * keypath;                      //@synthesize keypath=_keypath - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL wrapsUndoable; 
@property (nonatomic,readonly) BOOL wrapsCopyable; 
@property (assign,nonatomic,__weak) id objectContext;                        //@synthesize objectContext=_objectContext - In the implementation block
@property (nonatomic,retain) MSQModelDocumentContext * context;              //@synthesize context=_context - In the implementation block
-(NSString *)keypath;
-(BOOL)wrapsUndoable;
-(BOOL)wrapsCopyable;
-(void)setObjectContext:(id)arg1 ;
-(id)initWithKeypath:(id)arg1 options:(unsigned long long)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)objectContext;
-(id)objectToWrap:(id)arg1 ;
-(void)updateUndoableState:(long long)arg1 ofWrappedObject:(id)arg2 ;
-(id)init;
-(MSQModelDocumentContext *)context;
-(void)setContext:(MSQModelDocumentContext *)arg1 ;
-(unsigned long long)options;
@end

