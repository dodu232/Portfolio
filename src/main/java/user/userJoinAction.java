package user;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import board.BoardDao;

/**
 * Servlet implementation class UserJoinAction
 */
@WebServlet("/UserJoinAction")
public class userJoinAction extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public userJoinAction() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());

		UserDao dao = UserDao.getInstance();

		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		String pwCheck = request.getParameter("pwCheck");
		String name = request.getParameter("name");
		String phone = request.getParameter("phone");
		String address = request.getParameter("address");
		String license = request.getParameter("license");

		// id가 같으면 안됨
		// 비밀번호 확인이랑 일치

		if (!dao.checkId(id)) { // 동일 아이디가 없음
			if (pw.equals(pwCheck)) { // 비밀번호 일치
				UserDto user = new UserDto(id, pw, name, phone, address, license);
				dao.createUser(user);

				response.sendRedirect("index");
			}else {
				// 틀리면 비밀번호 불일치 메시지 띄워주고 싶음
				request.getRequestDispatcher("join").forward(request, response);
				
			}

		}
		// 아이디 있다는 메시지 띄워주고 싶음
		// 정보 저장
//		request.getRequestDispatcher("join").forward(request, response);

	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		request.setCharacterEncoding("utf-8");
		response.setCharacterEncoding("utf-8");
		doGet(request, response);
	}

}
