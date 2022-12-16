package board;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Timestamp;
import java.util.ArrayList;

import util.DBManager;

public class BoardDao {

	private Connection conn;
	private PreparedStatement pstmt;
	private ResultSet rs;

	// 단일한 인스턴스 제공
	// 싱글톤으로 구현
	private BoardDao() {
		this.conn = null;
		this.pstmt = null;
		this.rs = null;
				
	}
	private static BoardDao instance = new BoardDao();
	public static BoardDao getInstance() {
		return instance;
	}
	
	// CRUD
	// Create Read Update Delete
	// 모든 게시글 다 가져오기
	public ArrayList<BoardDto> getBoardAll(){ 
		ArrayList<BoardDto> list = new ArrayList<BoardDto>();
		String sql = "SELECT * FROM board ORDER BY `no` DESC";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.user, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.rs = pstmt.executeQuery();
			
			while(this.rs.next()) {
				int no = this.rs.getInt(1);
				String title = this.rs.getString(2);
				String content = this.rs.getString(3);
				String user = this.rs.getString(4);
				String password = this.rs.getString(5);
				Timestamp regDate = this.rs.getTimestamp(6);
				Timestamp modDate = this.rs.getTimestamp(7);
				int viewCnt = this.rs.getInt(8);
				
				BoardDto board = new BoardDto(no, title, content, user, password, regDate, modDate, viewCnt);
				list.add(board);
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally{
			try {
				rs.close();
				pstmt.close();
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
				
			}
		}
		
		return list;
	}
	
	// 2. one
	// 번호와 일치하는 게시글 하나 가져오기
	public BoardDto getBoardByNo(int no) {
		BoardDto board = null;
		String sql = "SELECT * FROM board WHERE `no` = ?";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.user, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setInt(1, no);
			this.rs = pstmt.executeQuery();
			
			if(this.rs.next()) {
				String title = this.rs.getString(2);
				String content = this.rs.getString(3);
				String user = this.rs.getString(4);
				String password = this.rs.getString(5);
				Timestamp regDate = this.rs.getTimestamp(6);
				Timestamp modDate = this.rs.getTimestamp(7);
				int viewCnt = this.rs.getInt(8);
				
				board = new BoardDto(no, title, content, user, password, regDate, modDate, viewCnt);
			}
			
		} catch (Exception e) {
			e.printStackTrace();
		} 
		
		return board;
	}
	
	
	// 글 저장하기
	public void createBoard(BoardDto board) {
		String sql = "insert into board values(?, ?, ?, ?, ?, ?, ?, ?);";
		int no = noGenerator();
		
		try {
			this.conn = DBManager.getConnection(this.url, this.user, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setInt(1, no); // 메소드 분리
			this.pstmt.setString(2, board.getTitle());
			this.pstmt.setString(3, board.getContent());
			this.pstmt.setString(4, board.getUser());
			this.pstmt.setString(5, board.getPassword());
	
			Timestamp now = new Timestamp(System.currentTimeMillis());
			this.pstmt.setTimestamp(6, now);
			this.pstmt.setTimestamp(7, now);
			this.pstmt.setInt(8, 0); 
			
			this.pstmt.execute();
			
		} catch (Exception e) {
			e.printStackTrace();
		} finally{
			try {
				pstmt.close();
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
				
			}
		}
	}
	
	// 게시글 번호 가져오기
	private int noGenerator() {
		String sql = "SELECT MAX(`no`) FROM board";
		int no = 0;
		
		try {
			this.conn = DBManager.getConnection(this.url, this.user, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.rs = pstmt.executeQuery();
			
			while(this.rs.next()) {
				no = this.rs.getInt(1);
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally{
			try {
				rs.close();
				pstmt.close();
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
				
			}
		}
		
		return ++no;
	}
	
	// 게시글 수정하기
	public void updateBoard(BoardDto board) {
        String sql = "update board set title = ?, content = ?, modDate = ? where `no` = ?;";
        
        int no = board.getNo();
        String title = board.getTitle();
        String content = board.getContent();
//      String password = board.getPassword();
        
        try {
            this.conn = DBManager.getConnection(this.url, this.user, this.pw);
            this.pstmt = this.conn.prepareStatement(sql);
            this.pstmt.setString(1, title);
            this.pstmt.setString(2, content);
            
            Timestamp now = new Timestamp(System.currentTimeMillis());
			this.pstmt.setTimestamp(3, now);
            this.pstmt.setInt(4, no);
            this.pstmt.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                this.pstmt.close();
                this.conn.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
	}
	
	// 게시글 삭제하기
	public void deleteBoard(int no) {
        String sql = "DELETE FROM board WHERE `no` = ?;";
        
        try {
            this.conn = DBManager.getConnection(this.url, this.user, this.pw);
            this.pstmt = this.conn.prepareStatement(sql);
            this.pstmt.setInt(1, no);
            this.pstmt.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                this.pstmt.close();
                this.conn.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}
