CREATE TABLE [dbo].[Schedule
](
	[Id] [int] NOT NULL,
	[Monday] [varchar](50) NULL,
	[Tuesday] [varchar](50) NULL,
	[Wednesday] [varchar](50) NULL,
	[Thursday] [varchar](50) NULL,
	[Friday] [varchar](50) NULL,
	[Saturday] [varchar](50) NULL,
	[Sunday] [varchar](50) NULL,
PRIMARY KEY CLUSTERED 
(
	[Id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO

