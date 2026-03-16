
2d - In Enemy. art I added handing for movePrevp.move in the Alive state so that
when an enemy receives a move message, it updates its direction, erases the old shape
at the old location and re-renders itself at the new location. After re-rendering, 
the enemy checks if it has hit the right left, or bottom border, and if any of these have 
occured it tells this to the harnass. Also enemies forward messages to each other so that 
they can stay in the same grid. In the dead state, enemies still forward menssages to keep
the grid in tact even after their death.
In the EnemyHarness.art this is where the changing of direciton actually happens and where
the enemies are kept in their grid.

For Task 2a, the harnass starts with direction = 1 (moving right). When an enemy reports
it reached the right border, the harness would stop future movement rounds.

For Task 2b, I changed the harness so that border reports no longer stop movement. Instead, 
if the reported direction is 1, the harness changes the global direction to -1, and if the 
reported direction is -1, it changes the global direction back to 1. This makes the formation 
continuously alternate between moving right and moving left.

For Task 2c, I extended the harness logic to support a downward round between horizontal sweeps. 
I kept direction as the currently issued movement direction and added nextHorizontalDirection to 
remember which horizontal direction should follow the downward move. When a right border is reached, 
the harness sets up the next round to move down and stores -1 as the next horizontal direction. When 
a left border is reached, it sets up the next round to move down and stores 1 as the next horizontal 
direction. After the downward round completes, the harness restores the saved horizontal direction. 
This produces the required pattern of right, down, left, down, and so on. If an enemy reaches the bottom 
while moving down, the harness sends endGameP.playerLoses().

Notes:
On my macOS setup, the generated target Makefile did not automatically include the required C++14 and SDL2 
include settings, so I used helper scripts (fix_makefile.sh and rebuild_run.sh) to patch the generated Makefile 
and rebuild/run the project more consistently.

The quit path left the Top process unresponsive after displaying game over output, so I had to force quit
the process after testing. This did not affect the implementation of Tasks 1 to 3.