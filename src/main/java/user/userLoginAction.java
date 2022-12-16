package user;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.json.JSONObject;

/**
 * Servlet implementation class LoginAction
 */
//@WebServlet("/LoginAction")
public class userLoginAction extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public userLoginAction() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());
		
		UserDao dao = UserDao.getInstance();
		
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		
		
		if(dao.loginUser(id, pw)) {
			// 파라미터로 넘겨받은 id/pw가 기존 보유하고 있는(테이블 조회) 멤버와 일치하는 경우,
			// session에 log값을 부여
			HttpSession session = request.getSession();
			session.setAttribute("log", id); // setAttribute() -> 활용
			session.setAttribute("logPw", pw); 
			response.sendRedirect("index");
		}
		else {
			request.getRequestDispatcher("login").forward(request, response);
		}
		
		// 1. 파라미터로 넘어온 id, pw를 활용 -> 
		// 2. UserDao.check =false; -> 유저가 있는 지 확인 
		// 3. 같은 유적 ㅏ있으면 check가 true 면
		// 3-1. true -> json
		// 3-2. Object -> json 데이터 반환
//		
//		boolean check = dao.checkId(id);
//		
//		if(check) { // 가입 실패
//			response.getWriter().append("null");
//		} else { // 가입 성공
//			JSONObject data = new JsonObject(user);
//			response.getWriter().append(data.toString());
//		}
//		
//		
//		// 로그 아웃 처리나 로그인이 필요한 서비스 로직 처리할때
//		String log = (String) session.getAttribute("log"); // 리턴 타입: Object -> 형변환 후 사용
//		if(log != null) {
//			// 로그인한 회원에게만 처리될 로직
//			session.removeAttribute("log"); // 로그아웃 처리
//		}
//		else {
//			// 로그인 페이지로 흐름 제어 또는 홈으로 돌려보냄
//		}
		
		
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
	    request.setCharacterEncoding("utf-8");
	    response.setCharacterEncoding("utf-8");
		doGet(request, response);
	}

}
