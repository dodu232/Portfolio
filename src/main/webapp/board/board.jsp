<%@page import="java.util.ArrayList"%>
<%@page import="board.BoardDto"%>
<%@page import="board.BoardDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
	<link rel="stylesheet" href="resources/table.css">
<title>Insert title here</title>
</head>
<%@include file="../header.jsp" %>
<body>
	<%

	BoardDao dao = BoardDao.getInstance();
	ArrayList<BoardDto> list = dao.getBoardAll();
	%>
	<h1>Board</h1>
	<div class="table-container">
		<table border="1">
			<thead>
				<tr>
					<th>no.</th>
					<th width="200px">title</th>
					<th>content</th>
					<th>user</th>
					<th>password</th>
					<th>regDate</th>
					<th>modDate</th>
					<th>viewCnt</th>
				</tr>
			</thead>
			<tbody>
			<%for(BoardDto b : list){%>
				<tr>
					<td><%= b.getNo() %></td>
					<td><a href="boardView?no=<%=b.getNo()%>"><%= b.getTitle() %></a></td>
					<td><%= b.getContent()%></td>
					<td><%=b.getUser() %></td>
					<td><%for(int i=0; i<b.getPassword().length(); i++){%>*<%}%></td>
					<td><%=b.getRegDate() %></td>
					<td><%=b.getModDate() %></td>
					<td><%=b.getViewCnt() %></td>
				</tr>
				<%} %>
			</tbody>
		</table>

		<button onclick="location.href='boardWriteForm'">글쓰기</button>
	</div>
</body>
</html>