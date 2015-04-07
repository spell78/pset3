//Lev Blankfeld
//
//Les2265@mail.ru
//
// breakout.c
//
// Computer Science 50
// Problem Set 3
//

// standard libraries
#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Stanford Portable Library
#include <spl/gevents.h>
#include <spl/gobjects.h>
#include <spl/gwindow.h>

// height and width of game's window in pixels
#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Stanford Portable Library
#include <spl/gevents.h>
#include <spl/gobjects.h>
#include <spl/gwindow.h>

// height and width of game's window in pixels
#define HEIGHT 600
#define WIDTH 400

// number of rows of bricks
#define ROWS 5

// number of columns of bricks
#define COLS 10

// radius of ball in pixels
#define RADIUS 10

// lives
#define LIVES 3

// prototypes
void initBricks(GWindow window);
GOval initBall(GWindow window);
GRect initPaddle(GWindow window);
GLabel initScoreboard(GWindow window);
void updateScoreboard(GWindow window, GLabel label, int points);
GObject detectCollision(GWindow window, GOval ball);

int main(void)
{
    // seed pseudorandom number generator
    srand48(time(NULL));

    // instantiate window
    GWindow window = newGWindow(WIDTH, HEIGHT);

    // instantiate bricks
    initBricks(window);

    // instantiate ball, centered in middle of window
    GOval ball = initBall(window);

    // instantiate paddle, centered at bottom of window
    GRect paddle = initPaddle(window);

    // instantiate scoreboard, centered in middle of window, just above ball
    GLabel label = initScoreboard(window);

    // number of bricks initially
    int bricks = COLS * ROWS;

    // number of lives initially
    int lives = LIVES;

    // number of points initially
    int points = 0;
    
    //ball velocity
    double x_velocity = drand48();
    double y_velocity = 2.0;

    // keep playing until game over
    while (lives > 0 && bricks > 0)
    {
        //makes the ball move
        move(ball, x_velocity, y_velocity);
        pause(7);
        //bounce if ball hits left or right edge
        if (getX(ball) + getWidth(ball) >= getWidth(window))
        {
            x_velocity = -x_velocity;
        }
        else if(getX(ball) <= 0)
        {
            x_velocity = -x_velocity;
        }
        else if(getY(ball) <= 0)
        {
            y_velocity = -y_velocity;
        }
        //if ball hits bottom stop round and minus 1 life
        else if(getY(ball) + getWidth(ball) >= getHeight(window))
        {
            waitForClick();
            lives--;
            double x = WIDTH / 2 - RADIUS;
            double y = HEIGHT / 2 - RADIUS;
            setLocation(ball, x, y);    
        }
        
        //detect collision
        if (detectCollision(window, ball) != NULL)
        {
            GObject collision = detectCollision(window, ball);
            if (strcmp(getType(collision), "GRect") == 0)
            {
                //detect if collision with paddle
                if (collision == paddle)
                {
                    y_velocity = -y_velocity;
                }
                //detect if collision with bricks
                if (collision != paddle)
                {
                    removeGWindow(window, collision);
                    points++;
                    bricks--;
                    updateScoreboard(window, label, points);
                    y_velocity = -y_velocity;
                }
            }
        }
        
        //makes the paddle sense for mouse movement
        GEvent event = getNextEvent(MOUSE_EVENT);
        if (event != NULL)
        {
            // if the event was movement
            if (getEventType(event) == MOUSE_MOVED)
            {
                //makes the paddle follow the cursor
                double x = getX(event) - getWidth(paddle) / 2;
                setLocation(paddle, x, 500);
                //makes the padlle stop when it hits the edge 
                if (getX(event) + getWidth(paddle) / 2 >= getWidth(window))
                {
                    setLocation(paddle, WIDTH - 80, 500);
                }
                else if (getX(event) - getWidth(paddle) / 2 <= 0)
                {
                    setLocation(paddle, 0, 500);
                }
            }
        }        
    }

    // wait for click before exiting
    waitForClick();

    // game over
    closeGWindow(window);
    return 0;
}

/**
 * Initializes window with a grid of bricks.
 */
void initBricks(GWindow window)
{
    
    //locating the first line of bricks
    int x = 2;
    int y = 50;
    
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = 1; j <= COLS; j++)
        {
            //setting the color for every line of bricks
            if (i <= ROWS -4)
            {
                GRect brick = newGRect(x, y, 35, 10);
                setFilled(brick, true);
                setColor(brick, "RED");
                add(window, brick);
                x += (35 + 5);
            }
            else if (i <= ROWS - 3)
            {
                GRect brick = newGRect(x, y, 35, 10);
                setFilled(brick, true);
                setColor(brick, "ORANGE");
                add(window, brick);
                x += (35 + 5);
            }
            else if (i <= ROWS - 2)
            {
                GRect brick = newGRect(x, y, 35, 10);
                setFilled(brick, true);
                setColor(brick, "YELLOW");
                add(window, brick);
                x += (35 + 5);
            }
            else if (i <= ROWS - 1)
            {
                GRect brick = newGRect(x, y, 35, 10);
                setFilled(brick, true);
                setColor(brick, "GREEN");
                add(window, brick);
                x += (35 + 5);
            }
            else if (i <= ROWS)
            {
                GRect brick = newGRect(x, y, 35, 10);
                setFilled(brick, true);
                setColor(brick, "BLUE");
                add(window, brick);
                x += (35 + 5);
            }
        }
       //setting location for other lines of bricks
       x = 2;
       y += (10 + 5);
    }
}

/**
 * Instantiates ball in center of window.  Returns ball.
 */
GOval initBall(GWindow window)
{
    GOval ball = newGOval((WIDTH/2 - RADIUS), (HEIGHT/2 - RADIUS), 2 * RADIUS, 2 * RADIUS);
    setFilled(ball, true);
    setColor(ball, "BLACK"); 
    add(window, ball);
    return ball;
}

/**
 * Instantiates paddle in bottom-middle of window.
 */
GRect initPaddle(GWindow window)
{
    // TODO
    GRect paddle = newGRect(WIDTH/2 - 40, 500, 80, 10);
    setFilled(paddle, true);
    setColor(paddle, "BLACK");
    add(window, paddle);
    return paddle; 
}

/**
 * Instantiates, configures, and returns label for scoreboard.
 */
GLabel initScoreboard(GWindow window)
{   
    GLabel label = newGLabel("0");
    setFont(label, "Arial-26");
    double x = (getWidth(window) - getWidth(label)) / 2;
    double y = (getHeight(window) - getHeight(label)) / 2;
    setLocation(label, x, y);
    add(window, label);
    return label;
}

/**
 * Updates scoreboard's label, keeping it centered in window.
 */
void updateScoreboard(GWindow window, GLabel label, int points)
{
    // update label
    char s[12];
    sprintf(s, "%i", points);
    setLabel(label, s);

    // center label in window
    double x = (getWidth(window) - getWidth(label)) / 2;
    double y = (getHeight(window) - getHeight(label)) / 2;
    setLocation(label, x, y);
}

/**
 * Detects whether ball has collided with some object in window
 * by checking the four corners of its bounding box (which are
 * outside the ball's GOval, and so the ball can't collide with
 * itself).  Returns object if so, else NULL.
 */
GObject detectCollision(GWindow window, GOval ball)
{
    // ball's location
    double x = getX(ball);
    double y = getY(ball);

    // for checking for collisions
    GObject object;

    // check for collision at ball's top-left corner
    object = getGObjectAt(window, x, y);
    if (object != NULL)
    {
        return object;
    }

    // check for collision at ball's top-right corner
    object = getGObjectAt(window, x + 2 * RADIUS, y);
    if (object != NULL)
    {
        return object;
    }

    // check for collision at ball's bottom-left corner
    object = getGObjectAt(window, x, y + 2 * RADIUS);
    if (object != NULL)
    {
        return object;
    }

    // check for collision at ball's bottom-right corner
    object = getGObjectAt(window, x + 2 * RADIUS, y + 2 * RADIUS);
    if (object != NULL)
    {
        return object;
    }

    // no collision
    return NULL;
}
