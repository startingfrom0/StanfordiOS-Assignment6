//
//  PhotosInRegionCDTVC.h
//  CS193P Assignment 5 - Top Places
//
//  Created by Alex Smith on 15/05/2015.
//  Copyright (c) 2015 Alex Smith. All rights reserved.
//

#import "CoreDataTableViewController.h"
@class Region;

@interface PhotosInRegionCDTVC : CoreDataTableViewController
@property (strong, nonatomic) Region *regionForPhotos;
@end
