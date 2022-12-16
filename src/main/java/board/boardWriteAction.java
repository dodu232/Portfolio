package board;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class boardWriteAction
 */
//@WebServlet("/boardWriteAction")
public class boardWriteAction extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public boardWriteAction() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());
	
	    BoardDao dao = BoardDao.getInstance();
	    
	    String title = request.getParameter("title");
	    String content = request.getParameter("content");
	    String nick = request.getParameter("nick");
	    String password = request.getParameter("password");

	        BoardDto board = new BoardDto(title, content, nick, password);
	        dao.createBoard(board);
	   
	    
//	    request.getRequestDispatcher("board").forward(request, response);
	    response.sendRedirect("board");
	
	
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
