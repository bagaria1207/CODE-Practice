bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int flag=0;
    if(matrix.size()==1){
        return true;
    }
    else{
        for(int i=0;i<matrix.size();i++){
            int k=i;
            if(i+1<matrix.size()){
                for(int j=1;j<matrix[i].size() && k<matrix.size();j++){
                    if(matrix[i][j-1]==matrix[k+1][j]){
                        flag++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        int num = (matrix[0].size() - 1) * (matrix.size() - 1);
        if(flag==num){
            return true;
        }
        else{
            return false;
        }
    }
}
