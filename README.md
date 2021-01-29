 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Scheduler for da Cool Kids
 
 > Authors:   \<[Turner Zischka](https://github.com/TurnerZischka)\>  \<[Austin Lee](https://github.com/austinslee)\> \<[Aly Refaat](https://github.com/Sebesky)\>
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list and decide which design patterns you will use to implement it. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 

## Project Description
 > ## Phase I
 > Our project is intended to be a task scheduler with GUI. Our hope is to create a tool that each one of use would want to use in our daily life. Obviously we want to get stuff done, this tool shoudl help with that. Important too is the fact that this is a useful project, while the other suggested projects are games. Games are a popular stable for CS projects, but only a portion of the possible jobs for CS are game devs, in fact some of the worst jobs are game dev jobs. This is meant to be a more helpful tool that allows us to have a stronger resume/portfolio for non-gamedev jobs. 
  > * In this application, a user can create tasks including a title, description,
classification (e.g. personal, work, study) priority, duration and due date. Some of these
features can also be optional. Users can also create task lists where each list includes
multiple tasks. Task lists can represent larger tasks that have subtasks within them.
Users can display, edit, and delete tasks and task lists. Users should also be able to
undo these operations.
 
 > * Design Patterns Patterns to use
 >   * Memento
 >      *We hope to use this pattern in order for a user to save their calendar, and use it the next time they load the program. The momento parttern will be used to save the state of classes representing the user schedules events. We picked this pattern so that we can get all data form the classes storing information, and then store that in a sperate file -- txt mostly likely -- so that the next time the program is loaded, classes can be created and loaded with momento information, effectivly a save calendar feature. This is a good solution because there is no way to store an object in long term memory, this will save the essence of an object for later. 
 >   * Composite
 >      * We want to implement a list output of all events a user has entered into their schedule. The user can add events to days, or to weeks, and should be able to output all of them. This pattern is usefully because it allows us to nests tasks within tasks, and have them displayed under one command of an interface. Also, this would allow us to create subtasks to tasks, a representation of tasks within a goal. This is a good choice for exactly that nesting puropse. Objects of the same type can be contained with one another, and treated uniformly by an interface. 
 >   * Facade
 >      *In our sceduler, there will be multiple way to display events and things to be done. Each of these will utalize different classes and ways to display data. As such, there will be different ways to access data. Of course each display will work from a common set of classes representing a users scheduled events. The use of a facade will help create a uniform way for the display classes to interact with the event classes. In fact, it will be the only proper way to interact with them. This is good because then we don't have to directly have each diplay class with the knowledge and abilty to manipulate every single event class, instead have a uniform and specificed way for each to interact with the "subsystem" of even classes. 
 >   * Decorator
 > * Programming Languages in use
 >   * C++
 > * Tools in Use
 >   * GTest
 >   * Valgrind
 > * Inputs
 >   * User data - from menu
 >   * User data - from textual inputs
 > * Outputs
 >   * Save file data, in order to save user data and dates across boots (using input/output file streams to/from txt files).
 >   * Graphical Display
 >      * Can be changed with menu options which affect terminal display
 >
 > Your project description should summarize the project you are proposing. Be sure to include
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 > * What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:
 >   * Why you picked this pattern and what feature you will implement with it
 >   * What problem you anticipate encountering when implementing your project that you will solve using the design pattern
 >   * Why the chosen design pattern will lead to a good solution to that problem
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
