SET IDENTITY_INSERT [dbo].[employees] ON
INSERT INTO [dbo].[employees] ([Id], [username], [password]) VALUES (1, N'user1', N'pass1')
INSERT INTO [dbo].[employees] ([Id], [username], [password]) VALUES (2, N'user2', N'pass 2')
INSERT INTO [dbo].[employees] ([Id], [username], [password]) VALUES (3, N'user3', N'pass3')
SET IDENTITY_INSERT [dbo].[employees] OFF
