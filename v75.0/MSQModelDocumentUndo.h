/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HTModelDocumentUndoDelegate;
@class NSUndoManager;

@interface MSQModelDocumentUndo : NSObject {

	NSUndoManager* _snapshotManager;
	BOOL _hasReceivedDidOpenGroupEvent;
	id<HTModelDocumentUndoDelegate> _delegate;
	NSUndoManager* _manager;

}

@property (nonatomic,retain) NSUndoManager * manager;                                      //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) id<HTModelDocumentUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoSnapshot; 
@property (nonatomic,readonly) BOOL hasReceivedDidOpenGroupEvent; 
-(void)resetUndoEvents;
-(void)_undoWillChangeNotification:(id)arg1 ;
-(void)_undoDidChangeNotification:(id)arg1 ;
-(void)_undoEventNotification:(id)arg1 ;
-(void)resetUndoHistory;
-(BOOL)hasUndoSnapshot;
-(void)takeUndoSnapshot;
-(void)restoreUndoSnapshot;
-(BOOL)hasReceivedDidOpenGroupEvent;
-(NSUndoManager *)manager;
-(void)setDelegate:(id<HTModelDocumentUndoDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HTModelDocumentUndoDelegate>)delegate;
-(void)setManager:(NSUndoManager *)arg1 ;
@end

