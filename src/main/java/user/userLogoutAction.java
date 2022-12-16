package user;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class userLogoutAction
 */
//@WebServlet("/userLogoutAction")
public class userLogoutAction extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public userLogoutAction() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());
		
		HttpSession session = request.getSession();
		// 로그 아웃 처리나 로그인이 필요한 서비스 로직 처리할때
		String log = (String) session.getAttribute("log"); // 리턴 타입: Object -> 형변환 후 사용
		if(log != null) {
			// 로그인한 회원에게만 처리될 로직
			session.removeAttribute("log"); // 로그아웃 처리
			System.out.println(log);
			response.sendRedirect("index");
		}
		else {
			// 로그인 페이지로 흐름 제어 또는 홈으로 돌려보냄
		}
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
