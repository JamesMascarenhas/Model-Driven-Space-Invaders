2d - Task 2 was implemented mainly in Enemy.art and EnemyHarness.art.
In Enemy.art, I added handling for movePrevP.move in the Alive state 
so that each alive enemy updates its direction from the received movement 
message, erases its old shape, calls updateLocation(), and renders itself 
again at the new location. After moving, it checks whether it has reached 
a border or the bottom using atRightBorder(), atLeftBorder(), and atBottom(), 
and reports this to the harness using harnessP.changeDirection(). The movement 
message is then forwarded to the next enemy through moveNextP.move(). 
In the Dead state, enemies still forward move messages so that the circular movement 
chain is preserved after enemies are destroyed.

In EnemyHarness.art, I used the existing circular movement structure to coordinate all enemies. 
Once all enemies are connected, the harness starts timed movement rounds. On each round it sends a 
moveStartP.move(direction) message into the chain, and when the movement token returns through moveEndP.move, 
the harness schedules the next round. This prevents overlapping movement rounds and keeps the enemy formation aligned.

For Task 2a, the harness starts with direction = 1, so enemies move right. When an enemy reports that it has reached the 
right border, the harness stops future movement rounds.

For Task 2b, instead of stopping, the harness reverses the global direction when a border is reached. If the reported 
direction is 1, the next horizontal direction becomes -1, and if the reported direction is -1, it becomes 1. This makes 
the enemies move right and left forever.

For Task 2c, I extended the harness logic to support a downward movement round. When a horizontal border is reached, 
the harness sets the next round to direction = 0, which causes all enemies to move down by one row. After that round completes, 
the harness switches to the opposite horizontal direction. If an enemy reaches the bottom while moving down, the harness 
sends endGameP.playerLoses().

The movement update frequency remains round-based, and I reduced the per-update movement distance in Enemy::updateLocation() 
so the behavior is easier to observe and test while preserving the same movement logic. It used to be 10 pixels per update
and I reduced it to 2 to make the game playable and debugging easier while keeping the update frequency at the standard 0.01
seconds. 