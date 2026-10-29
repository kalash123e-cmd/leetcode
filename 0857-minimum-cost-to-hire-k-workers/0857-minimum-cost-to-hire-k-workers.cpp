class Solution {
public:
    double mincostToHireWorkers(vector<int>& q, vector<int>& w, int k) {
        // priority_queue<pair<double,double>, vector<pair<double,double>>, greater<pair<double,double>>> pq;

        vector<vector<double>> pq;
        for(int i = 0; i<q.size(); i++){
            double avg = (double)w[i]/q[i];
            pq.push_back({avg,(double)q[i]});
        }
        sort(pq.begin(),pq.end());
        double x = 0;
        priority_queue<pair<double,double>> pq2;
        // while(k--){
        //     x = pq.top().first;
        //     pq2.push({pq.top().second,pq.top().first});
        //     pq.pop();
        // }
        double sum = 0;
        for(int i = 0 ;i<k; i++){
            sum += pq[i][1];
            x = pq[i][0];
            pq2.push({pq[i][1],pq[i][0]});
        }
        double res = sum*x;
        sum -= pq2.top().first;
        pq2.pop();
        for(int i = k; i<pq.size(); i++){
            sum += pq[i][1];
            x = pq[i][0];
            pq2.push({pq[i][1],pq[i][0]});
            res = min(res,sum*x);
            sum -= pq2.top().first;
            pq2.pop();
        }
        // priority_queue<pair<double,double>> temp = pq2;
        // double sum = 0;
        // while(!temp.empty()){
        //     sum += temp.top().first * x;
        //     temp.pop();
        // }
        // pq2.pop();
        // double res = sum;
        // while(!pq.empty()){
        //     x = pq.top().first;
        //     pq2.push({pq.top().second,x});
        //     pq.pop();
        //     sum = 0;
        //     temp = pq2;
        //     while(!temp.empty()){
        //         sum += temp.top().first * x;
        //         temp.pop();
        //     }
        //     res = min(res,sum);
        //     pq2.pop();
        // }
        return res;
    }
};