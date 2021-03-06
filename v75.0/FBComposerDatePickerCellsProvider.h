/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMLEDatePickerDelegate.h>

@protocol FBComposerDatePickerCellsProviderDelegate;
@class FBComposerDatePickerUIPickerViewCell, UITableViewCell, FBComposerDatePickerDateCell, UIButton, NSCalendar, FBComposerEventDate, NSArray, NSString;

@interface FBComposerDatePickerCellsProvider : NSObject <FBMLEDatePickerDelegate> {

	FBComposerDatePickerUIPickerViewCell* _datePickerCell;
	UITableViewCell* _addYearCell;
	UITableViewCell* _addMonthCell;
	UITableViewCell* _addDayCell;
	FBComposerDatePickerDateCell* _yearCell;
	FBComposerDatePickerDateCell* _monthCell;
	FBComposerDatePickerDateCell* _dayCell;
	UIButton* _yearDeleteButton;
	UIButton* _monthDeleteButton;
	UIButton* _dayDeleteButton;
	unsigned long long _pickedYear;
	unsigned long long _pickedMonth;
	unsigned long long _pickedDay;
	NSCalendar* _currentCalendar;
	unsigned long long _currentYear;
	unsigned long long _currentMonth;
	unsigned long long _currentDay;
	FBComposerEventDate* _defaultLifeEventDate;
	BOOL _allowDeleteYear;
	NSArray* _monthSymbols;
	unsigned long long _currentState;
	unsigned long long _datePickerState;
	NSArray* _currentCellsList;
	FBComposerEventDate* _earliestDateAllowed;
	id<FBComposerDatePickerCellsProviderDelegate> _delegate;

}

@property (nonatomic,copy) FBComposerEventDate * earliestDateAllowed;                                    //@synthesize earliestDateAllowed=_earliestDateAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerDatePickerCellsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDeleteButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)generateAddDateCellWithPrompt:(id)arg1 ;
-(void)_setupCells;
-(FBComposerEventDate *)earliestDateAllowed;
-(void)setEarliestDateAllowed:(FBComposerEventDate *)arg1 ;
-(void)_pickYear:(unsigned long long)arg1 ;
-(id)_generateCellsList;
-(id)_generateDatePickerYearsList;
-(id)_generateDatePickerMonthsList;
-(id)_generateDatePickerDaysList;
-(unsigned long long)_monthFromSymbol:(id)arg1 ;
-(void)_pickMonth:(unsigned long long)arg1 ;
-(void)_pickDay:(unsigned long long)arg1 ;
-(void)dateDeleteButtonClicked:(id)arg1 Event:(id)arg2 ;
-(id)_symbolFromMonth:(unsigned long long)arg1 ;
-(void)_validatePickedDay;
-(void)_validatePickedMonthAndDay;
-(id)initWithEaliestDateAllowed:(id)arg1 initState:(unsigned long long)arg2 lifeEventDate:(id)arg3 allowDeleteYear:(BOOL)arg4 ;
-(unsigned long long)getCellsCount;
-(id)getCellForRow:(unsigned long long)arg1 ;
-(double)getHeightForRow:(unsigned long long)arg1 withDefault:(double)arg2 ;
-(void)closeDatePicker;
-(id)getPickedDate;
-(void)didSelectedRow:(unsigned long long)arg1 ;
-(void)setUpCellsAfterSelectingDateWithRow:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBComposerDatePickerCellsProviderDelegate>)arg1 ;
-(id<FBComposerDatePickerCellsProviderDelegate>)delegate;
@end

