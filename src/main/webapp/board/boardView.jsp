<%@page import="board.BoardDto"%>
<%@page import="board.BoardDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html lang="en">
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
	BoardDto board = null;
	
	request.setCharacterEncoding("utf-8");
	if(request.getParameter("no") != null) {
		int no = Integer.parseInt(request.getParameter("no"));
		board = dao.getBoardByNo(no); %>

	<h1>EZEN BOARD</h1>
	<div class="form-container">
		<form method="post" action="boardDelete">
			<input type="hidden" name="no" value="<%=no%>"> <input
				type="hidden" id="boardNo" value="<%=no%>"> <input
				type="hidden" id="password" value="<%=board.getPassword()%>">
			<input type="text" value="<%=board.getTitle() %>" readonly>
			<textarea rows="20" readonly><%=board.getContent() %></textarea>
			<input type="button" onclick="location.href='board'" value="글목록">
			<input type="button" onclick="boardDelete(form)" value="글삭제"> 
			<input type="button" onclick="boardUpdate(form)" value="글수정">
		</form>
	</div>
	<% } 
	else {
		response.sendRedirect("board"); // board 조회 실패 -> 페이지 	
	}%>
	<script >
	function boardUpdate(form){
	    let pw = prompt('비밀번호를 입력하세요');
		console.log(form.password.value);
	    if (form.password.value !== pw){
	        alert('비밀번호가 틀렸습니다.');
	    } else {
	        location.href="boardUpdateForm?no=" + form.boardNo.value;
	    }
	}
	
	function boardDelete(form){
	    let pw = prompt('비밀번호를 입력하세요');
	    if (form.password.value !== pw){
	        alert('비밀번호가 틀렸습니다.');
	    } else {
	    	form.submit();
	    }
	}
	
	</script>
</body>
</html>