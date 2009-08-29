//
//  PSAppStoreTableCell.h
//  AppCritics
//
//  Created by Charles Gamble on 16/09/2008.
//  Copyright 2008 Charles Gamble. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSAppStoreApplicationDetails.h"

@class PSImageView;
@class PSRatingView;
@class PSCountView;

@interface PSAppStoreTableCell : UITableViewCell
{
	PSAppStoreState state;
	UILabel *nameLabel;
	PSImageView *flagView;
	PSRatingView *ratingView;
	UILabel *ratingCountLabel;
	PSCountView *countView;
	UIActivityIndicatorView *stateSpinnerView;
}

@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) PSImageView *flagView;
@property (nonatomic, retain) PSRatingView *ratingView;
@property (nonatomic, retain) UILabel *ratingCountLabel;
@property (nonatomic, retain) PSCountView *countView;
@property (nonatomic, assign) PSAppStoreState state;
@property (nonatomic, retain) UIActivityIndicatorView *stateSpinnerView;

@end
