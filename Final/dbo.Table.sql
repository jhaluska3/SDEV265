CREATE TABLE [dbo].[timeClock]
(
	[ID] INT NOT NULL PRIMARY KEY, 
    [punchIn] TIMESTAMP NOT NULL, 
    [punchOut] TIMESTAMP NOT NULL, 
    [isPunchedIn] BIT NULL, 
    [isPunchedOut] BIT NULL
)
