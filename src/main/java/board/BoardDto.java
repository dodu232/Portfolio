package board;

import java.sql.Timestamp;

public class BoardDto {

	// no title content user password regDate modDate viewCnt
	private int no;
	private String title;
	private String content;
	private String user;
	private String password;
	private Timestamp regDate;
	private Timestamp modDate;
	private int viewCnt;
	
	public BoardDto(int no, String title, String content, String user, String password, Timestamp regDate,
			Timestamp modDate, int viewCnt) {
		this.no = no;
		this.title = title;
		this.content = content;
		this.user = user;
		this.password = password;
		this.regDate = regDate;
		this.modDate = modDate;
		this.viewCnt = viewCnt;
	}
	   
    public BoardDto(String title, String content, String user, String password) {
        super();
        this.title = title;
        this.content = content;
        this.user = user;
        this.password = password;
    }
    
    public BoardDto(int no, String title, String content, String password) {
        super();
        this.no = no;
        this.title = title;
        this.content = content;
        this.password = password;
    }
    
	
    // getter
	public int getNo() {
		return no;
	}

	public String getTitle() {
		return title;
	}

	public String getContent() {
		return content;
	}

	public String getUser() {
		return user;
	}

	public String getPassword() {
		return password;
	}

	public Timestamp getRegDate() {
		return regDate;
	}

	public Timestamp getModDate() {
		return modDate;
	}

	public int getViewCnt() {
		return viewCnt;
	}
	
	// setter
	public void setTitle(String title) {
		this.title = title;
	}

	public void setContent(String content) {
		this.content = content;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public void setModDate(Timestamp modDate) {
		this.modDate = modDate;
	}

	public void setViewCnt(int viewCnt) {
		this.viewCnt = viewCnt;
	}
	
	
	
}
