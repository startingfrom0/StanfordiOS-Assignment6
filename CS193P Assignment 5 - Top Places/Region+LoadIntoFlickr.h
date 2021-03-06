//
//  Region+LoadIntoFlickr.h
//  CS193P Assignment 5 - Top Places
//
//  Created by Alex Smith on 11/05/2015.
//  Copyright (c) 2015 Alex Smith. All rights reserved.
//

#import "Region.h"

@interface Region (LoadIntoFlickr)
+(Region *)regionWithName:(NSString *)regionName
          addPhotographer:(Photographer *)photographer
                inContext:(NSManagedObjectContext *)context;

-(void)addUniquePhotographer:(Photographer *)photographer
                   inContext:(NSManagedObjectContext *)context;
@end
