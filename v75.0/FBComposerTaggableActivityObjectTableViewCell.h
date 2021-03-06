/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBNetworkImageView, FBUserSession, FBMemTaggableActivity, FBMemTaggableActivitySuggestionsEdge, NSString;

@interface FBComposerTaggableActivityObjectTableViewCell : UITableViewCell {

	FBNetworkImageView* _profilePictureView;
	FBUserSession* _session;
	FBNetworkImageView* _taggableActivityIconView;
	double _extraPaddingOnLeft;
	BOOL _shouldDisplaySingleIcon;
	BOOL _shouldShowHightlightStyle;
	FBMemTaggableActivity* _taggableActivity;
	FBMemTaggableActivitySuggestionsEdge* _taggableActivitySuggestionEdge;
	NSString* _freeformEntry;
	double _verticalPadding;
	double _horizontalPadding;

}

@property (nonatomic,retain) FBMemTaggableActivity * taggableActivity;                                           //@synthesize taggableActivity=_taggableActivity - In the implementation block
@property (nonatomic,retain) FBMemTaggableActivitySuggestionsEdge * taggableActivitySuggestionEdge;              //@synthesize taggableActivitySuggestionEdge=_taggableActivitySuggestionEdge - In the implementation block
@property (nonatomic,copy) NSString * freeformEntry;                                                             //@synthesize freeformEntry=_freeformEntry - In the implementation block
@property (assign,nonatomic) double verticalPadding;                                                             //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                                                           //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplaySingleIcon;                                                       //@synthesize shouldDisplaySingleIcon=_shouldDisplaySingleIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHightlightStyle;                                                     //@synthesize shouldShowHightlightStyle=_shouldShowHightlightStyle - In the implementation block
-(void)_O_hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_O_hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTaggableActivity:(FBMemTaggableActivity *)arg1 ;
-(FBMemTaggableActivity *)taggableActivity;
-(void)setShouldDisplaySingleIcon:(BOOL)arg1 ;
-(void)setShouldShowHightlightStyle:(BOOL)arg1 ;
-(void)setFreeformEntry:(NSString *)arg1 ;
-(void)setTaggableActivitySuggestionEdge:(FBMemTaggableActivitySuggestionsEdge *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 extraPaddingOnLeft:(double)arg3 ;
-(NSString *)freeformEntry;
-(BOOL)shouldDisplaySingleIcon;
-(FBMemTaggableActivitySuggestionsEdge *)taggableActivitySuggestionEdge;
-(BOOL)shouldShowHightlightStyle;
-(void)updateDisplayForHighlightedAndSelected;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(void)updateCell;
@end

