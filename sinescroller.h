/* 
 * File:   sinescroller.h
 * Author: Knifa
 *
 * Created on 01 April 2011, 14:46
 */

#ifndef SINESCROLLER_H
#define	SINESCROLLER_H

#ifdef	__cplusplus
extern "C" {
#endif

// -----------------------------------------------------------------------------

#define SCROLLER_FONT          "font.ttf"
#define SCROLLER_FONT_SIZE     20
#define SCROLLER_SPEED         4.0f
#define SCROLLER_TEXT          "hello glasnost      sdl is pretty kawaii      internet dance party!     what else do they say in these things?      rave bacon!"
#define SCROLLER_STRIP_SIZE    8.0f

// -----------------------------------------------------------------------------

void SineScroller_Init();
void SineScroller_Draw();
void SineScroller_Update();

// -----------------------------------------------------------------------------
    
#ifdef	__cplusplus
}
#endif

#endif	/* SINESCROLLER_H */
