//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSDate, NSMutableArray, NSString;

@interface QKChannel : LCBaseModel
{
    NSString *_ID;
    NSString *_name;
    NSMutableArray *_array;
    long long _max_time;
    long long _min_time;
    long long _show_time;
    long long _max_page;
    long long _min_page;
    long long _index;
    NSDate *_date;
    long long _remove;
}

@property(nonatomic) long long remove; // @synthesize remove=_remove;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long min_page; // @synthesize min_page=_min_page;
@property(nonatomic) long long max_page; // @synthesize max_page=_max_page;
@property(nonatomic) long long show_time; // @synthesize show_time=_show_time;
@property(nonatomic) long long min_time; // @synthesize min_time=_min_time;
@property(nonatomic) long long max_time; // @synthesize max_time=_max_time;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAttribute:(id)arg1;

@end

