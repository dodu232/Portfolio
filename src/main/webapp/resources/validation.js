function checkForm(form) {
    if (form.log.value === 'null') {
        alert('로그인 후 이용할 수 있습니다.');
    } else {
        form.submit();
    }

}

function checkMypage(form){
    if (form.log.value === 'null') {
        alert('로그인 후 이용할 수 있습니다.');
    } else {
        location.href="mypage.jsp";
    }
}

function checkpassword(form){
    let pw = prompt('비밀번호를 입력하세요');
    if (form.password.value !== pw){
        alert('비밀번호가 틀렸습니다.');
    } else {
        location.href="boardUpdateForm?no=" + form.boardNo.value;
    }
}