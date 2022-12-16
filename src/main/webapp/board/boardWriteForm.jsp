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
<jsp:include page="../header.jsp" />
</head>
<body>
    <h1>Board</h1>
    <div class="form-container">
        <form method="post" action="boardWrite">
			<input type="text" name="nick" placeholder="닉네임" required>
			<input type="password" name="password" placeholder="비밀번호" required>
        
			<input type="text" name="title" placeholder="제목" required>
			<textarea name="content" rows="20" placeholder="글 내용" required></textarea>
			<input type="submit" value="글등록">
		</form>
       
    </div>
</body>
</html>