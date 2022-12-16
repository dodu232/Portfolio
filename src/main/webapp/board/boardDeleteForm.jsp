<%@page import="board.BoardDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="resources/form.css">
    <title>Board</title>
</head>
<jsp:include page="../header.jsp" />
<body>
     <%
	BoardDao dao = BoardDao.getInstance();
	BoardDao board = null;
	
	request.setCharacterEncoding("utf-8");
	if(request.getParameter("no") != null) {
		int no = Integer.parseInt(request.getParameter("no"));
		
		%>

    <h1>EZEN BOARD</h1>
    <div class="form-container">
        <form method="post" action="boardDelete">
        	<input type="hidden" name="no" value="<%=no%>">
        	<p>비밀번호를 입력하세요</p>
            <input type="password" >
            <input type="button" onclick="location.href='boardView.jsp?no=<%=no%>'" value="취소">
            <input type="submit" value="확인">
        </form>
    </div>
	<%}
	else {
		response.sendRedirect("index"); //borad 조회 실패 -> 페이지 이
	}%>
</body>
</html>