
public class warshall {
	public static void main(String args[]) {
		
		int graph[][]={ {0,   5,  10000, 10}, 
                {10000, 0,   3, 10000}, 
                {10000, 10000, 0,   1}, 
                {10000, 10000, 10000, 0} 
              }; 
		
		int vertex=4;
		int solution[][]=new int[vertex][vertex];
		
		//Initially copy the given graph in solution array
		
		for(int i=0;i<vertex;i++) {
			for(int j=0;j<vertex;j++) {
				solution[i][j]=graph[i][j];
			}
		}
		
		//v is a vertex through which we can travel
		for(int v=0;v<vertex;v++) {
			for(int i=0;i<vertex;i++) {
				for(int j=0;j<vertex;j++) {
					if(solution[i][j]>(solution[i][v]+solution[v][j])) {
						solution[i][j]=solution[i][v]+solution[v][j];
					}
				}
			}
		}
		for(int i=0;i<vertex;i++) {
			for(int j=0;j<vertex;j++) {
				System.out.print(solution[i][j]+"		");
			}
			System.out.println();
		}
	}
}
