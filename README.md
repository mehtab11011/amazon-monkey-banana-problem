# 🐒 Amazon Monkey and Banana Problem

### 💼 Interview Question (Amazon):

> A monkey is in a room with a banana hanging from the ceiling. There's a box in the room too, but it's not under the banana.  
>
> The monkey can:
> - Move around the room  
> - Push the box  
> - Climb the box  
> - Grab the banana (only if it's on the box)  
>
> **Goal:** How will the monkey get the banana?

---

### ✅ Solution Explanation:

This C++ program simulates the monkey’s strategy to get the banana using Object-Oriented Programming (OOP). It defines all required states and actions of the monkey.

#### 🧠 States Used:
- `monkey_position`: Monkey's current location (`door`, `window`, `center`)
- `box_position`: Current location of the box
- `monkey_is_on_box`: Boolean state to track if the monkey is on the box
- `monkey_has_banana`: Boolean state to check if the monkey has taken the banana

---

### 🔁 Step-by-Step Actions:
1. **Move Monkey to Window**  
   The monkey starts at the **door** and moves to the **window**, where the box is located.

2. **Push Box to Center**  
   From the **window**, the monkey pushes the box to the **center** of the room (below the banana).

3. **Climb on Box**  
   When the monkey and box are at the same position (**center**), the monkey climbs onto the box.

4. **Grab the Banana**  
   Now being on the box, the monkey is able to reach and take the banana.

---

### 🎯 Final Output:
If all steps are executed correctly, the monkey will succeed in grabbing the banana and enjoy it.

