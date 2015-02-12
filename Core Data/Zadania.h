//
//  Zadania.h
//  Core Data
//
//  Created by Piotr Mlynarski on 09.02.2015.
//  Copyright (c) 2015 Piotr Mlynarski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Zadania : NSManagedObject

@property (nonatomic, retain) NSNumber * isDone;
@property (nonatomic, retain) NSString * opis;
@property (nonatomic, retain) NSString * temat;

@end
