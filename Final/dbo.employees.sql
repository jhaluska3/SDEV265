CREATE TABLE [dbo].[employees] (
    [Id]       INT           IDENTITY (1, 1) NOT NULL,
    [username] VARCHAR (100) NOT NULL,
    [password] VARCHAR (100) NOT NULL,
    [isAdmin]  BIT           NOT NULL DEFAULT 0,
    PRIMARY KEY CLUSTERED ([Id] ASC),
    UNIQUE NONCLUSTERED ([username] ASC)
);

